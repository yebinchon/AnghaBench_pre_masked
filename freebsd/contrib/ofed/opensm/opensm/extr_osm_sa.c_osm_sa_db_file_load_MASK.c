
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_67__ TYPE_9__ ;
typedef struct TYPE_66__ TYPE_8__ ;
typedef struct TYPE_65__ TYPE_7__ ;
typedef struct TYPE_64__ TYPE_6__ ;
typedef struct TYPE_63__ TYPE_5__ ;
typedef struct TYPE_62__ TYPE_4__ ;
typedef struct TYPE_61__ TYPE_3__ ;
typedef struct TYPE_60__ TYPE_30__ ;
typedef struct TYPE_59__ TYPE_2__ ;
typedef struct TYPE_58__ TYPE_22__ ;
typedef struct TYPE_57__ TYPE_21__ ;
typedef struct TYPE_56__ TYPE_20__ ;
typedef struct TYPE_55__ TYPE_1__ ;
typedef struct TYPE_54__ TYPE_19__ ;
typedef struct TYPE_53__ TYPE_18__ ;
typedef struct TYPE_52__ TYPE_17__ ;
typedef struct TYPE_51__ TYPE_16__ ;
typedef struct TYPE_50__ TYPE_15__ ;
typedef struct TYPE_49__ TYPE_14__ ;
typedef struct TYPE_48__ TYPE_13__ ;
typedef struct TYPE_47__ TYPE_12__ ;
typedef struct TYPE_46__ TYPE_11__ ;
typedef struct TYPE_45__ TYPE_10__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef int s_rec ;
typedef int rep_addr ;
typedef int osm_port_t ;
struct TYPE_54__ {void* dirty; } ;
struct TYPE_53__ {char* sa_db_file; void* no_clients_rereg; } ;
struct TYPE_60__ {TYPE_18__ opt; int first_time_master_sweep; } ;
struct TYPE_61__ {scalar_t__ mlids_init_max; } ;
struct TYPE_56__ {TYPE_19__ sa; TYPE_30__ subn; int log; TYPE_3__ sm; } ;
typedef TYPE_20__ osm_opensm_t ;
struct TYPE_57__ {int mcm_port_tbl; } ;
typedef TYPE_21__ osm_mgrp_t ;
struct TYPE_52__ {void** guid; } ;
struct TYPE_50__ {void* remote_qp; void* remote_qkey; void* service_level; scalar_t__ pkey_ix; } ;
struct TYPE_51__ {TYPE_15__ gsi; } ;
struct TYPE_47__ {void* trap_num; void* qpn_resp_time_val; int reserved2; } ;
struct TYPE_48__ {TYPE_12__ generic; } ;
struct TYPE_45__ {void* prefix; void* interface_id; } ;
struct TYPE_46__ {TYPE_10__ unicast; } ;
struct TYPE_49__ {void* lid_range_begin; void* lid_range_end; void* is_generic; void* subscribe; void* trap_type; TYPE_13__ g_or_v; TYPE_11__ gid; } ;
struct TYPE_66__ {void* prefix; void* interface_id; } ;
struct TYPE_67__ {TYPE_8__ unicast; } ;
struct TYPE_64__ {void* prefix; void* interface_id; } ;
struct TYPE_65__ {TYPE_6__ unicast; } ;
struct TYPE_62__ {void* prefix; void* interface_id; } ;
struct TYPE_63__ {TYPE_4__ unicast; } ;
struct TYPE_55__ {void* prefix; void* interface_id; } ;
struct TYPE_59__ {TYPE_1__ unicast; } ;
struct TYPE_58__ {void* qkey; void* mlid; void* mtu; void* tclass; void* pkey; void* rate; void* pkt_life; void* sl_flow_hop; void* scope_state; void* service_id; void* service_pkey; void* service_lease; void** service_name; void** service_data64; void* subscriber_enum; void* dest_lid; void* path_bits; void* static_rate; void* lid; void* block_num; TYPE_17__ guid_info; TYPE_16__ addr_type; TYPE_14__ inform_info; TYPE_9__ subscriber_gid; int * service_data32; int * service_data16; int * service_data8; int * service_key; TYPE_7__ service_gid; TYPE_5__ port_gid; void* proxy_join; TYPE_2__ mgid; } ;
typedef TYPE_22__ osm_mad_addr_t ;
typedef int mcm_rec ;
typedef int line ;
typedef TYPE_22__ ib_service_record_t ;
typedef void* ib_net64_t ;
typedef void* ib_net16_t ;
typedef TYPE_22__ ib_member_rec_t ;
typedef TYPE_22__ ib_inform_info_record_t ;
typedef TYPE_22__ ib_guidinfo_record_t ;
typedef int i_rec ;
typedef int gi_rec ;
typedef void* boolean_t ;
typedef int FILE ;


 void* VAR_0 ;
 int FUNC_0 (int *,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*,void**) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,void*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char) ;
 scalar_t__ FUNC_10 (TYPE_20__*,void*,TYPE_22__*) ;
 scalar_t__ FUNC_11 (TYPE_20__*,TYPE_22__*,TYPE_22__*) ;
 TYPE_21__* FUNC_12 (TYPE_20__*,void*,TYPE_22__*) ;
 scalar_t__ FUNC_13 (TYPE_20__*,TYPE_22__*,int ,int ) ;
 int FUNC_14 (TYPE_22__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_15 (TYPE_30__*,void*) ;
 int FUNC_16 (TYPE_30__*,int *,TYPE_21__*,int *,TYPE_22__*,void*) ;
 int FUNC_17 (TYPE_20__*,TYPE_21__*) ;
 int VAR_8 ;
 int FUNC_18 (char*,char*,int) ;

int FUNC_19(osm_opensm_t * VAR_9)
{
 char VAR_10[1024];
 char *VAR_11;
 FILE *VAR_12;
 int VAR_13 = 0;
 osm_mgrp_t *VAR_14 = ((void*)0);
 osm_mgrp_t *VAR_15 = ((void*)0);
 unsigned VAR_16 = 0;
 unsigned VAR_17;

 if (!VAR_9->subn.first_time_master_sweep) {
  FUNC_0(&VAR_9->log, VAR_3,
   "Not first sweep - skip SA DB restore\n");
  return 0;
 }

 VAR_11 = VAR_9->subn.opt.sa_db_file;
 if (!VAR_11) {
  FUNC_0(&VAR_9->log, VAR_3,
   "sa db file name is not specified. Skip restore\n");
  return 0;
 }

 VAR_12 = FUNC_8(VAR_11, "r");
 if (!VAR_12) {
  FUNC_0(&VAR_9->log, VAR_1 | VAR_2, "ERR 4C02: "
   "Can't open sa db file \'%s\'. Skip restoring\n",
   VAR_11);
  return -1;
 }

 FUNC_0(&VAR_9->log, VAR_3,
  "Restoring SA DB from file \'%s\'\n",
  VAR_11);

 VAR_17 = 0;

 while (FUNC_7(VAR_10, sizeof(VAR_10) - 1, VAR_12) != ((void*)0)) {
  char *VAR_18;
  uint8_t VAR_19;

  VAR_17++;

  VAR_18 = VAR_10;
  while (FUNC_9(*VAR_18))
   VAR_18++;

  if (*VAR_18 == '#')
   continue;

  if (!FUNC_18(VAR_18, "MC Group", 8)) {
   ib_member_rec_t VAR_20;
   ib_net16_t VAR_21;

   VAR_14 = ((void*)0);
   FUNC_14(&VAR_20, 0, sizeof(VAR_20));

   FUNC_1(VAR_18, VAR_4, " 0x", &VAR_21);
   FUNC_1(VAR_18, VAR_6, " mgid=0x",
        &VAR_20.mgid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_20.mgid.unicast.interface_id);
   FUNC_1(VAR_18, VAR_6, " port_gid=0x",
        &VAR_20.port_gid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_20.port_gid.unicast.interface_id);
   FUNC_1(VAR_18, VAR_5, " qkey=0x", &VAR_20.qkey);
   FUNC_1(VAR_18, VAR_4, " mlid=0x", &VAR_20.mlid);
   FUNC_1(VAR_18, VAR_7, " mtu=0x", &VAR_20.mtu);
   FUNC_1(VAR_18, VAR_7, " tclass=0x", &VAR_20.tclass);
   FUNC_1(VAR_18, VAR_4, " pkey=0x", &VAR_20.pkey);
   FUNC_1(VAR_18, VAR_7, " rate=0x", &VAR_20.rate);
   FUNC_1(VAR_18, VAR_7, " pkt_life=0x", &VAR_20.pkt_life);
   FUNC_1(VAR_18, VAR_5, " sl_flow_hop=0x",
        &VAR_20.sl_flow_hop);
   FUNC_1(VAR_18, VAR_7, " scope_state=0x",
        &VAR_20.scope_state);
   FUNC_1(VAR_18, VAR_7, " proxy_join=0x", &VAR_19);
   VAR_20.proxy_join = VAR_19;

   VAR_14 = FUNC_12(VAR_9, VAR_21, &VAR_20);
   if (!VAR_14)
    VAR_16 = 1;
   if (FUNC_2(VAR_21) > VAR_9->sm.mlids_init_max)
    VAR_9->sm.mlids_init_max = FUNC_2(VAR_21);
  } else if (VAR_14 && !FUNC_18(VAR_18, "mcm_port", 8)) {
   ib_member_rec_t VAR_22;
   ib_net64_t VAR_23;
   osm_port_t *VAR_24;
   boolean_t VAR_25;

   FUNC_1(VAR_18, VAR_6, " port_gid=0x",
        &VAR_22.port_gid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_22.port_gid.unicast.interface_id);
   FUNC_1(VAR_18, VAR_7, " scope_state=0x", &VAR_22.scope_state);
   FUNC_1(VAR_18, VAR_7, " proxy_join=0x", &VAR_19);
   VAR_25 = VAR_19;

   VAR_23 = VAR_22.port_gid.unicast.interface_id;
   VAR_24 = FUNC_15(&VAR_9->subn, VAR_23);
   if (VAR_24 &&
       FUNC_5(&VAR_14->mcm_port_tbl, VAR_23) ==
       FUNC_4(&VAR_14->mcm_port_tbl) &&
       !FUNC_16(&VAR_9->subn, &VAR_9->log,
      VAR_14, VAR_24, &VAR_22, VAR_25))
    VAR_16 = 1;
  } else if (!FUNC_18(VAR_18, "Service Record:", 15)) {
   ib_service_record_t VAR_26;
   uint32_t VAR_27, VAR_28;

   VAR_14 = ((void*)0);
   FUNC_14(&VAR_26, 0, sizeof(VAR_26));

   FUNC_1(VAR_18, VAR_6, " id=0x", &VAR_26.service_id);
   FUNC_1(VAR_18, VAR_6, " gid=0x",
        &VAR_26.service_gid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_26.service_gid.unicast.interface_id);
   FUNC_1(VAR_18, VAR_4, " pkey=0x", &VAR_26.service_pkey);
   FUNC_1(VAR_18, VAR_5, " lease=0x",
        &VAR_26.service_lease);
   FUNC_1(VAR_18, VAR_6, " key=0x",
        (ib_net64_t *) (&VAR_26.service_key[0]));
   FUNC_1(VAR_18, VAR_6, ":0x",
        (ib_net64_t *) (&VAR_26.service_key[8]));
   FUNC_1(VAR_18, VAR_8, " name=", VAR_26.service_name);
   FUNC_1(VAR_18, VAR_6, " data8=0x",
        (ib_net64_t *) (&VAR_26.service_data8[0]));
   FUNC_1(VAR_18, VAR_6, ":0x",
        (ib_net64_t *) (&VAR_26.service_data8[8]));
   FUNC_1(VAR_18, VAR_6, " data16=0x",
        (ib_net64_t *) (&VAR_26.service_data16[0]));
   FUNC_1(VAR_18, VAR_6, ":0x",
        (ib_net64_t *) (&VAR_26.service_data16[4]));
   FUNC_1(VAR_18, VAR_6, " data32=0x",
        (ib_net64_t *) (&VAR_26.service_data32[0]));
   FUNC_1(VAR_18, VAR_6, ":0x",
        (ib_net64_t *) (&VAR_26.service_data32[2]));
   FUNC_1(VAR_18, VAR_6, " data64=0x",
        &VAR_26.service_data64[0]);
   FUNC_1(VAR_18, VAR_6, ":0x", &VAR_26.service_data64[1]);
   FUNC_1(VAR_18, VAR_5, " modified_time=0x",
        &VAR_27);
   FUNC_1(VAR_18, VAR_5, " lease_period=0x",
        &VAR_28);

   if (FUNC_13(VAR_9, &VAR_26, FUNC_3(VAR_27),
          FUNC_3(VAR_28)))
    VAR_16 = 1;
  } else if (!FUNC_18(VAR_18, "InformInfo Record:", 18)) {
   ib_inform_info_record_t VAR_29;
   osm_mad_addr_t VAR_30;
   ib_net16_t VAR_31;

   VAR_14 = ((void*)0);
   FUNC_14(&VAR_29, 0, sizeof(VAR_29));
   FUNC_14(&VAR_30, 0, sizeof(VAR_30));

   FUNC_1(VAR_18, VAR_6, " subscriber_gid=0x",
        &VAR_29.subscriber_gid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_29.subscriber_gid.unicast.interface_id);
   FUNC_1(VAR_18, VAR_4, " subscriber_enum=0x",
        &VAR_29.subscriber_enum);
   FUNC_1(VAR_18, VAR_6, " gid=0x",
        &VAR_29.inform_info.gid.unicast.prefix);
   FUNC_1(VAR_18, VAR_6, ":0x",
        &VAR_29.inform_info.gid.unicast.
        interface_id);
   FUNC_1(VAR_18, VAR_4, " lid_range_begin=0x",
        &VAR_29.inform_info.lid_range_begin);
   FUNC_1(VAR_18, VAR_4, " lid_range_end=0x",
        &VAR_29.inform_info.lid_range_end);
   FUNC_1(VAR_18, VAR_7, " is_generic=0x",
        &VAR_29.inform_info.is_generic);
   FUNC_1(VAR_18, VAR_7, " subscribe=0x",
        &VAR_29.inform_info.subscribe);
   FUNC_1(VAR_18, VAR_4, " trap_type=0x",
        &VAR_29.inform_info.trap_type);
   FUNC_1(VAR_18, VAR_4, " trap_num=0x",
        &VAR_29.inform_info.g_or_v.generic.trap_num);
   FUNC_1(VAR_18, VAR_5, " qpn_resp_time_val=0x",
        &VAR_29.inform_info.g_or_v.generic.
        qpn_resp_time_val);
   FUNC_1(VAR_18, VAR_5, " node_type=0x",
        (uint32_t *) & VAR_29.inform_info.g_or_v.
        generic.reserved2);

   FUNC_1(VAR_18, VAR_4, " rep_addr: lid=0x",
        &VAR_30.dest_lid);
   FUNC_1(VAR_18, VAR_7, " path_bits=0x",
        &VAR_30.path_bits);
   FUNC_1(VAR_18, VAR_7, " static_rate=0x",
        &VAR_30.static_rate);
   FUNC_1(VAR_18, VAR_5, " remote_qp=0x",
        &VAR_30.addr_type.gsi.remote_qp);
   FUNC_1(VAR_18, VAR_5, " remote_qkey=0x",
        &VAR_30.addr_type.gsi.remote_qkey);
   FUNC_1(VAR_18, VAR_4, " pkey_ix=0x", &VAR_31);
   VAR_30.addr_type.gsi.pkey_ix = FUNC_2(VAR_31);
   FUNC_1(VAR_18, VAR_7, " sl=0x",
        &VAR_30.addr_type.gsi.service_level);

   if (FUNC_11(VAR_9, &VAR_29, &VAR_30))
    VAR_16 = 1;
  } else if (!FUNC_18(VAR_18, "GUIDInfo Record:", 16)) {
   ib_guidinfo_record_t VAR_32;
   ib_net64_t VAR_33;

   VAR_14 = ((void*)0);
   FUNC_14(&VAR_32, 0, sizeof(VAR_32));

   FUNC_1(VAR_18, VAR_6, " base_guid=0x", &VAR_33);
   FUNC_1(VAR_18, VAR_4, " lid=0x", &VAR_32.lid);
   FUNC_1(VAR_18, VAR_7, " block_num=0x",
        &VAR_32.block_num);
   FUNC_1(VAR_18, VAR_6, " guid0=0x",
        &VAR_32.guid_info.guid[0]);
   FUNC_1(VAR_18, VAR_6, " guid1=0x",
        &VAR_32.guid_info.guid[1]);
   FUNC_1(VAR_18, VAR_6, " guid2=0x",
        &VAR_32.guid_info.guid[2]);
   FUNC_1(VAR_18, VAR_6, " guid3=0x",
        &VAR_32.guid_info.guid[3]);
   FUNC_1(VAR_18, VAR_6, " guid4=0x",
        &VAR_32.guid_info.guid[4]);
   FUNC_1(VAR_18, VAR_6, " guid5=0x",
        &VAR_32.guid_info.guid[5]);
   FUNC_1(VAR_18, VAR_6, " guid6=0x",
        &VAR_32.guid_info.guid[6]);
   FUNC_1(VAR_18, VAR_6, " guid7=0x",
        &VAR_32.guid_info.guid[7]);

   if (FUNC_10(VAR_9, VAR_33, &VAR_32))
    VAR_16 = 1;
  }
  if (VAR_15 != VAR_14) {
   if (VAR_15)
    FUNC_17(VAR_9, VAR_15);
   VAR_15 = VAR_14;
  }
 }

 if (VAR_14)
  FUNC_17(VAR_9, VAR_15);






 if (VAR_16)
  VAR_9->subn.opt.no_clients_rereg = VAR_0;


 VAR_9->sa.dirty = VAR_0;

_error:
 FUNC_6(VAR_12);
 return VAR_13;
}
