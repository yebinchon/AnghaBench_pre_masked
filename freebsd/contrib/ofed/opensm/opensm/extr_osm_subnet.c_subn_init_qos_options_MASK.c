
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int high_limit; int * sl2vl; int * vlarb_low; int * vlarb_high; scalar_t__ max_vls; } ;
typedef TYPE_1__ osm_qos_options_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(osm_qos_options_t *VAR_0, osm_qos_options_t *VAR_1)
{
 VAR_0->max_vls = 0;
 VAR_0->high_limit = -1;
 if (VAR_0->vlarb_high)
  FUNC_0(VAR_0->vlarb_high);
 VAR_0->vlarb_high = ((void*)0);
 if (VAR_0->vlarb_low)
  FUNC_0(VAR_0->vlarb_low);
 VAR_0->vlarb_low = ((void*)0);
 if (VAR_0->sl2vl)
  FUNC_0(VAR_0->sl2vl);
 VAR_0->sl2vl = ((void*)0);
 if (VAR_1)
  FUNC_1(VAR_1, VAR_0, sizeof(*VAR_1));
}
