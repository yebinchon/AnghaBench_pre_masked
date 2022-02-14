
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char**,int ,int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_5, char **VAR_6)
{
 int VAR_7;





 if (VAR_5 > 1 && FUNC_5(VAR_6[1], "--") == 0)
  VAR_5--, VAR_6++;
 if (VAR_5 > 1) {
  VAR_3 = 0;
  VAR_4 = 0;
  FUNC_1();
  for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7++)
   FUNC_3(VAR_2->args[VAR_7], VAR_0|VAR_1);
  FUNC_4(VAR_6 + 1, FUNC_0(), FUNC_2(), 0);

 }
 return 0;
}
