
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {int sign_extend_vma; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6 (bfd *VAR_2)
{
  char *VAR_3;

  if (FUNC_1 (VAR_2) == VAR_1)
    return FUNC_4 (VAR_2)->sign_extend_vma;

  VAR_3 = FUNC_2 (VAR_2);






  if (FUNC_0 (VAR_3, "coff-go32")
      || FUNC_5 (VAR_3, "pe-i386") == 0
      || FUNC_5 (VAR_3, "pei-i386") == 0
      || FUNC_5 (VAR_3, "pe-arm-wince-little") == 0
      || FUNC_5 (VAR_3, "pei-arm-wince-little") == 0)
    return 1;

  FUNC_3 (VAR_0);
  return -1;
}
