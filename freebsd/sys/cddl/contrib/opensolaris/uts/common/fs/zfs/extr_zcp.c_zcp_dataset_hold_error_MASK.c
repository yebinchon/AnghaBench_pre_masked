
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,char*,char const*,...) ;

int
FUNC_3(lua_State *VAR_3, dsl_pool_t *VAR_4, const char *VAR_5,
    int VAR_6)
{
 if (VAR_6 == VAR_1) {
  (void) FUNC_2(VAR_3, 1, "no such dataset '%s'", VAR_5);
  return (0);
 } else if (VAR_6 == VAR_2) {
  (void) FUNC_2(VAR_3, 1,
      "dataset '%s' is not in the target pool '%s'",
      VAR_5, FUNC_1(VAR_4->dp_spa));
  return (0);
 } else if (VAR_6 == VAR_0) {
  (void) FUNC_0(VAR_3,
      "I/O error while accessing dataset '%s'", VAR_5);
  return (0);
 } else if (VAR_6 != 0) {
  (void) FUNC_0(VAR_3,
      "unexpected error %d while accessing dataset '%s'",
      VAR_6, VAR_5);
  return (0);
 }
 return (0);
}
