
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int lua_State ;
struct TYPE_3__ {char const* ddra_fsname; int * ddra_result; int member_0; } ;
typedef TYPE_1__ dsl_dataset_rollback_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int ,char const*) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_2, boolean_t VAR_3, nvlist_t *VAR_4)
{
 int VAR_5;
 const char *VAR_6 = FUNC_0(VAR_2, 1);
 dsl_dataset_rollback_arg_t VAR_7 = { 0 };

 VAR_7.ddra_fsname = VAR_6;
 VAR_7.ddra_result = VAR_4;

 VAR_5 = FUNC_1(VAR_2, VAR_0,
     VAR_1, &VAR_7, VAR_3, VAR_6);

 return (VAR_5);
}
