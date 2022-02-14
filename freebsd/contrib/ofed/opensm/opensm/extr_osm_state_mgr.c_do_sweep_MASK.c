
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_28__ ;
typedef struct TYPE_44__ TYPE_24__ ;
typedef struct TYPE_43__ TYPE_21__ ;
typedef struct TYPE_42__ TYPE_1__ ;


struct TYPE_43__ {int cache_valid; } ;
struct TYPE_47__ {TYPE_24__* p_subn; int subnet_up_event; int p_log; TYPE_21__ ucast_mgr; int lid_mgr; scalar_t__ polling_sm_guid; int p_lock; scalar_t__ master_sm_found; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_42__ {scalar_t__ guid; } ;
struct TYPE_48__ {TYPE_1__ smi; } ;
typedef TYPE_4__ osm_remote_sm_t ;
typedef scalar_t__ ib_api_status_t ;
struct TYPE_46__ {scalar_t__ force_heavy_sweep; int fsync_high_avail_files; scalar_t__ sa_db_dump; int disable_multicast; scalar_t__ use_ucast_cache; } ;
struct TYPE_45__ {int stats; } ;
struct TYPE_44__ {scalar_t__ force_heavy_sweep; scalar_t__ subnet_initialization_error; scalar_t__ sm_state; int need_update; scalar_t__ force_reroute; int last_sm_port_state; TYPE_28__* p_osm; TYPE_2__ opt; int p_neighbor; int p_g2m; scalar_t__ first_time_master_sweep; scalar_t__ coming_out_of_standby; int sw_guid_tbl; scalar_t__ ignore_existing_lfts; void* min_sw_data_vls; void* min_data_vls; int min_ca_rate; int min_ca_mtu; scalar_t__ force_first_time_master_sweep; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_28__*) ;
 scalar_t__ FUNC_9 (TYPE_28__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_28__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (int ,int ,int ,char*) ;
 int FUNC_18 (TYPE_3__*,scalar_t__) ;
 int FUNC_19 (TYPE_28__*,int ,void*) ;
 int FUNC_20 (TYPE_28__*) ;
 int FUNC_21 (TYPE_28__*) ;
 int FUNC_22 (TYPE_28__*) ;
 int FUNC_23 (TYPE_28__*) ;
 int FUNC_24 (TYPE_28__*) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*,int ) ;
 int FUNC_27 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_28 (TYPE_24__*) ;
 int FUNC_29 (TYPE_21__*) ;
 scalar_t__ FUNC_30 (TYPE_21__*) ;
 scalar_t__ FUNC_31 (TYPE_21__*) ;
 int FUNC_32 (TYPE_3__*) ;
 int FUNC_33 (TYPE_3__*) ;
 TYPE_4__* FUNC_34 (TYPE_3__*) ;
 TYPE_4__* FUNC_35 (TYPE_3__*) ;
 scalar_t__ FUNC_36 (TYPE_3__*) ;
 scalar_t__ FUNC_37 (TYPE_3__*) ;
 int FUNC_38 (TYPE_3__*) ;
 int FUNC_39 (TYPE_3__*) ;
 int FUNC_40 (TYPE_3__*) ;
 int FUNC_41 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_42 (TYPE_3__*) ;
 scalar_t__ FUNC_43 (TYPE_3__*) ;
 int FUNC_44 (TYPE_3__*) ;
 scalar_t__ FUNC_45 (int *) ;

__attribute__((used)) static void FUNC_46(osm_sm_t * VAR_31)
{
 ib_api_status_t VAR_32;
 osm_remote_sm_t *VAR_33;
 unsigned VAR_34 = 0;

 if (VAR_31->p_subn->force_first_time_master_sweep) {
  VAR_31->p_subn->force_heavy_sweep = VAR_27;
  VAR_31->p_subn->coming_out_of_standby = VAR_27;
  VAR_31->p_subn->first_time_master_sweep = VAR_27;
  VAR_31->p_subn->force_first_time_master_sweep = VAR_0;
 }


 if (VAR_31->p_subn->subnet_initialization_error)
  VAR_31->p_subn->force_heavy_sweep = VAR_27;

 if (VAR_31->p_subn->force_heavy_sweep) {
  if (FUNC_28(VAR_31->p_subn) < 0)
   FUNC_2(VAR_31->p_log, VAR_17, "ERR 331A: "
    "osm_subn_rescan_conf_file failed\n");
  else
   VAR_34 = 1;
 }

 if (VAR_31->p_subn->sm_state != VAR_9 &&
     VAR_31->p_subn->sm_state != VAR_8)
  return;

 if (VAR_31->p_subn->coming_out_of_standby) {





  FUNC_33(VAR_31);





  FUNC_40(VAR_31);





  VAR_31->p_subn->need_update = 1;
 }

 VAR_31->master_sm_found = 0;
 if (FUNC_7(&VAR_31->p_subn->sw_guid_tbl)
     && VAR_31->p_subn->sm_state != VAR_8
     && VAR_31->p_subn->opt.force_heavy_sweep == VAR_0
     && VAR_31->p_subn->force_heavy_sweep == VAR_0
     && VAR_31->p_subn->force_reroute == VAR_0
     && VAR_31->p_subn->subnet_initialization_error == VAR_0
     && (FUNC_37(VAR_31) == VAR_10)) {
  if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
   return;
  if (!VAR_31->p_subn->force_heavy_sweep) {
   if (VAR_31->p_subn->opt.sa_db_dump &&
       !FUNC_23(VAR_31->p_subn->p_osm))
    FUNC_19(VAR_31->p_subn->p_osm,
       VAR_13,
       ((void*)0));
   FUNC_4(VAR_31->p_log, VAR_19,
     "LIGHT SWEEP COMPLETE");
   return;
  }
 }





 if (VAR_31->p_subn->opt.use_ucast_cache &&
     (VAR_31->p_subn->force_reroute || VAR_31->p_subn->coming_out_of_standby))
  FUNC_29(&VAR_31->ucast_mgr);





 if (FUNC_7(&VAR_31->p_subn->sw_guid_tbl)
     && VAR_31->p_subn->sm_state != VAR_8
     && VAR_31->p_subn->opt.force_heavy_sweep == VAR_0
     && VAR_31->p_subn->force_heavy_sweep == VAR_0
     && VAR_31->p_subn->force_reroute == VAR_27
     && VAR_31->p_subn->subnet_initialization_error == VAR_0) {

  VAR_31->p_subn->force_reroute = VAR_0;


  VAR_31->p_subn->ignore_existing_lfts = VAR_27;

  if (FUNC_31(&VAR_31->ucast_mgr)) {
   FUNC_4(VAR_31->p_log, VAR_19,
     "REROUTE FAILED");
   return;
  }
  FUNC_21(VAR_31->p_subn->p_osm);


  VAR_31->p_subn->ignore_existing_lfts = VAR_0;

  if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
   return;

  FUNC_8(VAR_31->p_subn->p_osm);

  if (FUNC_9(VAR_31->p_subn->p_osm))
   return;

  if (!VAR_31->p_subn->subnet_initialization_error) {
   FUNC_4(VAR_31->p_log, VAR_19,
     "REROUTE COMPLETE");
   FUNC_19(VAR_31->p_subn->p_osm,
      VAR_16,
      (void *) VAR_29);
   return;
  }
 }

 FUNC_19(VAR_31->p_subn->p_osm,
    VAR_12, ((void*)0));


repeat_discovery:


 VAR_31->p_subn->force_heavy_sweep = VAR_0;
 VAR_31->p_subn->force_reroute = VAR_0;
 VAR_31->p_subn->subnet_initialization_error = VAR_0;



 VAR_31->p_subn->min_ca_mtu = VAR_5;
 VAR_31->p_subn->min_ca_rate = VAR_7;
 VAR_31->p_subn->min_data_vls = VAR_6 - 1;
 VAR_31->p_subn->min_sw_data_vls = VAR_6 - 1;


 if (!VAR_34 && FUNC_28(VAR_31->p_subn) < 0)
  FUNC_2(VAR_31->p_log, VAR_17, "ERR 331A: "
   "osm_subn_rescan_conf_file failed\n");

 if (VAR_31->p_subn->sm_state != VAR_9)
  VAR_31->p_subn->need_update = 1;

 VAR_32 = FUNC_42(VAR_31);
 if (VAR_32 != VAR_10 ||
     FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 if (FUNC_36(VAR_31) == VAR_27) {
  if (VAR_31->p_subn->last_sm_port_state) {
   VAR_31->p_subn->last_sm_port_state = 0;
   FUNC_40(VAR_31);
   FUNC_17(VAR_31->p_log, VAR_18, VAR_1,
       "SM port is down\n");
   FUNC_4(VAR_31->p_log, VAR_19,
     "SM PORT DOWN");
  }


  FUNC_11(VAR_31);


  if (VAR_31->p_subn->sm_state != VAR_8)
   FUNC_27(VAR_31, VAR_21);
  FUNC_19(VAR_31->p_subn->p_osm,
     VAR_14, ((void*)0));
  return;
 } else {
  if (!VAR_31->p_subn->last_sm_port_state) {
   VAR_31->p_subn->last_sm_port_state = 1;
   FUNC_17(VAR_31->p_log, VAR_18, VAR_1,
       "SM port is up\n");
   FUNC_4(VAR_31->p_log, VAR_19,
     "SM PORT UP");
  }
 }

 VAR_32 = FUNC_43(VAR_31);
 if (VAR_32 != VAR_10 ||
     FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;


 if (VAR_31->master_sm_found) {




  FUNC_27(VAR_31,
      VAR_24);
  FUNC_4(VAR_31->p_log, VAR_19,
    "ENTERING STANDBY STATE");

  FUNC_25(VAR_31, 0);
  FUNC_19(VAR_31->p_subn->p_osm,
     VAR_14, ((void*)0));
  return;
 }


 if (VAR_31->p_subn->force_heavy_sweep) {
  VAR_34 = 0;
  goto repeat_discovery;
 }

 FUNC_19(VAR_31->p_subn->p_osm,
    VAR_11, ((void*)0));

 FUNC_4(VAR_31->p_log, VAR_19, "HEAVY SWEEP COMPLETE");

 FUNC_11(VAR_31);




 if (VAR_31->p_subn->sm_state == VAR_9) {
  VAR_33 = FUNC_35(VAR_31);
  if (VAR_33 != ((void*)0)) {

   FUNC_39(VAR_31);



   FUNC_41(VAR_31, VAR_33);
   FUNC_27(VAR_31,
       VAR_23);
   return;
  } else {


   VAR_33 = FUNC_34(VAR_31);
   if (VAR_33 != ((void*)0)) {




    FUNC_0(VAR_31->p_lock);
    VAR_31->polling_sm_guid = VAR_33->smi.guid;
    FUNC_1(VAR_31->p_lock);
    FUNC_27(VAR_31,
        VAR_26);
    return;
   } else if (VAR_31->polling_sm_guid) {

    FUNC_27(VAR_31,
        VAR_25);
    return;
   }
  }
 }






 if (VAR_31->p_subn->sm_state == VAR_8)
  FUNC_27(VAR_31, VAR_22);

 FUNC_22(VAR_31->p_subn->p_osm);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 FUNC_20(VAR_31->p_subn->p_osm);




 FUNC_24(VAR_31->p_subn->p_osm);

 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 FUNC_4(VAR_31->p_log, VAR_19,
   "PKEY setup completed - STARTING SM LID CONFIG");

 FUNC_14(&VAR_31->lid_mgr);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 FUNC_4(VAR_31->p_log, VAR_19,
   "SM LID ASSIGNMENT COMPLETE - STARTING SUBNET LID CONFIG");
 FUNC_38(VAR_31);

 FUNC_15(&VAR_31->lid_mgr);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;





 FUNC_32(VAR_31);

 FUNC_4(VAR_31->p_log, VAR_19,
   "LID ASSIGNMENT COMPLETE - STARTING SWITCH TABLE CONFIG");






 if (!VAR_31->ucast_mgr.cache_valid ||
     FUNC_30(&VAR_31->ucast_mgr)) {
  if (FUNC_31(&VAR_31->ucast_mgr)) {
   FUNC_29(&VAR_31->ucast_mgr);
   return;
  }
 }

 FUNC_21(VAR_31->p_subn->p_osm);

 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;




 VAR_31->p_subn->ignore_existing_lfts = VAR_0;

 FUNC_4(VAR_31->p_log, VAR_19,
   "SWITCHES CONFIGURED FOR UNICAST");
 FUNC_19(VAR_31->p_subn->p_osm,
    VAR_16,
    (void *) VAR_28);

 if (!VAR_31->p_subn->opt.disable_multicast) {
  FUNC_18(VAR_31, VAR_27);
  if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
   return;
  FUNC_4(VAR_31->p_log, VAR_19,
    "SWITCHES CONFIGURED FOR MULTICAST");
 }

 FUNC_13(VAR_31);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;
 FUNC_4(VAR_31->p_log, VAR_19, "ALIAS GUIDS CONFIGURED");
 FUNC_16(VAR_31, VAR_4);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 FUNC_4(VAR_31->p_log, VAR_19,
   "LINKS PORTS CONFIGURED - SET LINKS TO ARMED STATE");

 FUNC_16(VAR_31, VAR_3);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;

 FUNC_4(VAR_31->p_log, VAR_19,
   "LINKS ARMED - SET LINKS TO ACTIVE STATE");

 FUNC_16(VAR_31, VAR_2);
 if (FUNC_45(&VAR_31->p_subn->p_osm->stats))
  return;







 FUNC_8(VAR_31->p_subn->p_osm);

 if (FUNC_9(VAR_31->p_subn->p_osm))
  return;




 FUNC_39(VAR_31);


 FUNC_6(&VAR_31->p_subn->sw_guid_tbl, VAR_30,
      VAR_31->p_log);


 VAR_31->p_subn->coming_out_of_standby = VAR_0;
 VAR_31->p_subn->first_time_master_sweep = VAR_0;


 if (VAR_31->p_subn->subnet_initialization_error == VAR_27) {
  FUNC_17(VAR_31->p_log, VAR_18, VAR_1,
      "Errors during initialization\n");
  FUNC_4(VAR_31->p_log, VAR_17,
    "ERRORS DURING INITIALIZATION");
 } else {
  VAR_31->p_subn->need_update = 0;
  FUNC_12(VAR_31->p_subn->p_osm);
  FUNC_44(VAR_31);

  if ((FUNC_3(VAR_31->p_log, VAR_19) ||
      VAR_31->p_subn->opt.sa_db_dump) &&
      !FUNC_23(VAR_31->p_subn->p_osm))
   FUNC_19(VAR_31->p_subn->p_osm,
      VAR_13,
      ((void*)0));
 }




 FUNC_5(&VAR_31->subnet_up_event);



 if (VAR_31->p_subn->force_heavy_sweep)
  FUNC_26(VAR_31, VAR_20);


 FUNC_10(VAR_31->p_subn->p_g2m, VAR_31->p_subn->opt.fsync_high_avail_files);
 FUNC_10(VAR_31->p_subn->p_neighbor,
       VAR_31->p_subn->opt.fsync_high_avail_files);

 FUNC_19(VAR_31->p_subn->p_osm, VAR_15,
    ((void*)0));
}
