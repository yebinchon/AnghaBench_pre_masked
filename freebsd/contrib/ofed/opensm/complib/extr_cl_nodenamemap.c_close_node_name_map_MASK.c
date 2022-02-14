
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* name; int guid; } ;
typedef TYPE_1__ nn_map_t ;
typedef TYPE_1__ name_map_item_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(nn_map_t * VAR_0)
{
 name_map_item_t *VAR_1 = ((void*)0);

 if (!VAR_0)
  return;

 VAR_1 = (name_map_item_t *) FUNC_1(VAR_0);
 while (VAR_1 != (name_map_item_t *) FUNC_0(VAR_0)) {
  VAR_1 = (name_map_item_t *) FUNC_2(VAR_0, VAR_1->guid);
  FUNC_3(VAR_1->name);
  FUNC_3(VAR_1);
  VAR_1 = (name_map_item_t *) FUNC_1(VAR_0);
 }
 FUNC_3(VAR_0);
}
