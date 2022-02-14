
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {scalar_t__ to_can_run; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct target_ops*) ;
 int VAR_0 ;
 struct target_ops** VAR_1 ;

__attribute__((used)) static struct target_ops *
FUNC_2 (char *VAR_2)
{
  struct target_ops **VAR_3;
  struct target_ops *VAR_4 = ((void*)0);
  int VAR_5;

  VAR_5 = 0;

  for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_0;
       ++VAR_3)
    {
      if ((*VAR_3)->to_can_run && FUNC_1 (*VAR_3))
 {
   VAR_4 = *VAR_3;
   ++VAR_5;
 }
    }

  if (VAR_5 != 1)
    FUNC_0 ("Don't know how to %s.  Try \"help target\".", VAR_2);

  return VAR_4;
}
