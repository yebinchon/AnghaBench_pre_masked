
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blocking_notifier_head {int rwsem; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long,void*,int,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct blocking_notifier_head *VAR_1,
       unsigned long VAR_2, void *VAR_3,
       int VAR_4, int *VAR_5)
{
 int VAR_6 = VAR_0;






 if (FUNC_2(VAR_1->head)) {
  FUNC_0(&VAR_1->rwsem);
  VAR_6 = FUNC_1(&VAR_1->head, VAR_2, VAR_3, VAR_4,
     VAR_5);
  FUNC_3(&VAR_1->rwsem);
 }
 return VAR_6;
}
