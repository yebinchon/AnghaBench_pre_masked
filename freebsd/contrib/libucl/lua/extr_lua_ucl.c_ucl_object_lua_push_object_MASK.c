
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * next; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int **,int) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,TYPE_1__ const*) ;
 int FUNC_4 (int *,int ,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_5 (lua_State *VAR_0, const ucl_object_t *VAR_1,
  bool VAR_2)
{
 const ucl_object_t *VAR_3;
 ucl_object_iter_t VAR_4 = ((void*)0);
 int VAR_5 = 0;

 if (VAR_2 && VAR_1->next != ((void*)0)) {

  return FUNC_3 (VAR_0, VAR_1);
 }


 while (FUNC_1 (VAR_1, &VAR_4, 1) != ((void*)0)) {
  VAR_5 ++;
 }

 FUNC_0 (VAR_0, 0, VAR_5);
 VAR_4 = ((void*)0);

 while ((VAR_3 = FUNC_1 (VAR_1, &VAR_4, 1)) != ((void*)0)) {
  FUNC_4 (VAR_0, FUNC_2 (VAR_3), VAR_3);
 }

 return 1;
}
