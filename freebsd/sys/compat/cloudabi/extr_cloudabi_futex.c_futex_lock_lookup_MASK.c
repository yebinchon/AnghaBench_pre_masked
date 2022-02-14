
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_lock {int dummy; } ;
struct futex_address {int dummy; } ;
typedef int cloudabi_scope_t ;
typedef int cloudabi_lock_t ;


 int FUNC_0 (struct futex_address*,struct thread*,int const*,int ) ;
 int VAR_0 ;
 struct futex_lock* FUNC_1 (struct futex_address*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, const cloudabi_lock_t *VAR_2,
    cloudabi_scope_t VAR_3, struct futex_lock **VAR_4)
{
 struct futex_address VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2(&VAR_0);
 *VAR_4 = FUNC_1(&VAR_5);
 return (0);
}
