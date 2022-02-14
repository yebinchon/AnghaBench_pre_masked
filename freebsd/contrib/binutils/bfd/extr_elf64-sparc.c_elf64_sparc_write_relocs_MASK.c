
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_22__ {int flags; scalar_t__ xvec; } ;
typedef TYPE_3__ bfd ;
struct TYPE_23__ {scalar_t__ value; int section; TYPE_1__* the_bfd; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_24__ {int flags; unsigned int reloc_count; scalar_t__ vma; TYPE_6__** orelocation; } ;
typedef TYPE_5__ asection ;
struct TYPE_25__ {scalar_t__ address; int addend; TYPE_2__* howto; TYPE_4__** sym_ptr_ptr; } ;
typedef TYPE_6__ arelent ;
struct TYPE_26__ {unsigned int sh_size; unsigned int sh_entsize; scalar_t__ sh_type; int * contents; } ;
struct TYPE_28__ {TYPE_7__ rel_hdr; } ;
struct TYPE_27__ {int r_addend; scalar_t__ r_offset; void* r_info; } ;
struct TYPE_21__ {scalar_t__ type; } ;
struct TYPE_20__ {scalar_t__ xvec; } ;
typedef int * PTR ;
typedef TYPE_7__ Elf_Internal_Shdr ;
typedef TYPE_8__ Elf_Internal_Rela ;
typedef int Elf64_External_Rela ;


 int VAR_0 ;
 void* FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_3__*,unsigned int) ;
 int FUNC_6 (TYPE_3__*,TYPE_8__*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_9__* FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_9, asection *VAR_10, PTR VAR_11)
{
  bfd_boolean *VAR_12 = (bfd_boolean *) VAR_11;
  Elf_Internal_Shdr *VAR_13;
  bfd_vma VAR_14;
  Elf64_External_Rela *VAR_15, *VAR_16;
  unsigned int VAR_17, VAR_18;
  asymbol *VAR_19 = 0;
  int VAR_20 = 0;


  if (*VAR_12)
    return;

  if ((VAR_10->flags & VAR_5) == 0)
    return;





  if (VAR_10->reloc_count == 0)
    return;




  VAR_18 = 0;
  for (VAR_17 = 0; VAR_17 < VAR_10->reloc_count; VAR_17++)
    {
      bfd_vma VAR_21;

      ++VAR_18;

      VAR_21 = VAR_10->orelocation[VAR_17]->address;
      if (VAR_10->orelocation[VAR_17]->howto->type == VAR_3
   && VAR_17 < VAR_10->reloc_count - 1)
 {
   arelent *VAR_22 = VAR_10->orelocation[VAR_17 + 1];

   if (VAR_22->howto->type == VAR_2
       && VAR_22->address == VAR_21
       && FUNC_7 ((*VAR_22->sym_ptr_ptr)->section)
       && (*VAR_22->sym_ptr_ptr)->value == 0)
     ++VAR_17;
 }
    }

  VAR_13 = &FUNC_8 (VAR_10)->rel_hdr;

  VAR_13->sh_size = VAR_13->sh_entsize * VAR_18;
  VAR_13->contents = (PTR) FUNC_5 (VAR_9, VAR_13->sh_size);
  if (VAR_13->contents == ((void*)0))
    {
      *VAR_12 = VAR_8;
      return;
    }


  if (VAR_13->sh_type != VAR_6)
    FUNC_4 ();




  VAR_14 = 0;
  if ((VAR_9->flags & (VAR_1 | VAR_0)) != 0)
    VAR_14 = VAR_10->vma;


  VAR_15 = (Elf64_External_Rela *) VAR_13->contents;
  VAR_16 = VAR_15;

  for (VAR_17 = 0; VAR_17 < VAR_10->reloc_count; VAR_17++)
    {
      Elf_Internal_Rela VAR_23;
      arelent *VAR_24;
      asymbol *VAR_25;
      int VAR_26;

      VAR_24 = VAR_10->orelocation[VAR_17];
      VAR_25 = *VAR_24->sym_ptr_ptr;
      if (VAR_25 == VAR_19)
 VAR_26 = VAR_20;
      else if (FUNC_7 (VAR_25->section) && VAR_25->value == 0)
 VAR_26 = VAR_7;
      else
 {
   VAR_19 = VAR_25;
   VAR_26 = FUNC_2 (VAR_9, &VAR_25);
   if (VAR_26 < 0)
     {
       *VAR_12 = VAR_8;
       return;
     }
   VAR_20 = VAR_26;
 }

      if ((*VAR_24->sym_ptr_ptr)->the_bfd != ((void*)0)
   && (*VAR_24->sym_ptr_ptr)->the_bfd->xvec != VAR_9->xvec
   && ! FUNC_3 (VAR_9, VAR_24))
 {
   *VAR_12 = VAR_8;
   return;
 }

      if (VAR_24->howto->type == VAR_3
   && VAR_17 < VAR_10->reloc_count - 1)
 {
   arelent *VAR_27 = VAR_10->orelocation[VAR_17 + 1];

   if (VAR_27->howto->type == VAR_2
       && VAR_27->address == VAR_24->address
       && FUNC_7 ((*VAR_27->sym_ptr_ptr)->section)
       && (*VAR_27->sym_ptr_ptr)->value == 0)
     {
       VAR_17++;
       VAR_23.r_info
  = FUNC_0 (VAR_26, FUNC_1 (VAR_27->addend,
            VAR_4));
     }
   else
     VAR_23.r_info = FUNC_0 (VAR_26, VAR_3);
 }
      else
 VAR_23.r_info = FUNC_0 (VAR_26, VAR_24->howto->type);

      VAR_23.r_offset = VAR_24->address + VAR_14;
      VAR_23.r_addend = VAR_24->addend;

      FUNC_6 (VAR_9, &VAR_23, (bfd_byte *) VAR_16);
      ++VAR_16;
    }
}
