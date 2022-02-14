
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(void)
{
 VAR_4 =
  FUNC_1("tipc_queue_items", sizeof(struct queue_item),
      0, VAR_1, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_3);
 FUNC_2(&VAR_5);
 VAR_2 = 1;
 return 0;
}
