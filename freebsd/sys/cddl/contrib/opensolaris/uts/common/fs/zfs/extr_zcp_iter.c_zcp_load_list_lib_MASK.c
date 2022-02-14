
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; int * gc; } ;
typedef TYPE_1__ zcp_list_info_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;

int
FUNC_9(lua_State *VAR_6)
{
 int VAR_7;
 zcp_list_info_t *VAR_8[] = {
  &VAR_0,
  &VAR_4,
  &VAR_3,
  &VAR_1,
  &VAR_5,
  ((void*)0)
 };

 FUNC_1(VAR_6);

 for (VAR_7 = 0; VAR_8[VAR_7] != ((void*)0); VAR_7++) {
  zcp_list_info_t *VAR_9 = VAR_8[VAR_7];

  if (VAR_9->gc != ((void*)0)) {





   (void) FUNC_0(VAR_6, VAR_9->name);
   (void) FUNC_6(VAR_6, "__gc");
   FUNC_4(VAR_6, VAR_9->gc);
   FUNC_8(VAR_6, -3);
   FUNC_2(VAR_6, 1);
  }

  FUNC_5(VAR_6, VAR_9);
  FUNC_3(VAR_6, &VAR_2, 1);
  FUNC_7(VAR_6, -2, VAR_9->name);
  VAR_9++;
 }

 return (1);
}
