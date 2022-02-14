
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_address {int fa_key; } ;
typedef int cloudabi_scope_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_1 (void const*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct futex_address *VAR_5, struct thread *VAR_6,
    const void *VAR_7, cloudabi_scope_t VAR_8)
{

 FUNC_0(VAR_6 == VAR_4,
     ("Can only create umtx keys for the current thread"));
 switch (VAR_8) {
 case 129:
  return (FUNC_1(VAR_7, VAR_3, VAR_2,
      &VAR_5->fa_key));
 case 128:
  return (FUNC_1(VAR_7, VAR_3, VAR_0,
      &VAR_5->fa_key));
 default:
  return (VAR_1);
 }
}
