
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_14__ {int flags; unsigned int reloc_count; TYPE_3__** orelocation; } ;
typedef TYPE_2__ asection ;
struct TYPE_15__ {scalar_t__ address; TYPE_1__** sym_ptr_ptr; } ;
typedef TYPE_3__ arelent ;
struct TYPE_16__ {int sh_entsize; } ;
struct TYPE_13__ {scalar_t__ value; int section; } ;
struct TYPE_12__ {TYPE_4__ rel_hdr; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;
typedef int Elf64_Mips_External_Rela ;
typedef int Elf64_Mips_External_Rel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_10__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_4__*,int*,void*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_4__*,int*,void*) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_1, asection *VAR_2, void *VAR_3)
{
  bfd_boolean *VAR_4 = VAR_3;
  int VAR_5;
  Elf_Internal_Shdr *VAR_6;
  unsigned int VAR_7;


  if (*VAR_4)
    return;

  if ((VAR_2->flags & VAR_0) == 0)
    return;





  if (VAR_2->reloc_count == 0)
    return;



  VAR_5 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_2->reloc_count; VAR_7++)
    {
      bfd_vma VAR_8;
      unsigned int VAR_9;

      ++VAR_5;

      VAR_8 = VAR_2->orelocation[VAR_7]->address;
      for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
 {
   arelent *VAR_10;

   if (VAR_7 + 1 >= VAR_2->reloc_count)
     break;
   VAR_10 = VAR_2->orelocation[VAR_7 + 1];
   if (VAR_10->address != VAR_8
       || ! FUNC_1 ((*VAR_10->sym_ptr_ptr)->section)
       || (*VAR_10->sym_ptr_ptr)->value != 0)
     break;



   ++VAR_7;
 }
    }

  VAR_6 = &FUNC_2 (VAR_2)->rel_hdr;



  if (VAR_6->sh_entsize == sizeof(Elf64_Mips_External_Rel))
    FUNC_3 (VAR_1, VAR_2, VAR_6, &VAR_5, VAR_3);
  else if (VAR_6->sh_entsize == sizeof(Elf64_Mips_External_Rela))
    FUNC_4 (VAR_1, VAR_2, VAR_6, &VAR_5, VAR_3);
  else
    FUNC_0 (0);
}
