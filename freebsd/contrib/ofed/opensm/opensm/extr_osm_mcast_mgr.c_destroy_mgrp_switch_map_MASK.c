
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_mc_member; scalar_t__ num_of_mcm; } ;
typedef TYPE_1__ osm_switch_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(cl_qmap_t * VAR_1)
{
 osm_switch_t *VAR_2;
 cl_map_item_t *VAR_3;

 for (VAR_3 = FUNC_2(VAR_1); VAR_3 != FUNC_1(VAR_1); VAR_3 = FUNC_3(VAR_3)) {
  VAR_2 = FUNC_0(VAR_3, VAR_2, VAR_0);
  VAR_2->num_of_mcm = 0;
  VAR_2->is_mc_member = 0;
 }
 FUNC_4(VAR_1);
}
