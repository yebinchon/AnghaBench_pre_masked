
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vltable_t ;
typedef int uint8_t ;
struct TYPE_3__ {int p_subn; } ;
typedef TYPE_1__ osm_ucast_mgr_t ;
typedef int osm_port_t ;
typedef int int32_t ;
typedef int ib_net16_t ;
struct TYPE_4__ {scalar_t__ routing_type; scalar_t__ vl_split_count; scalar_t__ srcdest2vl_table; scalar_t__ p_mgr; } ;
typedef TYPE_2__ dfsssp_context_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int const) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int const,int const) ;

__attribute__((used)) static uint8_t FUNC_3(void *VAR_1, uint8_t VAR_2,
        const ib_net16_t VAR_3, const ib_net16_t VAR_4)
{
 dfsssp_context_t *VAR_5 = (dfsssp_context_t *) VAR_1;
 osm_port_t *VAR_6, *VAR_7;
 vltable_t *VAR_8 = ((void*)0);
 uint8_t *VAR_9 = ((void*)0);
 osm_ucast_mgr_t *VAR_10 = ((void*)0);
 int32_t VAR_11 = 0;

 if (VAR_5
     && VAR_5->routing_type == VAR_0) {
  VAR_10 = (osm_ucast_mgr_t *) VAR_5->p_mgr;
  VAR_8 = (vltable_t *) (VAR_5->srcdest2vl_table);
  VAR_9 = (uint8_t *) (VAR_5->vl_split_count);
 }
 else
  return VAR_2;

 VAR_6 = FUNC_0(VAR_10->p_subn, VAR_3);
 if (!VAR_6)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_10->p_subn, VAR_4);
 if (!VAR_7)
  return VAR_2;

 if (!VAR_8)
  return VAR_2;

 VAR_11 = FUNC_2(VAR_8, VAR_3, VAR_4);





 if (VAR_11 > -1) {
  if (VAR_9[VAR_11] > 1)
   return (uint8_t) (VAR_11 + FUNC_1()%(VAR_9[VAR_11]));
  else
   return (uint8_t) VAR_11;
 } else
  return VAR_2;
}
