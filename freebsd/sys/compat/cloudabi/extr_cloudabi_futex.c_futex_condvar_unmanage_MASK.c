
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_condvar {int fc_waiters; } ;
typedef int cloudabi_condvar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct futex_condvar *VAR_1,
    cloudabi_condvar_t *VAR_2)
{

 if (FUNC_0(&VAR_1->fc_waiters) != 0)
  return (0);
 return (FUNC_1(VAR_2, VAR_0));
}
