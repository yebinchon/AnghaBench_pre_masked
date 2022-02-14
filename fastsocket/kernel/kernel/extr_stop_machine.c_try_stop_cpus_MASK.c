
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int cpu_stop_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask const*,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(const struct cpumask *VAR_2, cpu_stop_fn_t VAR_3, void *VAR_4)
{
 int VAR_5;


 if (!FUNC_1(&VAR_1))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_1);
 return VAR_5;
}
