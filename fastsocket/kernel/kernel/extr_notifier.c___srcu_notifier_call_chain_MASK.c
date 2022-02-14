
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_notifier_head {int srcu; int head; } ;


 int FUNC_0 (int *,unsigned long,void*,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct srcu_notifier_head *VAR_0,
          unsigned long VAR_1, void *VAR_2,
          int VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_0->srcu);
 VAR_5 = FUNC_0(&VAR_0->head, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->srcu, VAR_6);
 return VAR_5;
}
