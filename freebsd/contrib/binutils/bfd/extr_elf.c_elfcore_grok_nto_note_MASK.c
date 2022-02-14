
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int type; } ;
typedef TYPE_1__ Elf_Internal_Note ;






 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,long,char*) ;
 int FUNC_1 (int *,TYPE_1__*,long*) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_1, Elf_Internal_Note *VAR_2)
{



  static long VAR_3 = 1;

  switch (VAR_2->type)
    {
    case 129:
      return FUNC_2 (VAR_1, ".qnx_core_info", VAR_2);
    case 128:
      return FUNC_1 (VAR_1, VAR_2, &VAR_3);
    case 130:
      return FUNC_0 (VAR_1, VAR_2, VAR_3, ".reg");
    case 131:
      return FUNC_0 (VAR_1, VAR_2, VAR_3, ".reg2");
    default:
      return VAR_0;
    }
}
