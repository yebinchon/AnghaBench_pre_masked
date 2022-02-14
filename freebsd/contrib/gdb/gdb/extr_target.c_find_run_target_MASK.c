
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {scalar_t__ to_can_run; } ;


 scalar_t__ FUNC_0 (struct target_ops*) ;
 int VAR_0 ;
 struct target_ops** VAR_1 ;

struct target_ops *
FUNC_1 (void)
{
  struct target_ops **VAR_2;
  struct target_ops *VAR_3 = ((void*)0);
  int VAR_4;

  VAR_4 = 0;

  for (VAR_2 = VAR_1; VAR_2 < VAR_1 + VAR_0; ++VAR_2)
    {
      if ((*VAR_2)->to_can_run && FUNC_0 (*VAR_2))
 {
   VAR_3 = *VAR_2;
   ++VAR_4;
 }
    }

  return (VAR_4 == 1 ? VAR_3 : ((void*)0));
}
