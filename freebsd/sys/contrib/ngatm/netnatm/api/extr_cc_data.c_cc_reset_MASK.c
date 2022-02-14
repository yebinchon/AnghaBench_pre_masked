
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdata {scalar_t__ cookie; int orphaned_conns; int user_list; int port_list; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct ccdata*) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct ccdata *VAR_0)
{

 while (!FUNC_1(&VAR_0->user_list))
  FUNC_8(FUNC_2(&VAR_0->user_list));

 while (!FUNC_3(&VAR_0->port_list))
  FUNC_6(FUNC_4(&VAR_0->port_list), 1);

 while (!FUNC_1(&VAR_0->orphaned_conns))
  FUNC_5(FUNC_2(&VAR_0->orphaned_conns));

 FUNC_0(FUNC_1(&VAR_0->user_list),
     ("user list not empty"));
 FUNC_0(FUNC_1(&VAR_0->orphaned_conns),
     ("still orphaned conns"));

 FUNC_7(VAR_0);

 VAR_0->cookie = 0;
}
