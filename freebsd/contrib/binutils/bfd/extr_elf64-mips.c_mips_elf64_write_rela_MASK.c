
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_21__ {int flags; scalar_t__ xvec; } ;
typedef TYPE_3__ bfd ;
struct TYPE_22__ {scalar_t__ value; int section; TYPE_1__* the_bfd; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_23__ {unsigned int reloc_count; scalar_t__ vma; TYPE_6__** orelocation; } ;
typedef TYPE_5__ asection ;
struct TYPE_24__ {scalar_t__ address; TYPE_2__* howto; TYPE_4__** sym_ptr_ptr; int addend; } ;
typedef TYPE_6__ arelent ;
struct TYPE_26__ {scalar_t__ r_offset; int r_sym; int r_type; int r_type2; int r_type3; int r_ssym; int r_addend; } ;
struct TYPE_25__ {int sh_size; int sh_entsize; int * contents; } ;
struct TYPE_20__ {int type; } ;
struct TYPE_19__ {scalar_t__ xvec; } ;
typedef TYPE_7__ Elf_Internal_Shdr ;
typedef TYPE_8__ Elf64_Mips_Internal_Rela ;
typedef int Elf64_Mips_External_Rela ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__**) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 int * FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_8__*,int *) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_6, asection *VAR_7,
         Elf_Internal_Shdr *VAR_8,
         int *VAR_9, void *VAR_10)
{
  bfd_boolean *VAR_11 = VAR_10;
  Elf64_Mips_External_Rela *VAR_12;
  unsigned int VAR_13;
  asymbol *VAR_14 = 0;
  int VAR_15 = 0;

  VAR_8->sh_size = VAR_8->sh_entsize * *VAR_9;
  VAR_8->contents = FUNC_3 (VAR_6, VAR_8->sh_size);
  if (VAR_8->contents == ((void*)0))
    {
      *VAR_11 = VAR_5;
      return;
    }

  VAR_12 = (Elf64_Mips_External_Rela *) VAR_8->contents;
  for (VAR_13 = 0; VAR_13 < VAR_7->reloc_count; VAR_13++, VAR_12++)
    {
      arelent *VAR_16;
      Elf64_Mips_Internal_Rela VAR_17;
      asymbol *VAR_18;
      int VAR_19;
      unsigned int VAR_20;

      VAR_16 = VAR_7->orelocation[VAR_13];




      if ((VAR_6->flags & (VAR_1 | VAR_0)) == 0)
 VAR_17.r_offset = VAR_16->address;
      else
 VAR_17.r_offset = VAR_16->address + VAR_7->vma;

      VAR_18 = *VAR_16->sym_ptr_ptr;
      if (VAR_18 == VAR_14)
 VAR_19 = VAR_15;
      else if (FUNC_4 (VAR_18->section) && VAR_18->value == 0)
 VAR_19 = VAR_4;
      else
 {
   VAR_14 = VAR_18;
   VAR_19 = FUNC_1 (VAR_6, &VAR_18);
   if (VAR_19 < 0)
     {
       *VAR_11 = VAR_5;
       return;
     }
   VAR_15 = VAR_19;
 }

      VAR_17.r_sym = VAR_19;
      VAR_17.r_addend = VAR_16->addend;
      VAR_17.r_ssym = VAR_2;

      if ((*VAR_16->sym_ptr_ptr)->the_bfd->xvec != VAR_6->xvec
   && ! FUNC_2 (VAR_6, VAR_16))
 {
   *VAR_11 = VAR_5;
   return;
 }

      VAR_17.r_type = VAR_16->howto->type;
      VAR_17.r_type2 = (int) VAR_3;
      VAR_17.r_type3 = (int) VAR_3;

      for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
 {
   arelent *VAR_21;

   if (VAR_13 + 1 >= VAR_7->reloc_count)
     break;
   VAR_21 = VAR_7->orelocation[VAR_13 + 1];
   if (VAR_21->address != VAR_16->address
       || ! FUNC_4 ((*VAR_21->sym_ptr_ptr)->section)
       || (*VAR_21->sym_ptr_ptr)->value != 0)
     break;



   if (VAR_20 == 0)
     VAR_17.r_type2 = VAR_21->howto->type;
   else
     VAR_17.r_type3 = VAR_21->howto->type;

   ++VAR_13;
 }

      FUNC_5 (VAR_6, &VAR_17, VAR_12);
    }

  FUNC_0 (VAR_12 - (Elf64_Mips_External_Rela *) VAR_8->contents
       == *VAR_9);
}
