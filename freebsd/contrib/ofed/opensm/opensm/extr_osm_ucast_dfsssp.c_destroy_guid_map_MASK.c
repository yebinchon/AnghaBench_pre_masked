
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item; } ;
typedef TYPE_1__ name_map_item_t ;
typedef int cl_qmap_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(cl_qmap_t * VAR_0)
{
 name_map_item_t *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);

 VAR_2 = (name_map_item_t *) FUNC_1(VAR_0);
 while (VAR_2 != (name_map_item_t *) FUNC_0(VAR_0)) {
  VAR_1 = VAR_2;
  VAR_2 = (name_map_item_t *) FUNC_2(&VAR_1->item);
  FUNC_4(VAR_1);
 }
 FUNC_3(VAR_0);
}
