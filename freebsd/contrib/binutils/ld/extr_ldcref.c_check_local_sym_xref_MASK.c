
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct lang_nocrossrefs {struct lang_nocrossref* list; struct lang_nocrossrefs* next; } ;
struct lang_nocrossref {int name; struct lang_nocrossref* next; } ;
struct TYPE_15__ {long symbol_count; TYPE_4__** asymbols; TYPE_3__* the_bfd; } ;
typedef TYPE_2__ lang_input_statement_type ;
struct TYPE_16__ {TYPE_2__* usrdata; } ;
typedef TYPE_3__ bfd ;
struct TYPE_17__ {int flags; char* name; TYPE_8__* section; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_18__ {TYPE_1__* output_section; } ;
struct TYPE_14__ {char* name; } ;


 int BSF_FILE ;
 int BSF_GLOBAL ;
 int BSF_INDIRECT ;
 int BSF_LOCAL ;
 int BSF_SECTION_SYM ;
 int BSF_WARNING ;
 int FALSE ;
 int _ (char*) ;
 long bfd_canonicalize_symtab (TYPE_3__*,TYPE_4__**) ;
 long bfd_get_symtab_upper_bound (TYPE_3__*) ;
 int check_refs (char const*,int ,TYPE_8__*,TYPE_3__*,struct lang_nocrossrefs*) ;
 int einfo (int ,TYPE_3__*) ;
 int free (TYPE_4__**) ;
 struct lang_nocrossrefs* nocrossref_list ;
 scalar_t__ strcmp (int ,char const*) ;
 TYPE_4__** xmalloc (long) ;

__attribute__((used)) static void
check_local_sym_xref (lang_input_statement_type *statement)
{
  bfd *abfd;
  lang_input_statement_type *li;
  asymbol **asymbols, **syms;

  abfd = statement->the_bfd;
  if (abfd == ((void*)0))
    return;

  li = abfd->usrdata;
  if (li != ((void*)0) && li->asymbols != ((void*)0))
    asymbols = li->asymbols;
  else
    {
      long symsize;
      long symbol_count;

      symsize = bfd_get_symtab_upper_bound (abfd);
      if (symsize < 0)
 einfo (_("%B%F: could not read symbols; %E\n"), abfd);
      asymbols = xmalloc (symsize);
      symbol_count = bfd_canonicalize_symtab (abfd, asymbols);
      if (symbol_count < 0)
 einfo (_("%B%F: could not read symbols: %E\n"), abfd);
      if (li != ((void*)0))
 {
   li->asymbols = asymbols;
   li->symbol_count = symbol_count;
 }
    }

  for (syms = asymbols; *syms; ++syms)
    {
      asymbol *sym = *syms;
      if (sym->flags & (BSF_GLOBAL | BSF_WARNING | BSF_INDIRECT | BSF_FILE))
 continue;
      if ((sym->flags & (BSF_LOCAL | BSF_SECTION_SYM)) != 0
   && sym->section->output_section != ((void*)0))
 {
   const char *outsecname, *symname;
   struct lang_nocrossrefs *ncrs;
   struct lang_nocrossref *ncr;

   outsecname = sym->section->output_section->name;
   symname = ((void*)0);
   if ((sym->flags & BSF_SECTION_SYM) == 0)
     symname = sym->name;
   for (ncrs = nocrossref_list; ncrs != ((void*)0); ncrs = ncrs->next)
     for (ncr = ncrs->list; ncr != ((void*)0); ncr = ncr->next)
       if (strcmp (ncr->name, outsecname) == 0)
  check_refs (symname, FALSE, sym->section, abfd, ncrs);
 }
    }

  if (li == ((void*)0))
    free (asymbols);
}
