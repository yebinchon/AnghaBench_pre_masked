
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ud; } ;
struct TYPE_10__ {int type; TYPE_1__ value; int * next; } ;
typedef TYPE_2__ ucl_object_t ;
struct ucl_lua_funcdata {int idx; } ;
typedef int lua_State ;


 int VAR_0 ;







 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_2__ const*) ;
 int FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*) ;
 int FUNC_11 (int *,TYPE_2__ const*) ;

__attribute__((used)) static int
FUNC_12 (lua_State *VAR_1, const ucl_object_t *VAR_2,
  bool VAR_3)
{
 struct ucl_lua_funcdata *VAR_4;

 if (VAR_3 && VAR_2->next != ((void*)0)) {

  return FUNC_11 (VAR_1, VAR_2);
 }

 switch (VAR_2->type) {
 case 134:
  FUNC_1 (VAR_1, FUNC_7 (VAR_2));
  break;
 case 130:
  FUNC_5 (VAR_1, FUNC_10 (VAR_2));
  break;
 case 132:



  FUNC_4 (VAR_1, FUNC_9 (VAR_2));

  break;
 case 133:
 case 129:
  FUNC_4 (VAR_1, FUNC_8 (VAR_2));
  break;
 case 131:
  FUNC_0 (VAR_1, VAR_0, "ucl.null");
  break;
 case 128:
  VAR_4 = (struct ucl_lua_funcdata *)VAR_2->value.ud;
  FUNC_6 (VAR_1, VAR_0, VAR_4->idx);
  break;
 default:
  FUNC_3 (VAR_1);
  break;
 }

 return 1;
}
