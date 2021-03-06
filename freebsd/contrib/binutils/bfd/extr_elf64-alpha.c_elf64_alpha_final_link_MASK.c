
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_33__ ;
typedef struct TYPE_39__ TYPE_31__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_11__ ;


struct extsym_info {scalar_t__ failed; struct ecoff_debug_swap const* swap; struct ecoff_debug_info* debug; struct bfd_link_info* info; TYPE_5__* abfd; } ;
struct ecoff_debug_swap {int external_ext_size; int (* swap_ext_in ) (TYPE_5__*,scalar_t__,TYPE_8__*) ;int sym_magic; } ;
struct TYPE_45__ {int ifdMax; int iextMax; scalar_t__ crfd; scalar_t__ issExtMax; scalar_t__ issMax; scalar_t__ iauxMax; scalar_t__ ioptMax; scalar_t__ isymMax; scalar_t__ ipdMax; scalar_t__ idnMax; scalar_t__ cbLine; scalar_t__ ilineMax; scalar_t__ vstamp; int magic; } ;
struct ecoff_debug_info {char* line; char* external_dnr; char* external_pdr; char* external_sym; char* external_opt; char* external_aux; char* ss; char* ssext; char* external_fdr; char* external_rfd; char* external_ext; int* ifdmap; TYPE_7__ symbolic_header; int * external_ext_end; int * ssext_end; } ;
struct TYPE_37__ {TYPE_6__* section; } ;
struct TYPE_38__ {TYPE_1__ indirect; } ;
struct bfd_link_order {scalar_t__ type; scalar_t__ size; TYPE_2__ u; struct bfd_link_order* next; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_41__ {int iss; int sc; scalar_t__ value; int index; scalar_t__ reserved; int st; } ;
struct TYPE_46__ {int ifd; TYPE_3__ asym; scalar_t__ reserved; scalar_t__ weakext; scalar_t__ cobol_main; scalar_t__ jmptbl; } ;
struct alpha_elf_link_hash_entry {TYPE_8__ esym; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_43__ {int output_has_begun; TYPE_6__* sections; } ;
typedef TYPE_5__ bfd ;
struct TYPE_42__ {struct bfd_link_order* link_order; } ;
struct TYPE_44__ {scalar_t__ vma; scalar_t__ size; int filepos; scalar_t__ output_offset; int contents; int output_section; TYPE_4__ map_head; int flags; TYPE_5__* owner; int name; struct TYPE_44__* next; } ;
typedef TYPE_6__ asection ;
struct TYPE_40__ {TYPE_5__* got_list; } ;
struct TYPE_39__ {TYPE_6__* got; TYPE_5__* got_link_next; } ;
struct TYPE_36__ {TYPE_5__* dynobj; } ;
struct TYPE_35__ {struct ecoff_debug_swap* elf_backend_ecoff_debug_swap; } ;
typedef scalar_t__ PTR ;
typedef TYPE_7__ HDRR ;
typedef TYPE_8__ EXTR ;


 int BFD_ASSERT (int) ;
 scalar_t__ FALSE ;
 int SEC_HAS_CONTENTS ;
 scalar_t__ TRUE ;
 int abort () ;
 TYPE_33__* alpha_elf_hash_table (struct bfd_link_info*) ;
 struct alpha_elf_link_hash_entry* alpha_elf_link_hash_lookup (TYPE_33__*,char const*,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_31__* alpha_elf_tdata (TYPE_5__*) ;
 scalar_t__ bfd_data_link_order ;
 int bfd_ecoff_debug_accumulate (scalar_t__,TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,struct bfd_link_info*) ;
 int bfd_ecoff_debug_free (scalar_t__,TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,struct bfd_link_info*) ;
 scalar_t__ bfd_ecoff_debug_init (TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,struct bfd_link_info*) ;
 int bfd_ecoff_debug_one_external (TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,char const* const,TYPE_8__*) ;
 scalar_t__ bfd_ecoff_debug_size (TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*) ;
 int bfd_ecoff_write_accumulated_debug (scalar_t__,TYPE_5__*,struct ecoff_debug_info*,struct ecoff_debug_swap const*,struct bfd_link_info*,int ) ;
 int bfd_elf_final_link (TYPE_5__*,struct bfd_link_info*) ;
 scalar_t__ bfd_get_flavour (TYPE_5__*) ;
 TYPE_6__* bfd_get_section_by_name (TYPE_5__*,char const* const) ;
 scalar_t__ bfd_indirect_link_order ;
 int bfd_set_section_contents (TYPE_5__*,int ,int ,int ,scalar_t__) ;
 scalar_t__ bfd_target_elf_flavour ;
 int elf64_alpha_output_extsym ;
 int elf64_alpha_read_ecoff_info (TYPE_5__*,TYPE_6__*,struct ecoff_debug_info*) ;
 TYPE_13__* elf_hash_table (struct bfd_link_info*) ;
 int elf_link_hash_traverse (TYPE_13__*,int ,scalar_t__) ;
 int free (char*) ;
 TYPE_11__* get_elf_backend_data (TYPE_5__*) ;
 int ifdNil ;
 int indexNil ;
 int issNil ;




 scalar_t__ scNil ;



 scalar_t__ scSUndefined ;

 scalar_t__ scUndefined ;
 int stLocal ;
 scalar_t__ strcmp (int ,char*) ;
 int stub1 (TYPE_5__*,scalar_t__,TYPE_8__*) ;

__attribute__((used)) static bfd_boolean
elf64_alpha_final_link (bfd *abfd, struct bfd_link_info *info)
{
  asection *o;
  struct bfd_link_order *p;
  asection *mdebug_sec;
  struct ecoff_debug_info debug;
  const struct ecoff_debug_swap *swap
    = get_elf_backend_data (abfd)->elf_backend_ecoff_debug_swap;
  HDRR *symhdr = &debug.symbolic_header;
  PTR mdebug_handle = ((void*)0);


  mdebug_sec = ((void*)0);
  for (o = abfd->sections; o != (asection *) ((void*)0); o = o->next)
    {
      if (strcmp (o->name, ".mdebug") == 0)
 {
   struct extsym_info einfo;




   symhdr->magic = swap->sym_magic;

   symhdr->vstamp = 0;
   symhdr->ilineMax = 0;
   symhdr->cbLine = 0;
   symhdr->idnMax = 0;
   symhdr->ipdMax = 0;
   symhdr->isymMax = 0;
   symhdr->ioptMax = 0;
   symhdr->iauxMax = 0;
   symhdr->issMax = 0;
   symhdr->issExtMax = 0;
   symhdr->ifdMax = 0;
   symhdr->crfd = 0;
   symhdr->iextMax = 0;



   debug.line = ((void*)0);
   debug.external_dnr = ((void*)0);
   debug.external_pdr = ((void*)0);
   debug.external_sym = ((void*)0);
   debug.external_opt = ((void*)0);
   debug.external_aux = ((void*)0);
   debug.ss = ((void*)0);
   debug.ssext = debug.ssext_end = ((void*)0);
   debug.external_fdr = ((void*)0);
   debug.external_rfd = ((void*)0);
   debug.external_ext = debug.external_ext_end = ((void*)0);

   mdebug_handle = bfd_ecoff_debug_init (abfd, &debug, swap, info);
   if (mdebug_handle == (PTR) ((void*)0))
     return FALSE;

   if (1)
     {
       asection *s;
       EXTR esym;
       bfd_vma last = 0;
       unsigned int i;
       static const char * const name[] =
  {
    ".text", ".init", ".fini", ".data",
    ".rodata", ".sdata", ".sbss", ".bss"
  };
       static const int sc[] = { 128, 132, 133, 134,
       131, 129, 130, 135 };

       esym.jmptbl = 0;
       esym.cobol_main = 0;
       esym.weakext = 0;
       esym.reserved = 0;
       esym.ifd = ifdNil;
       esym.asym.iss = issNil;
       esym.asym.st = stLocal;
       esym.asym.reserved = 0;
       esym.asym.index = indexNil;
       for (i = 0; i < 8; i++)
  {
    esym.asym.sc = sc[i];
    s = bfd_get_section_by_name (abfd, name[i]);
    if (s != ((void*)0))
      {
        esym.asym.value = s->vma;
        last = s->vma + s->size;
      }
    else
      esym.asym.value = last;

    if (! bfd_ecoff_debug_one_external (abfd, &debug, swap,
            name[i], &esym))
      return FALSE;
  }
     }

   for (p = o->map_head.link_order;
        p != (struct bfd_link_order *) ((void*)0);
        p = p->next)
     {
       asection *input_section;
       bfd *input_bfd;
       const struct ecoff_debug_swap *input_swap;
       struct ecoff_debug_info input_debug;
       char *eraw_src;
       char *eraw_end;

       if (p->type != bfd_indirect_link_order)
  {
    if (p->type == bfd_data_link_order)
      continue;
    abort ();
  }

       input_section = p->u.indirect.section;
       input_bfd = input_section->owner;

       if (bfd_get_flavour (input_bfd) != bfd_target_elf_flavour
    || (get_elf_backend_data (input_bfd)
        ->elf_backend_ecoff_debug_swap) == ((void*)0))
  {



    continue;
  }

       input_swap = (get_elf_backend_data (input_bfd)
       ->elf_backend_ecoff_debug_swap);

       BFD_ASSERT (p->size == input_section->size);




       if (!elf64_alpha_read_ecoff_info (input_bfd, input_section,
      &input_debug))
  return FALSE;

       if (! (bfd_ecoff_debug_accumulate
       (mdebug_handle, abfd, &debug, swap, input_bfd,
        &input_debug, input_swap, info)))
  return FALSE;





       eraw_src = input_debug.external_ext;
       eraw_end = (eraw_src
     + (input_debug.symbolic_header.iextMax
        * input_swap->external_ext_size));
       for (;
     eraw_src < eraw_end;
     eraw_src += input_swap->external_ext_size)
  {
    EXTR ext;
    const char *name;
    struct alpha_elf_link_hash_entry *h;

    (*input_swap->swap_ext_in) (input_bfd, (PTR) eraw_src, &ext);
    if (ext.asym.sc == scNil
        || ext.asym.sc == scUndefined
        || ext.asym.sc == scSUndefined)
      continue;

    name = input_debug.ssext + ext.asym.iss;
    h = alpha_elf_link_hash_lookup (alpha_elf_hash_table (info),
        name, FALSE, FALSE, TRUE);
    if (h == ((void*)0) || h->esym.ifd != -2)
      continue;

    if (ext.ifd != -1)
      {
        BFD_ASSERT (ext.ifd
      < input_debug.symbolic_header.ifdMax);
        ext.ifd = input_debug.ifdmap[ext.ifd];
      }

    h->esym = ext;
  }


       free (input_debug.line);
       free (input_debug.external_dnr);
       free (input_debug.external_pdr);
       free (input_debug.external_sym);
       free (input_debug.external_opt);
       free (input_debug.external_aux);
       free (input_debug.ss);
       free (input_debug.ssext);
       free (input_debug.external_fdr);
       free (input_debug.external_rfd);
       free (input_debug.external_ext);



       input_section->flags &=~ SEC_HAS_CONTENTS;
     }


   einfo.abfd = abfd;
   einfo.info = info;
   einfo.debug = &debug;
   einfo.swap = swap;
   einfo.failed = FALSE;
   elf_link_hash_traverse (elf_hash_table (info),
      elf64_alpha_output_extsym,
      (PTR) &einfo);
   if (einfo.failed)
     return FALSE;


   o->size = bfd_ecoff_debug_size (abfd, &debug, swap);



   o->map_head.link_order = (struct bfd_link_order *) ((void*)0);

   mdebug_sec = o;
 }
    }


  if (! bfd_elf_final_link (abfd, info))
    return FALSE;




  {
    bfd *i, *dynobj = elf_hash_table(info)->dynobj;
    for (i = alpha_elf_hash_table(info)->got_list;
  i != ((void*)0);
  i = alpha_elf_tdata(i)->got_link_next)
      {
 asection *sgot;


 if (i == dynobj)
   continue;

 sgot = alpha_elf_tdata(i)->got;
 if (! bfd_set_section_contents (abfd, sgot->output_section,
     sgot->contents,
     (file_ptr) sgot->output_offset,
     sgot->size))
   return FALSE;
      }
  }

  if (mdebug_sec != (asection *) ((void*)0))
    {
      BFD_ASSERT (abfd->output_has_begun);
      if (! bfd_ecoff_write_accumulated_debug (mdebug_handle, abfd, &debug,
            swap, info,
            mdebug_sec->filepos))
 return FALSE;

      bfd_ecoff_debug_free (mdebug_handle, abfd, &debug, swap, info);
    }

  return TRUE;
}
