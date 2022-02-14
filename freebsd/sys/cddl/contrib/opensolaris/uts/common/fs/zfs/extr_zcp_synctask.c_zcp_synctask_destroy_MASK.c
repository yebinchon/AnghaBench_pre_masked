
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int lua_State ;
struct TYPE_4__ {char const* ddsa_name; char const* ddha_name; int member_0; int ddsa_defer; } ;
typedef TYPE_1__ dsl_destroy_snapshot_arg_t ;
typedef TYPE_1__ dsl_destroy_head_arg_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int * FUNC_4 (char const*,char) ;
 int FUNC_5 (int *,int ,int ,TYPE_1__*,scalar_t__,char const*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_5, boolean_t VAR_6, nvlist_t *VAR_7)
{
 int VAR_8;
 const char *VAR_9 = FUNC_3(VAR_5, 1);

 boolean_t VAR_10 = (FUNC_4(VAR_9, '@') != ((void*)0));

 if (!VAR_10 && !FUNC_1(VAR_5, 2)) {
  return (FUNC_0(VAR_5,
      "'deferred' kwarg only supported for snapshots: %s",
      VAR_9));
 }

 if (VAR_10) {
  dsl_destroy_snapshot_arg_t VAR_11 = { 0 };
  VAR_11.ddsa_name = VAR_9;
  if (!FUNC_1(VAR_5, 2)) {
   VAR_11.ddsa_defer = FUNC_2(VAR_5, 2);
  } else {
   VAR_11.ddsa_defer = VAR_0;
  }

  VAR_8 = FUNC_5(VAR_5, VAR_3,
      VAR_4, &VAR_11, VAR_6, VAR_9);
 } else {
  dsl_destroy_head_arg_t VAR_12 = { 0 };
  VAR_12.ddha_name = VAR_9;

  VAR_8 = FUNC_5(VAR_5, VAR_1,
      VAR_2, &VAR_12, VAR_6, VAR_9);
 }

 return (VAR_8);
}
