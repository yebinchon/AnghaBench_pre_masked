
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


struct elf_link_loaded_list {TYPE_11__* abfd; struct elf_link_loaded_list* next; } ;
struct TYPE_49__ {int string; } ;
struct TYPE_46__ {TYPE_5__* p; } ;
struct TYPE_43__ {TYPE_2__* section; } ;
struct TYPE_41__ {TYPE_11__* abfd; } ;
struct TYPE_47__ {TYPE_6__ c; TYPE_3__ def; TYPE_1__ undef; } ;
struct TYPE_34__ {int type; TYPE_9__ root; TYPE_7__ u; } ;
struct elf_link_hash_entry {TYPE_10__ root; } ;
struct elf_backend_data {TYPE_8__* s; } ;
struct bfd_link_info {int hash; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_35__ {int flags; } ;
typedef TYPE_11__ bfd ;
struct TYPE_48__ {int sizeof_sym; } ;
struct TYPE_45__ {TYPE_4__* section; } ;
struct TYPE_44__ {TYPE_11__* owner; } ;
struct TYPE_42__ {TYPE_11__* owner; } ;
struct TYPE_40__ {struct elf_link_loaded_list* loaded; } ;
struct TYPE_38__ {int sh_size; int sh_info; int sh_link; int sh_offset; } ;
struct TYPE_39__ {TYPE_14__ dynversym_hdr; TYPE_14__ dynsymtab_hdr; } ;
struct TYPE_37__ {scalar_t__ st_shndx; int st_name; int st_info; } ;
struct TYPE_36__ {int vs_vers; } ;
typedef TYPE_12__ Elf_Internal_Versym ;
typedef TYPE_13__ Elf_Internal_Sym ;
typedef TYPE_14__ Elf_Internal_Shdr ;
typedef TYPE_13__ Elf_External_Versym ;


 int BFD_ASSERT (int ) ;
 int DYNAMIC ;
 int DYN_DT_NEEDED ;
 scalar_t__ ELF_ST_BIND (int ) ;
 int FALSE ;
 int SEEK_SET ;
 scalar_t__ SHN_UNDEF ;
 scalar_t__ STB_LOCAL ;
 int TRUE ;
 int VERSYM_HIDDEN ;
 unsigned short VERSYM_VERSION ;
 int _bfd_elf_swap_versym_in (TYPE_11__*,TYPE_13__*,TYPE_12__*) ;
 int abort () ;
 scalar_t__ bfd_bread (TYPE_13__*,int,TYPE_11__*) ;
 TYPE_13__* bfd_elf_get_elf_syms (TYPE_11__*,TYPE_14__*,int,int,int *,int *,int *) ;
 char* bfd_elf_string_from_elf_section (TYPE_11__*,int ,int ) ;





 TYPE_13__* bfd_malloc (int) ;
 scalar_t__ bfd_seek (TYPE_11__*,int ,int ) ;
 scalar_t__ elf_bad_symtab (TYPE_11__*) ;
 int elf_dyn_lib_class (TYPE_11__*) ;
 scalar_t__ elf_dynversym (TYPE_11__*) ;
 TYPE_19__* elf_hash_table (struct bfd_link_info*) ;
 TYPE_17__* elf_tdata (TYPE_11__*) ;
 int free (TYPE_13__*) ;
 int is_elf_hash_table (int ) ;
 scalar_t__ strcmp (char const*,int ) ;

__attribute__((used)) static bfd_boolean
elf_link_check_versioned_symbol (struct bfd_link_info *info,
     const struct elf_backend_data *bed,
     struct elf_link_hash_entry *h)
{
  bfd *abfd;
  struct elf_link_loaded_list *loaded;

  if (!is_elf_hash_table (info->hash))
    return FALSE;

  switch (h->root.type)
    {
    default:
      abfd = ((void*)0);
      break;

    case 129:
    case 128:
      abfd = h->root.u.undef.abfd;
      if ((abfd->flags & DYNAMIC) == 0
   || (elf_dyn_lib_class (abfd) & DYN_DT_NEEDED) == 0)
 return FALSE;
      break;

    case 131:
    case 130:
      abfd = h->root.u.def.section->owner;
      break;

    case 132:
      abfd = h->root.u.c.p->section->owner;
      break;
    }
  BFD_ASSERT (abfd != ((void*)0));

  for (loaded = elf_hash_table (info)->loaded;
       loaded != ((void*)0);
       loaded = loaded->next)
    {
      bfd *input;
      Elf_Internal_Shdr *hdr;
      bfd_size_type symcount;
      bfd_size_type extsymcount;
      bfd_size_type extsymoff;
      Elf_Internal_Shdr *versymhdr;
      Elf_Internal_Sym *isym;
      Elf_Internal_Sym *isymend;
      Elf_Internal_Sym *isymbuf;
      Elf_External_Versym *ever;
      Elf_External_Versym *extversym;

      input = loaded->abfd;


      if (input == abfd
   || (input->flags & DYNAMIC) == 0
   || elf_dynversym (input) == 0)
 continue;

      hdr = &elf_tdata (input)->dynsymtab_hdr;

      symcount = hdr->sh_size / bed->s->sizeof_sym;
      if (elf_bad_symtab (input))
 {
   extsymcount = symcount;
   extsymoff = 0;
 }
      else
 {
   extsymcount = symcount - hdr->sh_info;
   extsymoff = hdr->sh_info;
 }

      if (extsymcount == 0)
 continue;

      isymbuf = bfd_elf_get_elf_syms (input, hdr, extsymcount, extsymoff,
          ((void*)0), ((void*)0), ((void*)0));
      if (isymbuf == ((void*)0))
 return FALSE;


      versymhdr = &elf_tdata (input)->dynversym_hdr;
      extversym = bfd_malloc (versymhdr->sh_size);
      if (extversym == ((void*)0))
 goto error_ret;

      if (bfd_seek (input, versymhdr->sh_offset, SEEK_SET) != 0
   || (bfd_bread (extversym, versymhdr->sh_size, input)
       != versymhdr->sh_size))
 {
   free (extversym);
 error_ret:
   free (isymbuf);
   return FALSE;
 }

      ever = extversym + extsymoff;
      isymend = isymbuf + extsymcount;
      for (isym = isymbuf; isym < isymend; isym++, ever++)
 {
   const char *name;
   Elf_Internal_Versym iver;
   unsigned short version_index;

   if (ELF_ST_BIND (isym->st_info) == STB_LOCAL
       || isym->st_shndx == SHN_UNDEF)
     continue;

   name = bfd_elf_string_from_elf_section (input,
        hdr->sh_link,
        isym->st_name);
   if (strcmp (name, h->root.root.string) != 0)
     continue;

   _bfd_elf_swap_versym_in (input, ever, &iver);

   if ((iver.vs_vers & VERSYM_HIDDEN) == 0)
     {


       abort ();
     }

   version_index = iver.vs_vers & VERSYM_VERSION;
   if (version_index == 1 || version_index == 2)
     {

       free (extversym);
       free (isymbuf);
       return TRUE;
     }
 }

      free (extversym);
      free (isymbuf);
    }

  return FALSE;
}
