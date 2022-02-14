
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kwargs; int pargs; int name; } ;
typedef TYPE_1__ zcp_list_info_t ;
typedef int nvlist_t ;
typedef int lua_State ;
typedef int errbuf ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_5__ {int * zri_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,char const*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,char*,int) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 TYPE_3__* FUNC_9 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_2)
{
 int VAR_3;
 char VAR_4[128];
 const char *VAR_5;
 dsl_pool_t *VAR_6 = FUNC_9(VAR_2)->zri_pool;
 zcp_list_info_t *VAR_7 = &VAR_1;
 FUNC_8(VAR_2, VAR_7->name, VAR_7->pargs, VAR_7->kwargs);
 VAR_5 = FUNC_3(VAR_2, 1);
 nvlist_t *VAR_8 = FUNC_1();

 dsl_dataset_t *VAR_9 = FUNC_5(VAR_2, VAR_6, VAR_5, VAR_0);
 if (VAR_9 == ((void*)0))
  return (1);


 FUNC_6(VAR_9, VAR_8);
 FUNC_0(VAR_9, VAR_0);


 VAR_3 = FUNC_7(VAR_2, VAR_8, VAR_4, sizeof (VAR_4));
 FUNC_4(VAR_8);
 if (VAR_3 != 0) {
  return (FUNC_2(VAR_2,
      "Error returning nvlist: %s", VAR_4));
 }
 return (1);
}
