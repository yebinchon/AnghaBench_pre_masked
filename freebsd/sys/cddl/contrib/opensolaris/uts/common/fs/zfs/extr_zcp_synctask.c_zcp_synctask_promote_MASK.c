
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zri_cred; } ;
typedef TYPE_1__ zcp_run_info_t ;
typedef int nvlist_t ;
typedef int lua_State ;
struct TYPE_6__ {char const* ddpa_clonename; int cr; int * err_ds; int member_0; } ;
typedef TYPE_2__ dsl_dataset_promote_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*,int ,char const*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_2, boolean_t VAR_3, nvlist_t *VAR_4)
{
 int VAR_5;
 dsl_dataset_promote_arg_t VAR_6 = { 0 };
 const char *VAR_7 = FUNC_0(VAR_2, 1);
 zcp_run_info_t *VAR_8 = FUNC_1(VAR_2);

 VAR_6.ddpa_clonename = VAR_7;
 VAR_6.err_ds = VAR_4;
 VAR_6.cr = VAR_8->zri_cred;





 VAR_5 = FUNC_2(VAR_2, VAR_0,
     VAR_1, &VAR_6, VAR_3, VAR_7);

 return (VAR_5);
}
