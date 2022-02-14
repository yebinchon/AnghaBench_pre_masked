
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_bandwidth {scalar_t__ rt_runtime; int rt_runtime_lock; int rt_period; int rt_period_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct rt_bandwidth *VAR_1)
{
 if (!FUNC_1() || VAR_1->rt_runtime == VAR_0)
  return;

 if (FUNC_0(&VAR_1->rt_period_timer))
  return;

 FUNC_2(&VAR_1->rt_runtime_lock);
 FUNC_4(&VAR_1->rt_period_timer, VAR_1->rt_period);
 FUNC_3(&VAR_1->rt_runtime_lock);
}
