
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {unsigned int id; struct TYPE_13__* dij_channels; TYPE_3__* p_sw; TYPE_1__* routing_table; } ;
typedef TYPE_2__ switch_t ;
struct TYPE_14__ {unsigned int num_ports; TYPE_2__* priv; } ;
typedef TYPE_3__ osm_switch_t ;
struct TYPE_15__ {unsigned int num_switches; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_12__ {void* lane; void* out_link; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static switch_t *FUNC_4(lash_t * VAR_1, unsigned VAR_2, osm_switch_t * VAR_3)
{
 unsigned VAR_4 = VAR_1->num_switches;
 unsigned VAR_5 = VAR_3->num_ports;
 switch_t *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6) + VAR_4 * sizeof(VAR_6->routing_table[0]));
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->routing_table[VAR_7].out_link = VAR_0;
  VAR_6->routing_table[VAR_7].lane = VAR_0;
 }

 VAR_6->id = VAR_2;
 VAR_6->dij_channels = FUNC_1(VAR_5 * sizeof(int));
 if (!VAR_6->dij_channels) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->p_sw = VAR_3;
 VAR_3->priv = VAR_6;

 if (FUNC_3(VAR_1, VAR_6)) {
  FUNC_0(VAR_6->dij_channels);
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
