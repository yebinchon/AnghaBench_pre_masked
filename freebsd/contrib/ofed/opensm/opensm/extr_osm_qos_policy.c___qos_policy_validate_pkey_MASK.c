
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* p_subn; } ;
typedef TYPE_4__ osm_qos_policy_t ;
struct TYPE_14__ {TYPE_3__* p_qos_level; } ;
typedef TYPE_5__ osm_qos_match_rule_t ;
struct TYPE_15__ {scalar_t__ sl; int pkey; } ;
typedef TYPE_6__ osm_prtn_t ;
struct TYPE_12__ {scalar_t__ sl; int sl_set; } ;
struct TYPE_11__ {TYPE_1__* p_osm; } ;
struct TYPE_10__ {int log; } ;


 int FUNC_0 (int *,int ,char*,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(
   osm_qos_policy_t * VAR_1,
   osm_qos_match_rule_t * VAR_2,
   osm_prtn_t * VAR_3)
{
 if (!VAR_1 || !VAR_2 || !VAR_3)
  return;

 if (!VAR_2->p_qos_level->sl_set ||
     VAR_3->sl == VAR_2->p_qos_level->sl)
  return;

 FUNC_0(&VAR_1->p_subn->p_osm->log, VAR_0,
  "QoS Level SL (%u) for Pkey 0x%04X in match rule "
  "differs from  partition SL (%u)\n",
  VAR_2->p_qos_level->sl,
  FUNC_1(VAR_3->pkey), VAR_3->sl);
}
