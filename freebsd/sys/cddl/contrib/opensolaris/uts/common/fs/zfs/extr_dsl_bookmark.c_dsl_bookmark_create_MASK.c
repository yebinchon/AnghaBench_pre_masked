
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int * dbca_errors; int * dbca_bmarks; } ;
typedef TYPE_1__ dsl_bookmark_create_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 nvpair_t *VAR_5;
 dsl_bookmark_create_arg_t VAR_6;

 VAR_5 = FUNC_2(VAR_3, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);

 VAR_6.dbca_bmarks = VAR_3;
 VAR_6.dbca_errors = VAR_4;

 return (FUNC_0(FUNC_3(VAR_5), VAR_1,
     VAR_2, &VAR_6,
     FUNC_1(VAR_3), VAR_0));
}
