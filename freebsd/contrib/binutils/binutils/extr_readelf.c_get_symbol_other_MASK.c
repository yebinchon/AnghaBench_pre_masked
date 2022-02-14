
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;



 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_3 (unsigned int VAR_1)
{
  const char * VAR_2 = ((void*)0);
  static char VAR_3 [32];

  if (VAR_1 == 0)
    return "";

  switch (VAR_0.e_machine)
    {
    case 128:
      VAR_2 = FUNC_1 (VAR_1);
    default:
      break;
    }

  if (VAR_2)
    return VAR_2;

  FUNC_2 (VAR_3, sizeof VAR_3, FUNC_0("<other>: %x"), VAR_1);
  return VAR_3;
}
