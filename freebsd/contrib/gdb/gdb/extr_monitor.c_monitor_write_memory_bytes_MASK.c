
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int term_cmd; } ;
struct TYPE_5__ {int cmdb; } ;
struct TYPE_6__ {TYPE_1__ getreg; TYPE_2__ setmem; } ;
typedef int CORE_ADDR ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  unsigned char VAR_4;
  int VAR_5 = 0;
  if (VAR_3 == 0)
    return 0;

  FUNC_1 (VAR_0->setmem.cmdb, VAR_1);
  FUNC_0 (((void*)0), 0);
  while (VAR_3)
    {
      VAR_4 = *VAR_2;
      FUNC_1 ("%x\r", VAR_4);
      VAR_2++;
      VAR_1++;
      VAR_5++;

      FUNC_0 (((void*)0), 0);
      VAR_3--;
    }

  FUNC_1 (VAR_0->getreg.term_cmd);
  FUNC_0 (((void*)0), 0);
  return VAR_5;
}
