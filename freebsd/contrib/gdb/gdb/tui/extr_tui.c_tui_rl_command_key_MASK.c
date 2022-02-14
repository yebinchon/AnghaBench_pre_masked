
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; int cmd; } ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_5 (int VAR_2, int VAR_3)
{
  int VAR_4;

  FUNC_2 ();
  for (VAR_4 = 0; VAR_1[VAR_4].cmd; VAR_4++)
    {
      if (VAR_1[VAR_4].key == VAR_3)
        {


          char* VAR_5 = FUNC_0 (FUNC_4 (VAR_1[VAR_4].cmd) + 1);
          FUNC_3 (VAR_5, VAR_1[VAR_4].cmd);
          FUNC_1 (VAR_5, VAR_0);
          return 0;
        }
    }
  return 0;
}
