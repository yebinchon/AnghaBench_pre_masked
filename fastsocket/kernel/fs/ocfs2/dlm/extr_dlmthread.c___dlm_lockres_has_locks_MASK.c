
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int blocked; int converting; int granted; } ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct dlm_lock_resource *VAR_0)
{
 if (FUNC_0(&VAR_0->granted) &&
     FUNC_0(&VAR_0->converting) &&
     FUNC_0(&VAR_0->blocked))
  return 0;
 return 1;
}
