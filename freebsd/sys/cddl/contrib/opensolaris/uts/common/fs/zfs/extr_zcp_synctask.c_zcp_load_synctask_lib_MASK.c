
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_1__ zcp_synctask_info_t ;
typedef int lua_State ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int,int ) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

int
FUNC_5(lua_State *VAR_5, boolean_t VAR_6)
{
 int VAR_7;
 zcp_synctask_info_t *VAR_8[] = {
  &VAR_0,
  &VAR_1,
  &VAR_2,
  &VAR_3,
  ((void*)0)
 };

 FUNC_0(VAR_5);

 for (VAR_7 = 0; VAR_8[VAR_7] != ((void*)0); VAR_7++) {
  zcp_synctask_info_t *VAR_9 = VAR_8[VAR_7];
  FUNC_3(VAR_5, VAR_9);
  FUNC_1(VAR_5, VAR_6);
  FUNC_2(VAR_5, &VAR_4, 2);
  FUNC_4(VAR_5, -2, VAR_9->name);
  VAR_9++;
 }

 return (1);
}
