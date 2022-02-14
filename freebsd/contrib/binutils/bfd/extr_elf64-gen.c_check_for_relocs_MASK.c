
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {int e_machine; } ;
typedef TYPE_2__ Elf_Internal_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (bfd * VAR_3, asection * VAR_4, void * VAR_5)
{
  if ((VAR_4->flags & VAR_0) != 0)
    {
      Elf_Internal_Ehdr *VAR_6;

      VAR_6 = FUNC_3 (VAR_3);
      FUNC_1 (FUNC_0("%B: Relocations in generic ELF (EM: %d)"),
     VAR_3, VAR_6->e_machine);

      FUNC_2 (VAR_2);
      * (bfd_boolean *) VAR_5 = VAR_1;
    }
}
