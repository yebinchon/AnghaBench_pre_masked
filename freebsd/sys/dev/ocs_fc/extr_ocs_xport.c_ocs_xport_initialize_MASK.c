
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int prop_buf ;
struct TYPE_24__ {int io_pending_recursing; int io_alloc_failed_count; int io_total_pending; int io_total_free; int io_pending_count; int io_active_count; int io_pending_list; int io_pending_lock; int vport_list; TYPE_3__* ocs; } ;
typedef TYPE_2__ ocs_xport_t ;
struct TYPE_23__ {scalar_t__ asic_type; } ;
struct TYPE_22__ {int watchdog_lock; TYPE_1__ sli; } ;
struct TYPE_25__ {scalar_t__ desc; int auto_xfer_rdy_size; scalar_t__ topology; scalar_t__ speed; scalar_t__ ethernet_license; scalar_t__ target_io_timer_sec; char const* fw_version; scalar_t__ num_vports; TYPE_15__ hw; int enable_tgt; scalar_t__ enable_ini; scalar_t__ config_tgt; int instance_index; scalar_t__ explicit_buffer_list; scalar_t__ esoc; scalar_t__ enable_hlm; } ;
typedef TYPE_3__ ocs_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int *,int ) ;
 int VAR_33 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_15__*,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_15__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_15__*,int ) ;
 int FUNC_5 (TYPE_15__*) ;
 scalar_t__ FUNC_6 (TYPE_15__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_34 ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int *,char*,int ) ;
 int FUNC_11 (TYPE_3__*,char*,...) ;
 int FUNC_12 (TYPE_3__*,char*,...) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (char*,int ,int ) ;
 int VAR_37 ;
 int FUNC_18 (TYPE_3__*,int ,int ,int ,scalar_t__,int ,int *,int *) ;
 int VAR_38 ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;

int32_t
FUNC_20(ocs_xport_t *VAR_39)
{
 ocs_t *VAR_40 = VAR_39->ocs;
 int32_t VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 uint32_t VAR_46;
 uint32_t VAR_47;
 uint8_t VAR_48 = 0;
 char VAR_49[32];


 uint8_t VAR_50 = VAR_0;
 uint8_t VAR_51 = VAR_0;
 uint8_t VAR_52 = VAR_0;

 FUNC_3(&VAR_40->hw, VAR_18, &VAR_43);
 if (FUNC_6(&VAR_40->hw, VAR_21, VAR_43) != VAR_25) {
  FUNC_12(VAR_40, "%s: Can't set number of IOs\n", VAR_40->desc);
  return -1;
 }

 FUNC_3(&VAR_40->hw, VAR_19, &VAR_44);
 VAR_44 -= VAR_28;

 if (VAR_40->enable_hlm) {
  FUNC_3(&VAR_40->hw, VAR_16, &VAR_45);
  if (!VAR_45) {
   VAR_40->enable_hlm = VAR_0;
   FUNC_12(VAR_40, "Cannot enable high login mode for this port\n");
  } else {
                        FUNC_11(VAR_40, "High login mode is enabled\n");
   if (FUNC_6(&VAR_40->hw, VAR_16, VAR_29)) {
    FUNC_12(VAR_40, "%s: Can't set high login mode\n", VAR_40->desc);
    return -1;
   }
  }
 }


 if (VAR_40->auto_xfer_rdy_size > 0 &&
     (VAR_40->auto_xfer_rdy_size < 2048 ||
      VAR_40->auto_xfer_rdy_size > 65536)) {
  FUNC_12(VAR_40, "Auto XFER_RDY size is out of range (2K-64K)\n");
  return -1;
 }

 FUNC_3(&VAR_40->hw, VAR_18, &VAR_43);

 if (VAR_40->auto_xfer_rdy_size > 0) {
  if (FUNC_19(VAR_39)) {
   FUNC_12(VAR_40, "%s: Failed auto xfer ready setup\n", VAR_40->desc);
   return -1;
  }
  if (VAR_40->esoc){
   FUNC_6(&VAR_40->hw, VAR_1, VAR_29);
  }
 }

 if (VAR_40->explicit_buffer_list) {

  FUNC_3(&VAR_40->hw, VAR_22, &VAR_42);
  if (VAR_42 == VAR_29) {
   FUNC_12(VAR_40, "Explicit Buffer List not supported on this device, not enabled\n");
  } else {
   FUNC_6(&VAR_40->hw, VAR_22, VAR_0);
  }
 }

 if (FUNC_6(&VAR_40->hw, VAR_26, VAR_40->topology) != VAR_25) {
  FUNC_12(VAR_40, "%s: Can't set the toplogy\n", VAR_40->desc);
  return -1;
 }
 FUNC_6(&VAR_40->hw, VAR_23, VAR_3);

 if (FUNC_6(&VAR_40->hw, VAR_17, VAR_40->speed) != VAR_25) {
  FUNC_12(VAR_40, "%s: Can't set the link speed\n", VAR_40->desc);
  return -1;
 }

 if (FUNC_6(&VAR_40->hw, VAR_14, VAR_40->ethernet_license) != VAR_25) {
  FUNC_12(VAR_40, "%s: Can't set the ethernet license\n", VAR_40->desc);
  return -1;
 }


 if (VAR_40->hw.sli.asic_type == VAR_27) {
  if (FUNC_6(&VAR_40->hw, VAR_12, VAR_2) != VAR_25) {
   FUNC_12(VAR_40, "%s: Can't set the DIF seed\n", VAR_40->desc);
   return -1;
  }
 }


 if (0 == FUNC_3(&VAR_40->hw, VAR_8, &VAR_47)) {
  if (VAR_47) {
   if (FUNC_1("dif_separate", VAR_49, sizeof(VAR_49)) == 0) {
    VAR_48 = FUNC_17(VAR_49, 0, 0);
   }

   if ((VAR_41 = FUNC_6(&VAR_40->hw, VAR_9,
         (VAR_48 == 0 ? VAR_10 : VAR_11)))) {
    FUNC_12(VAR_40, "Requested DIF MODE not supported\n");
   }
  }
 }

 if (VAR_40->target_io_timer_sec) {
  FUNC_11(VAR_40, "setting target io timer=%d\n", VAR_40->target_io_timer_sec);
  FUNC_6(&VAR_40->hw, VAR_13, VAR_29);
 }

 FUNC_2(&VAR_40->hw, VAR_4, VAR_33, VAR_40);
 FUNC_2(&VAR_40->hw, VAR_6, VAR_36, VAR_40);
 FUNC_2(&VAR_40->hw, VAR_7, VAR_37, VAR_40);
 FUNC_2(&VAR_40->hw, VAR_5, VAR_35, VAR_40);

 VAR_40->fw_version = (const char*) FUNC_4(&VAR_40->hw, VAR_15);


 FUNC_9(&VAR_39->vport_list, VAR_38, VAR_32);
 FUNC_10(VAR_40, &VAR_39->io_pending_lock, "io_pending_lock[%d]", VAR_40->instance_index);
 FUNC_9(&VAR_39->io_pending_list, VAR_34, VAR_31);
 FUNC_0(&VAR_39->io_active_count, 0);
 FUNC_0(&VAR_39->io_pending_count, 0);
 FUNC_0(&VAR_39->io_total_free, 0);
 FUNC_0(&VAR_39->io_total_pending, 0);
 FUNC_0(&VAR_39->io_alloc_failed_count, 0);
 FUNC_0(&VAR_39->io_pending_recursing, 0);
 FUNC_10(VAR_40, &VAR_40->hw.watchdog_lock, " Watchdog Lock[%d]", FUNC_8(VAR_40));
 VAR_41 = FUNC_5(&VAR_40->hw);
 if (VAR_41) {
  FUNC_12(VAR_40, "ocs_hw_init failure\n");
  goto ocs_xport_init_cleanup;
 } else {
  VAR_52 = VAR_29;
 }

 VAR_46 = VAR_43/2;
 if (FUNC_6(&VAR_40->hw, VAR_24, VAR_46) != VAR_25) {
  FUNC_12(VAR_40, "%s: Can't set the RQ process limit\n", VAR_40->desc);
 }

 if (VAR_40->config_tgt) {
  VAR_41 = FUNC_16(VAR_40);
  if (VAR_41) {
   FUNC_12(VAR_40, "failed to initialize target\n");
   goto ocs_xport_init_cleanup;
  } else {
   VAR_51 = VAR_29;
  }
 }

 if (VAR_40->enable_ini) {
  VAR_41 = FUNC_14(VAR_40);
  if (VAR_41) {
   FUNC_12(VAR_40, "failed to initialize initiator\n");
   goto ocs_xport_init_cleanup;
  } else {
   VAR_50 = VAR_29;
  }

 }


 if (VAR_40->num_vports != 0) {

  uint32_t VAR_53;
  FUNC_3(&VAR_40->hw, VAR_20, &VAR_53);

  if (VAR_40->num_vports < VAR_53) {
   FUNC_11(VAR_40, "Provisioning %d vports\n", VAR_40->num_vports);
   for (VAR_42 = 0; VAR_42 < VAR_40->num_vports; VAR_42++) {
    FUNC_18(VAR_40, 0, 0, VAR_30, VAR_40->enable_ini, VAR_40->enable_tgt, ((void*)0), ((void*)0));
   }
  } else {
   FUNC_12(VAR_40, "failed to create vports. num_vports range should be (1-%d) \n", VAR_53-1);
   goto ocs_xport_init_cleanup;
  }
 }

 return 0;

ocs_xport_init_cleanup:
 if (VAR_50) {
  FUNC_13(VAR_40);
 }

 if (VAR_51) {
  FUNC_15(VAR_40);
 }

 if (VAR_52) {

  FUNC_7(&VAR_40->hw);
 }

 return -1;
}
