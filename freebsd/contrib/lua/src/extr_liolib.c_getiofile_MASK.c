
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * f; } ;
typedef TYPE_1__ LStream ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,int ,char const*) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static FILE *FUNC_4 (lua_State *VAR_2, const char *VAR_3) {
  LStream *VAR_4;
  FUNC_2(VAR_2, VAR_1, VAR_3);
  VAR_4 = (LStream *)FUNC_3(VAR_2, -1);
  if (FUNC_0(VAR_4))
    FUNC_1(VAR_2, "standard %s file is closed", VAR_3 + VAR_0);
  return VAR_4->f;
}
