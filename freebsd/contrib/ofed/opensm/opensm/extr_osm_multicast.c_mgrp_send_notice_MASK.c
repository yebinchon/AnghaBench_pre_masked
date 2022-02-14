
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_24__ {int subnet_prefix; } ;
struct TYPE_27__ {int sm_port_guid; TYPE_6__ opt; int sm_base_lid; } ;
typedef TYPE_9__ osm_subn_t ;
struct TYPE_23__ {int mgid; } ;
struct TYPE_17__ {TYPE_5__ mcmember_rec; } ;
typedef TYPE_10__ osm_mgrp_t ;
typedef int osm_log_t ;
struct TYPE_25__ {int interface_id; int prefix; } ;
struct TYPE_26__ {TYPE_7__ unicast; } ;
struct TYPE_21__ {int gid; } ;
struct TYPE_22__ {TYPE_3__ ntc_64_67; } ;
struct TYPE_19__ {int trap_num; } ;
struct TYPE_20__ {TYPE_1__ generic; } ;
struct TYPE_18__ {int generic_type; TYPE_8__ issuer_gid; TYPE_4__ data_details; int issuer_lid; TYPE_2__ g_or_v; } ;
typedef TYPE_11__ ib_mad_notice_attr_t ;
typedef int ib_gid_t ;
typedef int ib_api_status_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_11__*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,TYPE_9__*,TYPE_11__*) ;

__attribute__((used)) static void FUNC_6(osm_subn_t * VAR_2, osm_log_t * VAR_3,
        osm_mgrp_t * VAR_4, unsigned VAR_5)
{
 ib_mad_notice_attr_t VAR_6;
 ib_api_status_t VAR_7;

 VAR_6.generic_type = 0x80 | VAR_0;
 FUNC_3(&VAR_6, 4);
 VAR_6.g_or_v.generic.trap_num = FUNC_0(VAR_5);

 VAR_6.issuer_lid = VAR_2->sm_base_lid;


 FUNC_4(&VAR_6.data_details.ntc_64_67.gid,
        &VAR_4->mcmember_rec.mgid, sizeof(ib_gid_t));



 VAR_6.issuer_gid.unicast.prefix = VAR_2->opt.subnet_prefix;
 VAR_6.issuer_gid.unicast.interface_id = VAR_2->sm_port_guid;

 if ((VAR_7 = FUNC_5(VAR_3, VAR_2, &VAR_6)))
  FUNC_1(VAR_3, VAR_1, "ERR 7601: "
   "Error sending trap reports (%s)\n",
   FUNC_2(VAR_7));
}
