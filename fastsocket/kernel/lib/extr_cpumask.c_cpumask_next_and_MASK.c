
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int FUNC_0 (int,struct cpumask const*) ;
 scalar_t__ FUNC_1 (int,struct cpumask const*) ;
 int VAR_0 ;

int FUNC_2(int VAR_1, const struct cpumask *VAR_2,
       const struct cpumask *VAR_3)
{
 while ((VAR_1 = FUNC_0(VAR_1, VAR_2)) < VAR_0)
  if (FUNC_1(VAR_1, VAR_3))
   break;
 return VAR_1;
}
