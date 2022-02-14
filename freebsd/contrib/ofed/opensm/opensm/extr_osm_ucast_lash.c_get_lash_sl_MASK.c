
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_3__* routing_table; } ;
typedef TYPE_4__ switch_t ;
struct TYPE_15__ {scalar_t__ priv; } ;
typedef TYPE_5__ osm_switch_t ;
typedef int osm_port_t ;
struct TYPE_12__ {int lash_start_vl; } ;
struct TYPE_18__ {TYPE_2__ opt; } ;
struct TYPE_16__ {TYPE_8__ subn; TYPE_1__* routing_engine_used; } ;
typedef TYPE_6__ osm_opensm_t ;
struct TYPE_17__ {TYPE_6__* p_osm; } ;
typedef TYPE_7__ lash_t ;
typedef int ib_net16_t ;
struct TYPE_13__ {int lane; } ;
struct TYPE_11__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_8__*,int const) ;

__attribute__((used)) static uint8_t FUNC_3(void *VAR_2, uint8_t VAR_3,
      const ib_net16_t VAR_4, const ib_net16_t VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7;
 osm_port_t *VAR_8, *VAR_9;
 osm_switch_t *VAR_10;
 lash_t *VAR_11 = VAR_2;
 osm_opensm_t *VAR_12 = VAR_11->p_osm;

 if (!(VAR_12->routing_engine_used &&
       VAR_12->routing_engine_used->type == VAR_1))
  return VAR_0;

 VAR_8 = FUNC_2(&VAR_12->subn, VAR_4);
 if (!VAR_8)
  return VAR_0;

 VAR_9 = FUNC_2(&VAR_12->subn, VAR_5);
 if (!VAR_9)
  return VAR_0;

 VAR_10 = FUNC_1(VAR_9);
 if (!VAR_10 || !VAR_10->priv)
  return VAR_0;
 VAR_6 = FUNC_0(VAR_10);

 VAR_10 = FUNC_1(VAR_8);
 if (!VAR_10 || !VAR_10->priv)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_10);
 if (VAR_7 == VAR_6)
  return VAR_12->subn.opt.lash_start_vl;

 return (uint8_t) ((switch_t *) VAR_10->priv)->routing_table[VAR_6].lane;
}
