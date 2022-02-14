
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int minor_t ;
struct TYPE_3__ {int dduha_chkholds; int dduha_minor; int * dduha_errlist; int * dduha_holds; } ;
typedef TYPE_1__ dsl_dataset_user_hold_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(nvlist_t *VAR_3, minor_t VAR_4, nvlist_t *VAR_5)
{
 dsl_dataset_user_hold_arg_t VAR_6;
 nvpair_t *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_3, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (0);

 VAR_6.dduha_holds = VAR_3;
 VAR_6.dduha_chkholds = FUNC_1();
 VAR_6.dduha_errlist = VAR_5;
 VAR_6.dduha_minor = VAR_4;

 VAR_8 = FUNC_0(FUNC_5(VAR_7), VAR_1,
     VAR_2, &VAR_6,
     FUNC_3(VAR_3), VAR_0);
 FUNC_2(VAR_6.dduha_chkholds);

 return (VAR_8);
}
