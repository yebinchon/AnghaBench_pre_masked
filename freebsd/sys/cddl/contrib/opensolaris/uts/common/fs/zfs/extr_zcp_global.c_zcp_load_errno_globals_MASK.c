
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zeg_name; scalar_t__ zeg_errno; } ;
typedef TYPE_1__ zcp_errno_global_t ;
typedef int lua_State ;
typedef int lua_Number ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(lua_State *VAR_1)
{
 const zcp_errno_global_t *VAR_2 = VAR_0;
 while (VAR_2->zeg_name != ((void*)0)) {
  FUNC_0(VAR_1, (lua_Number)VAR_2->zeg_errno);
  FUNC_1(VAR_1, VAR_2->zeg_name);
  VAR_2++;
 }
}
