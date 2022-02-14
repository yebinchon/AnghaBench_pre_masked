
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_pair_list {int mutex; int hibernate; int head; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static inline int
FUNC_3(struct queue_pair_list *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->head);
 FUNC_0(&VAR_0->hibernate, 0);
 VAR_1 = FUNC_2(&VAR_0->mutex, "VMCI QP List lock");
 return (VAR_1);
}
