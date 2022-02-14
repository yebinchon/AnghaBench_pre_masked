
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {scalar_t__ to_stratum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct target_ops** VAR_2 ;

struct target_ops *
FUNC_0 (void)
{
  struct target_ops **VAR_3;
  struct target_ops *VAR_4 = ((void*)0);
  int VAR_5;

  VAR_5 = 0;

  for (VAR_3 = VAR_2; VAR_3 < VAR_2 + VAR_1;
       ++VAR_3)
    {
      if ((*VAR_3)->to_stratum == VAR_0)
 {
   VAR_4 = *VAR_3;
   ++VAR_5;
 }
    }

  return (VAR_5 == 1 ? VAR_4 : ((void*)0));
}
