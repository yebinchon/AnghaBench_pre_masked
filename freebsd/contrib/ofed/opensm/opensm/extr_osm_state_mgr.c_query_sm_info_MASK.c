
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int p_log; int p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_14__ {int guid; } ;
struct TYPE_17__ {TYPE_1__ smi; } ;
typedef TYPE_4__ osm_remote_sm_t ;
struct TYPE_18__ {TYPE_10__* p_physp; } ;
typedef TYPE_5__ osm_port_t ;
struct TYPE_15__ {int light_sweep; int set_method; int port_guid; } ;
struct TYPE_19__ {TYPE_2__ smi_context; } ;
typedef TYPE_6__ osm_madw_context_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int cl_map_item_t ;
struct TYPE_13__ {int port_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 TYPE_5__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_10__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ,int ,int ,int ,int ,TYPE_6__*) ;
 TYPE_4__* VAR_7 ;

__attribute__((used)) static void FUNC_7(cl_map_item_t * VAR_8, void *VAR_9)
{
 osm_madw_context_t VAR_10;
 osm_remote_sm_t *VAR_11 = FUNC_1(VAR_8, VAR_11, VAR_6);
 osm_sm_t *VAR_12 = VAR_9;
 ib_api_status_t VAR_13;
 osm_port_t *VAR_14;

 VAR_14= FUNC_4(VAR_12->p_subn, VAR_11->smi.guid);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_12->p_log, VAR_4, "ERR 3340: "
   "No port object on given sm object\n");
  return;
        }

 VAR_10.smi_context.port_guid = VAR_11->smi.guid;
 VAR_10.smi_context.set_method = VAR_1;
 VAR_10.smi_context.light_sweep = VAR_5;

 VAR_13 = FUNC_6(VAR_12, FUNC_5(VAR_14->p_physp),
     VAR_2, 0, VAR_1,
     FUNC_3(&VAR_14->p_physp->port_info),
     VAR_0, &VAR_10);
 if (VAR_13 != VAR_3)
  FUNC_0(VAR_12->p_log, VAR_4, "ERR 3314: "
   "Failure requesting SMInfo (%s)\n",
   FUNC_2(VAR_13));
}
