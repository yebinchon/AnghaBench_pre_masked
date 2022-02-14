
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int p_log; TYPE_2__* p_subn; } ;
typedef TYPE_5__ osm_sm_t ;
struct TYPE_14__ {int ca_cong_setting; } ;
struct TYPE_15__ {TYPE_3__ ca; } ;
struct TYPE_17__ {TYPE_4__ cc; scalar_t__ need_update; } ;
typedef TYPE_6__ osm_physp_t ;
typedef int osm_node_t ;
typedef int osm_madw_t ;
struct TYPE_18__ {int ca_cong_setting; int bind_handle; int mad_pool; } ;
typedef TYPE_7__ osm_congestion_control_t ;
typedef int ib_cc_mad_t ;
typedef int ib_ca_cong_setting_t ;
typedef int ib_api_status_t ;
struct TYPE_13__ {scalar_t__ need_update; TYPE_1__* p_osm; } ;
struct TYPE_12__ {TYPE_7__ cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int *,int *,TYPE_6__*,int ,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int * FUNC_7 (int ,int ,int ,int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static ib_api_status_t FUNC_9(osm_sm_t * VAR_5,
            osm_node_t *VAR_6,
            osm_physp_t *VAR_7)
{
 osm_congestion_control_t *VAR_8 = &VAR_5->p_subn->p_osm->cc;
 unsigned VAR_9;
 osm_madw_t *VAR_10 = ((void*)0);
 ib_cc_mad_t *VAR_11 = ((void*)0);
 ib_ca_cong_setting_t *VAR_12 = ((void*)0);

 FUNC_1(VAR_5->p_log);

 VAR_9 = VAR_7->need_update || VAR_5->p_subn->need_update;

 if (!VAR_9
     && !FUNC_5(&VAR_8->ca_cong_setting,
         &VAR_7->cc.ca.ca_cong_setting,
         sizeof(VAR_8->ca_cong_setting)))
  return VAR_2;

 VAR_10 = FUNC_7(VAR_8->mad_pool, VAR_8->bind_handle,
      VAR_3, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_5->p_log, VAR_4, "ERR C102: "
   "failed to allocate mad\n");
  return VAR_0;
 }

 VAR_11 = FUNC_8(VAR_10);

 VAR_12 = FUNC_4(VAR_11);

 FUNC_6(VAR_12,
        &VAR_8->ca_cong_setting,
        sizeof(VAR_8->ca_cong_setting));

 FUNC_3(VAR_8, VAR_10, VAR_6, VAR_7,
      VAR_1, 0);

 FUNC_2(VAR_5->p_log);

 return VAR_2;
}
