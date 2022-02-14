
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_collate_arg {int status; int list; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(char* VAR_0, void* VAR_1)
{
 struct config_collate_arg* VAR_2 = (struct config_collate_arg*)VAR_1;
 if(VAR_2->status)
  return;
 if(!FUNC_0(&VAR_2->list, FUNC_1(VAR_0)))
  VAR_2->status = 1;
}
