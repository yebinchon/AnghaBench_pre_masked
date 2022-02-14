
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


typedef int uint8_t ;
typedef int payload ;
struct TYPE_23__ {TYPE_15__* p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_24__ {scalar_t__ lid; } ;
typedef TYPE_4__ osm_port_t ;
struct TYPE_21__ {scalar_t__ hop_count; } ;
struct TYPE_25__ {int p_node; int port_info; struct TYPE_25__* p_remote_physp; TYPE_1__ dr_path; } ;
typedef TYPE_5__ osm_physp_t ;
struct TYPE_22__ {void* client_rereg; void* active_transition; void* light_sweep; int set_method; int port_guid; int node_guid; } ;
struct TYPE_26__ {TYPE_2__ pi_context; } ;
typedef TYPE_6__ osm_madw_context_t ;
struct TYPE_27__ {int master_sm_base_lid; scalar_t__ base_lid; } ;
typedef TYPE_7__ ib_port_info_t ;
typedef int ib_net64_t ;
typedef int ib_api_status_t ;
struct TYPE_20__ {int sm_base_lid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 TYPE_4__* FUNC_5 (TYPE_15__*,int ) ;
 int FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,int ,int *,int,int ,int ,void*,int ,int ,TYPE_6__*) ;

__attribute__((used)) static int FUNC_13(osm_sm_t *VAR_8, osm_physp_t *VAR_9)
{
 uint8_t VAR_10[VAR_6];
 osm_madw_context_t VAR_11;
 ib_port_info_t *VAR_12 = (ib_port_info_t *)VAR_10;
 osm_physp_t *VAR_13;
 osm_port_t *VAR_14;
 ib_net64_t VAR_15;
 ib_api_status_t VAR_16;


 if (VAR_9->p_remote_physp &&
     VAR_9->dr_path.hop_count > VAR_9->p_remote_physp->dr_path.hop_count)
  VAR_9 = VAR_9->p_remote_physp;




 FUNC_4(VAR_10, &VAR_9->port_info, sizeof(ib_port_info_t));


 FUNC_3(VAR_12, VAR_2);
 FUNC_2(VAR_5, VAR_12);


 VAR_11.pi_context.node_guid = FUNC_6(VAR_9->p_node);
 VAR_11.pi_context.port_guid = FUNC_10(VAR_9);
 VAR_11.pi_context.set_method = VAR_7;
 VAR_11.pi_context.light_sweep = VAR_1;
 VAR_11.pi_context.active_transition = VAR_1;
 VAR_11.pi_context.client_rereg = VAR_1;
 if (FUNC_8(VAR_9->p_node) == VAR_4 &&
     FUNC_11(VAR_9) != 0) {
  VAR_13 = FUNC_7(VAR_9->p_node, 0);
  VAR_15 = FUNC_1(&VAR_13->port_info);
 } else
  VAR_15 = FUNC_1(&VAR_9->port_info);

 if (FUNC_8(VAR_9->p_node) != VAR_4) {
  if (!VAR_12->base_lid) {
   VAR_14 = FUNC_5(VAR_8->p_subn,
            FUNC_10(VAR_9));
   VAR_12->base_lid = VAR_14->lid;
  }
  VAR_12->master_sm_base_lid = VAR_8->p_subn->sm_base_lid;
 }

 VAR_16 = FUNC_12(VAR_8, FUNC_9(VAR_9),
      VAR_10, sizeof(VAR_10), VAR_3,
      FUNC_0(FUNC_11(VAR_9)),
      VAR_1, VAR_15,
      VAR_0, &VAR_11);
 return VAR_16;
}
