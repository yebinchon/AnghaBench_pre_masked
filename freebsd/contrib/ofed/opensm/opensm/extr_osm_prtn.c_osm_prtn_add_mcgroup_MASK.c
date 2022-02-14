
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int subnet_timeout; } ;
struct TYPE_18__ {TYPE_2__ opt; TYPE_1__* p_osm; } ;
typedef TYPE_3__ osm_subn_t ;
typedef int osm_sa_t ;
struct TYPE_19__ {int pkey; } ;
typedef TYPE_4__ osm_prtn_t ;
typedef int osm_mgrp_t ;
typedef int osm_log_t ;
typedef int mc_rec ;
typedef int ib_net64_t ;
typedef int ib_net16_t ;
struct TYPE_21__ {int raw; } ;
struct TYPE_20__ {int mtu; int tclass; int pkey; int rate; TYPE_6__ mgid; int scope_state; int sl_flow_hop; int pkt_life; int qkey; } ;
typedef TYPE_5__ ib_member_rec_t ;
typedef TYPE_6__ ib_gid_t ;
typedef int ib_api_status_t ;
struct TYPE_16__ {int sa; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int * FUNC_9 (int *,int,TYPE_5__*) ;
 int FUNC_10 (int *,TYPE_4__*,int *,TYPE_3__*,TYPE_6__ const*,int) ;

ib_api_status_t FUNC_11(osm_log_t * VAR_13, osm_subn_t * VAR_14,
         osm_prtn_t * VAR_15, uint8_t VAR_16, uint8_t VAR_17,
         uint8_t VAR_18, uint8_t VAR_19, uint32_t VAR_20,
         uint8_t VAR_21, uint32_t VAR_22,
         const ib_gid_t *VAR_23)
{
 char VAR_24[VAR_10];
 ib_member_rec_t VAR_25;
 ib_net64_t VAR_26;
 ib_net16_t VAR_27;
 osm_mgrp_t *VAR_28;
 osm_sa_t *VAR_29 = &VAR_14->p_osm->sa;
 uint8_t VAR_30;

 VAR_27 = VAR_15->pkey | FUNC_2(0x8000);
 if (!VAR_19)
  VAR_19 = VAR_11;
 VAR_30 = (VAR_19 == VAR_8) ? 0 : VAR_2;

 FUNC_8(&VAR_25, 0, sizeof(VAR_25));

 VAR_25.mgid = *VAR_23;

 VAR_25.qkey = FUNC_0(VAR_20);
 VAR_25.mtu = VAR_17 | (VAR_9 << 6);
 VAR_25.tclass = VAR_21;
 VAR_25.pkey = VAR_27;
 VAR_25.rate = VAR_16 | (VAR_9 << 6);
 VAR_25.pkt_life = VAR_14->opt.subnet_timeout;
 VAR_25.sl_flow_hop = FUNC_5(VAR_18, VAR_22, VAR_30);

 VAR_25.scope_state =
     FUNC_4(VAR_19, VAR_7);
 FUNC_6(&VAR_25.mgid, VAR_19);


 VAR_26 = VAR_3 | VAR_4 |
     VAR_5 | VAR_6;
 VAR_28 = FUNC_9(VAR_29, VAR_26, &VAR_25);
 if (!VAR_28) {
  FUNC_1(VAR_13, VAR_12,
   "Failed to create MC group (%s) with pkey 0x%04x\n",
   FUNC_7(VAR_0, VAR_23->raw, VAR_24, sizeof VAR_24),
   FUNC_3(VAR_27));
  return VAR_1;
 }

 return (FUNC_10(VAR_13, VAR_15, VAR_28, VAR_14, VAR_23, VAR_27));
}
