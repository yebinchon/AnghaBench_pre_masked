
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int is_mc_member; int p_node; } ;
typedef TYPE_1__ osm_switch_t ;
struct TYPE_9__ {int p_log; } ;
typedef TYPE_2__ osm_sm_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*,int ) ;

__attribute__((used)) static float FUNC_9(osm_sm_t * VAR_1, cl_qmap_t * VAR_2,
     const osm_switch_t * VAR_3)
{
 uint32_t VAR_4 = 0, VAR_5;
 uint16_t VAR_6;
 cl_map_item_t *VAR_7;
 osm_switch_t *VAR_8;

 FUNC_0(VAR_1->p_log);





 for (VAR_7 = FUNC_5(VAR_2); VAR_7 != FUNC_4(VAR_2); VAR_7 = FUNC_6(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7, VAR_8, VAR_0);
  VAR_6 = FUNC_3(FUNC_7(VAR_8->p_node, 0));
  VAR_5 = FUNC_8(VAR_3, VAR_6);
  if (!VAR_8->is_mc_member)
   VAR_5 += 1;
  if (VAR_5 > VAR_4)
   VAR_4 = VAR_5;
 }





 FUNC_1(VAR_1->p_log);
 return (float)VAR_4;
}
