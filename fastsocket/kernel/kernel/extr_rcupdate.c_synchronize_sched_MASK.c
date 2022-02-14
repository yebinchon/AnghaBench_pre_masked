
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_synchronize {int completion; int head; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(void)
{
 struct rcu_synchronize VAR_1;

 if (FUNC_2())
  return;

 FUNC_1(&VAR_1.completion);

 FUNC_0(&VAR_1.head, VAR_0);

 FUNC_3(&VAR_1.completion);
}
