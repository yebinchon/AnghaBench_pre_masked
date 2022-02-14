
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ff_gameid; int ff_partysize; int ff_hassummons; } ;
typedef TYPE_1__ final_fantasy_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

int
FUNC_4(void)
{
 final_fantasy_info_t VAR_0, VAR_1, VAR_2;

 VAR_2.ff_gameid = 1;
 VAR_2.ff_partysize = 4;
 VAR_2.ff_hassummons = 0;

 VAR_0.ff_gameid = 6;
 VAR_0.ff_partysize = 4;
 VAR_0.ff_hassummons = 1;

 VAR_1.ff_gameid = 10;
 VAR_1.ff_partysize = 3;
 VAR_1.ff_hassummons = 1;

 for (;;) {
  FUNC_0(&VAR_2);
  FUNC_1(&VAR_1);
  FUNC_2(&VAR_0);
  FUNC_3(1);
 }

 return (0);
}
