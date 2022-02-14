
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tube {int * cmd_msg; int * listen_com; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct tube* VAR_0)
{
 if(VAR_0->listen_com) {
  FUNC_0(VAR_0->listen_com);
  VAR_0->listen_com = ((void*)0);
 }
 FUNC_1(VAR_0->cmd_msg);
 VAR_0->cmd_msg = ((void*)0);
}
