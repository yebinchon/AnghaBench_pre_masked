
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct tasklet_struct*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,char*) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(struct tasklet_struct *VAR_3)
{

 FUNC_1(VAR_1 | VAR_2, ((void*)0), "tasklet_kill() can sleep");


 while (FUNC_0(VAR_3) != VAR_0)
  FUNC_2("W", 1);
}
