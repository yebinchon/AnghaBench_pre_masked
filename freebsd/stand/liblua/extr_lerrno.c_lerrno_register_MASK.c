
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int err_name; int err_num; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++) {
  FUNC_0(VAR_1, VAR_0[VAR_2].err_num);
  FUNC_1(VAR_1, -2, VAR_0[VAR_2].err_name);
 }
}
