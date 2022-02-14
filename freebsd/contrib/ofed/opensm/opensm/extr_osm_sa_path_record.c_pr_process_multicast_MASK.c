
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {int p_log; int p_subn; } ;
typedef TYPE_3__ osm_sa_t ;
struct TYPE_18__ {int raw; } ;
struct TYPE_24__ {int num_path; int mtu; int rate; int pkt_life; int hop_flow_raw; int pkey; int tclass; int dlid; TYPE_11__ dgid; } ;
struct TYPE_20__ {TYPE_6__ path_rec; } ;
struct TYPE_22__ {int list_item; TYPE_2__ resp; } ;
typedef TYPE_4__ osm_sa_item_t ;
struct TYPE_19__ {int mtu; int rate; int pkt_life; TYPE_11__ mgid; int sl_flow_hop; int pkey; int tclass; int mlid; } ;
struct TYPE_23__ {TYPE_1__ mcmember_rec; } ;
typedef TYPE_5__ osm_mgrp_t ;
typedef int ib_sa_mad_t ;
typedef TYPE_6__ ib_path_rec_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int cl_qlist_t ;
typedef int cl_list_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int*,int *) ;
 scalar_t__ FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 TYPE_6__* FUNC_7 (int const*) ;
 int FUNC_8 (int ,int ,char*,int) ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;
 TYPE_5__* FUNC_11 (int ,TYPE_11__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int const*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_13(osm_sa_t * VAR_9, const ib_sa_mad_t *VAR_10,
     cl_qlist_t *VAR_11)
{
 ib_path_rec_t *VAR_12 = FUNC_7(VAR_10);
 osm_mgrp_t *VAR_13;
 ib_api_status_t VAR_14;
 osm_sa_item_t *VAR_15;
 uint32_t VAR_16;
 uint8_t VAR_17, VAR_18;

 FUNC_0(VAR_9->p_log, VAR_6, "Multicast destination requested\n");

 VAR_13 = FUNC_11(VAR_9->p_subn, &VAR_12->dgid);
 if (!VAR_13) {
  char VAR_19[VAR_5];
  FUNC_0(VAR_9->p_log, VAR_7, "ERR 1F09: "
   "No MC group found for PathRecord destination GID %s\n",
   FUNC_8(VAR_0, VAR_12->dgid.raw, VAR_19,
      sizeof VAR_19));
  return;
 }


 VAR_14 = FUNC_12(VAR_9, VAR_10, VAR_13);
 if (VAR_14 != VAR_4) {
  FUNC_0(VAR_9->p_log, VAR_7, "ERR 1F19: "
   "MC group attributes don't match PathRecord request\n");
  return;
 }

 VAR_15 = FUNC_9(VAR_8);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_9->p_log, VAR_7, "ERR 1F18: "
   "Unable to allocate path record for MC group\n");
  return;
 }
 FUNC_10(VAR_15, 0, sizeof(cl_list_item_t));


 VAR_15->resp.path_rec = *VAR_12;


 VAR_15->resp.path_rec.dgid = VAR_13->mcmember_rec.mgid;
 VAR_15->resp.path_rec.dlid = VAR_13->mcmember_rec.mlid;
 VAR_15->resp.path_rec.tclass = VAR_13->mcmember_rec.tclass;
 VAR_15->resp.path_rec.num_path = 1;
 VAR_15->resp.path_rec.pkey = VAR_13->mcmember_rec.pkey;


 VAR_15->resp.path_rec.mtu = (VAR_3 << 6) | VAR_13->mcmember_rec.mtu;
 VAR_15->resp.path_rec.rate = (VAR_3 << 6) | VAR_13->mcmember_rec.rate;
 VAR_15->resp.path_rec.pkt_life = (VAR_3 << 6) | VAR_13->mcmember_rec.pkt_life;


 FUNC_3(VAR_13->mcmember_rec.sl_flow_hop,
      &VAR_17, &VAR_16, &VAR_18);
 FUNC_6(&VAR_15->resp.path_rec, VAR_17);
 FUNC_5(&VAR_15->resp.path_rec, 0);



 if (FUNC_4(&VAR_13->mcmember_rec.mgid) !=
     VAR_2)
  VAR_18 = VAR_1;

 VAR_15->resp.path_rec.hop_flow_raw =
     FUNC_1(VAR_18) | (VAR_16 << 8);

 FUNC_2(VAR_11, &VAR_15->list_item);
}
