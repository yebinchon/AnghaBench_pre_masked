
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int term_cmd; } ;
struct TYPE_4__ {int cmdll; } ;
struct TYPE_6__ {TYPE_2__ getreg; TYPE_1__ setmem; } ;
typedef int CORE_ADDR ;


 TYPE_3__* VAR_0 ;
 char* FUNC_0 (long long,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  static char VAR_4[20];
  char *VAR_5;
  long long *VAR_6;
  long long VAR_7;
  int VAR_8 = 0;
  VAR_6 = (unsigned long long *) VAR_2;
  if (VAR_3 == 0)
    return 0;
  FUNC_2 (VAR_0->setmem.cmdll, VAR_1);
  FUNC_1 (((void*)0), 0);
  while (VAR_3 >= 8)
    {
      VAR_7 = *VAR_6;
      VAR_5 = FUNC_0 (*VAR_6, VAR_4);
      *VAR_5 = '\0';
      FUNC_2 ("%s\r", VAR_4);
      VAR_6++;
      VAR_1 += 8;
      VAR_8 += 8;

      FUNC_1 (((void*)0), 0);
      VAR_3 -= 8;
    }

  FUNC_2 (VAR_0->getreg.term_cmd);
  FUNC_1 (((void*)0), 0);
  return VAR_8;
}
