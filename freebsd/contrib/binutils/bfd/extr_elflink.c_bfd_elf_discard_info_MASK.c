
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_11__ ;


struct elf_reloc_cookie {int locsymcount; int extsymoff; int r_sym_shift; int * locsyms; int * rels; int * relend; int * rel; scalar_t__ bad_symtab; int sym_hashes; TYPE_3__* abfd; } ;
struct elf_backend_data {scalar_t__ (* elf_backend_discard_info ) (TYPE_3__*,struct elf_reloc_cookie*,struct bfd_link_info*) ;TYPE_2__* s; } ;
struct bfd_link_info {int relocatable; scalar_t__ eh_frame_hdr; int keep_memory; TYPE_1__* callbacks; TYPE_3__* input_bfds; int hash; scalar_t__ traditional_format; } ;
typedef int bfd_boolean ;
struct TYPE_30__ {int flags; struct TYPE_30__* link_next; } ;
typedef TYPE_3__ bfd ;
struct TYPE_31__ {scalar_t__ size; scalar_t__ sec_info_type; unsigned int reloc_count; int output_section; } ;
typedef TYPE_4__ asection ;
struct TYPE_32__ {int sh_size; int sh_info; unsigned char* contents; } ;
struct TYPE_33__ {TYPE_5__ symtab_hdr; } ;
struct TYPE_29__ {int sizeof_sym; int arch_size; unsigned int int_rels_per_ext_rel; } ;
struct TYPE_28__ {int (* einfo ) (int ) ;} ;
struct TYPE_27__ {int * relocs; int sec_info; } ;
typedef int Elf_Internal_Sym ;
typedef TYPE_5__ Elf_Internal_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*,int ,int ,struct elf_reloc_cookie*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,struct bfd_link_info*,TYPE_4__*,int ,struct elf_reloc_cookie*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct bfd_link_info*) ;
 void* FUNC_4 (TYPE_3__*,TYPE_4__*,int *,int *,int ) ;
 int * FUNC_5 (TYPE_3__*,TYPE_5__*,int,int ,int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 TYPE_11__* FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_8__* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 struct elf_backend_data* FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (TYPE_3__*,struct elf_reloc_cookie*,struct bfd_link_info*) ;

bfd_boolean
FUNC_18 (bfd *VAR_6, struct bfd_link_info *VAR_7)
{
  struct elf_reloc_cookie VAR_8;
  asection *VAR_9, *VAR_10;
  Elf_Internal_Shdr *VAR_11;
  const struct elf_backend_data *VAR_12;
  bfd *VAR_13;
  unsigned int VAR_14;
  bfd_boolean VAR_15 = VAR_2;

  if (VAR_7->traditional_format
      || !FUNC_15 (VAR_7->hash))
    return VAR_2;

  for (VAR_13 = VAR_7->input_bfds; VAR_13 != ((void*)0); VAR_13 = VAR_13->link_next)
    {
      if (FUNC_6 (VAR_13) != VAR_5)
 continue;

      VAR_12 = FUNC_14 (VAR_13);

      if ((VAR_13->flags & VAR_0) != 0)
 continue;

      VAR_10 = ((void*)0);
      if (!VAR_7->relocatable)
 {
   VAR_10 = FUNC_7 (VAR_13, ".eh_frame");
   if (VAR_10 != ((void*)0)
       && (VAR_10->size == 0
    || FUNC_8 (VAR_10->output_section)))
     VAR_10 = ((void*)0);
 }

      VAR_9 = FUNC_7 (VAR_13, ".stab");
      if (VAR_9 != ((void*)0)
   && (VAR_9->size == 0
       || FUNC_8 (VAR_9->output_section)
       || VAR_9->sec_info_type != VAR_1))
 VAR_9 = ((void*)0);

      if (VAR_9 == ((void*)0)
   && VAR_10 == ((void*)0)
   && VAR_12->elf_backend_discard_info == ((void*)0))
 continue;

      VAR_11 = &FUNC_12 (VAR_13)->symtab_hdr;
      VAR_8.abfd = VAR_13;
      VAR_8.sym_hashes = FUNC_11 (VAR_13);
      VAR_8.bad_symtab = FUNC_9 (VAR_13);
      if (VAR_8.bad_symtab)
 {
   VAR_8.locsymcount = VAR_11->sh_size / VAR_12->s->sizeof_sym;
   VAR_8.extsymoff = 0;
 }
      else
 {
   VAR_8.locsymcount = VAR_11->sh_info;
   VAR_8.extsymoff = VAR_11->sh_info;
 }

      if (VAR_12->s->arch_size == 32)
 VAR_8.r_sym_shift = 8;
      else
 VAR_8.r_sym_shift = 32;

      VAR_8.locsyms = (Elf_Internal_Sym *) VAR_11->contents;
      if (VAR_8.locsyms == ((void*)0) && VAR_8.locsymcount != 0)
 {
   VAR_8.locsyms = FUNC_5 (VAR_13, VAR_11,
       VAR_8.locsymcount, 0,
       ((void*)0), ((void*)0), ((void*)0));
   if (VAR_8.locsyms == ((void*)0))
     {
       VAR_7->callbacks->einfo (FUNC_0("%P%X: can not read symbols: %E\n"));
       return VAR_2;
     }
 }

      if (VAR_9 != ((void*)0))
 {
   VAR_8.rels = ((void*)0);
   VAR_14 = VAR_9->reloc_count;
   if (VAR_14 != 0)
     VAR_8.rels = FUNC_4 (VAR_13, VAR_9, ((void*)0), ((void*)0),
           VAR_7->keep_memory);
   if (VAR_8.rels != ((void*)0))
     {
       VAR_8.rel = VAR_8.rels;
       VAR_8.relend = VAR_8.rels;
       VAR_8.relend += VAR_14 * VAR_12->s->int_rels_per_ext_rel;
       if (FUNC_1 (VAR_13, VAR_9,
           FUNC_10 (VAR_9)->sec_info,
           VAR_4,
           &VAR_8))
  VAR_15 = VAR_3;
       if (FUNC_10 (VAR_9)->relocs != VAR_8.rels)
  FUNC_13 (VAR_8.rels);
     }
 }

      if (VAR_10 != ((void*)0))
 {
   VAR_8.rels = ((void*)0);
   VAR_14 = VAR_10->reloc_count;
   if (VAR_14 != 0)
     VAR_8.rels = FUNC_4 (VAR_13, VAR_10, ((void*)0), ((void*)0),
           VAR_7->keep_memory);
   VAR_8.rel = VAR_8.rels;
   VAR_8.relend = VAR_8.rels;
   if (VAR_8.rels != ((void*)0))
     VAR_8.relend += VAR_14 * VAR_12->s->int_rels_per_ext_rel;

   if (FUNC_2 (VAR_13, VAR_7, VAR_10,
       VAR_4,
       &VAR_8))
     VAR_15 = VAR_3;

   if (VAR_8.rels != ((void*)0)
       && FUNC_10 (VAR_10)->relocs != VAR_8.rels)
     FUNC_13 (VAR_8.rels);
 }

      if (VAR_12->elf_backend_discard_info != ((void*)0)
   && (*VAR_12->elf_backend_discard_info) (VAR_13, &VAR_8, VAR_7))
 VAR_15 = VAR_3;

      if (VAR_8.locsyms != ((void*)0)
   && VAR_11->contents != (unsigned char *) VAR_8.locsyms)
 {
   if (! VAR_7->keep_memory)
     FUNC_13 (VAR_8.locsyms);
   else
     VAR_11->contents = (unsigned char *) VAR_8.locsyms;
 }
    }

  if (VAR_7->eh_frame_hdr
      && !VAR_7->relocatable
      && FUNC_3 (VAR_6, VAR_7))
    VAR_15 = VAR_3;

  return VAR_15;
}
