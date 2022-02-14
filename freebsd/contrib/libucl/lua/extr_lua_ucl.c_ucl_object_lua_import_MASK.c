
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int lua_State ;



 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;

ucl_object_t *
FUNC_3 (lua_State *VAR_0, int VAR_1)
{
 ucl_object_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0 (VAR_0, VAR_1);
 switch (VAR_3) {
 case 128:
  VAR_2 = FUNC_2 (VAR_0, VAR_1);
  break;
 default:
  VAR_2 = FUNC_1 (VAR_0, VAR_1);
  break;
 }

 return VAR_2;
}
