
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct isp_spi {int * atused; int * atpool; int atfree; int * ntpool; int ntfree; int waitq; struct cam_path* path; struct cam_sim* sim; } ;
struct isp_fc {int ready; int num_threads; int inject_lost_data_frame; int gone_device_time; int loop_down_limit; struct cam_sim* sim; struct cam_path* path; int kproc; int * atused; int * atpool; int atfree; int * ntpool; int ntfree; int waitq; int gtask; int gdt; TYPE_2__* isp; } ;
struct TYPE_19__ {int func_code; } ;
struct ccb_setasync {struct cam_sim* callback_arg; int callback; int event_enable; TYPE_4__ ccb_h; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
typedef int name ;
struct TYPE_16__ {int dev; } ;
struct TYPE_17__ {TYPE_1__ isp_osinfo; int isp_lock; int isp_dev; int isp_maxcmds; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_18__ {int isp_use_gft_id; int isp_use_gff_id; int isp_topo; int isp_loopstate; int isp_fwstate; int isp_linkstate; int isp_gbspeed; int isp_wwpn; int isp_wwnn; } ;
typedef TYPE_3__ fcparam ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 struct isp_fc* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 struct isp_spi* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_15 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid* FUNC_11 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_12 (struct sysctl_ctx_list*,int ,int ,char*,int,TYPE_2__*,int,int ,char*,char*) ;
 int FUNC_13 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_14 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_15 (struct sysctl_oid*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int,int ,struct isp_fc*) ;
 int VAR_16 ;
 int FUNC_18 (int *,int *,int ) ;
 struct cam_sim* FUNC_19 (int ,int ,char*,TYPE_2__*,int ,int *,int ,int ,struct cam_devq*) ;
 int FUNC_20 (struct cam_sim*,int ) ;
 int FUNC_21 (struct cam_sim*) ;
 int FUNC_22 (int ) ;
 struct sysctl_ctx_list* FUNC_23 (int ) ;
 struct sysctl_oid* FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_26 (TYPE_2__*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_27 (int ,struct isp_fc*,int *,int ,int ,char*,int ,int) ;
 int VAR_23 ;
 int FUNC_28 (char*,int,char*,int) ;
 int FUNC_29 (union ccb*) ;
 int FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (struct cam_sim*,int ,int) ;
 scalar_t__ FUNC_32 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_33 (struct cam_path*) ;
 int FUNC_34 (TYPE_4__*,struct cam_path*,int) ;

__attribute__((used)) static int
FUNC_35(ispsoftc_t *VAR_24, struct cam_devq *VAR_25, int VAR_26)
{
 struct ccb_setasync VAR_27;
 struct cam_sim *VAR_28;
 struct cam_path *VAR_29;




 VAR_28 = FUNC_19(VAR_17, VAR_21, "isp", VAR_24,
     FUNC_25(VAR_24->isp_dev), &VAR_24->isp_lock,
     VAR_24->isp_maxcmds, VAR_24->isp_maxcmds, VAR_25);
 if (VAR_28 == ((void*)0))
  return (VAR_12);

 FUNC_2(VAR_24);
 if (FUNC_31(VAR_28, VAR_24->isp_dev, VAR_26) != VAR_5) {
  FUNC_4(VAR_24);
  FUNC_20(VAR_28, VAR_14);
  return (VAR_11);
 }
 FUNC_4(VAR_24);
 if (FUNC_32(&VAR_29, ((void*)0), FUNC_21(VAR_28), VAR_6, VAR_3) != VAR_4) {
  FUNC_2(VAR_24);
  FUNC_30(FUNC_21(VAR_28));
  FUNC_4(VAR_24);
  FUNC_20(VAR_28, VAR_14);
  return (VAR_13);
 }
 FUNC_34(&VAR_27.ccb_h, VAR_29, 5);
 VAR_27.ccb_h.func_code = VAR_16;
 VAR_27.event_enable = VAR_0;
 VAR_27.callback = VAR_18;
 VAR_27.callback_arg = VAR_28;

 FUNC_2(VAR_24);
 FUNC_29((union ccb *)&VAR_27);
 FUNC_4(VAR_24);

 if (FUNC_5(VAR_24)) {
  struct isp_spi *VAR_30 = FUNC_3(VAR_24, VAR_26);
  VAR_30->sim = VAR_28;
  VAR_30->path = VAR_29;
 } else {
  fcparam *VAR_31 = FUNC_0(VAR_24, VAR_26);
  struct isp_fc *VAR_32 = FUNC_1(VAR_24, VAR_26);
  struct sysctl_ctx_list *VAR_33 = FUNC_23(VAR_24->isp_osinfo.dev);
  struct sysctl_oid *VAR_34 = FUNC_24(VAR_24->isp_osinfo.dev);
  char VAR_35[16];

  FUNC_2(VAR_24);
  VAR_32->sim = VAR_28;
  VAR_32->path = VAR_29;
  VAR_32->isp = VAR_24;
  VAR_32->ready = 1;
  VAR_31->isp_use_gft_id = 1;
  VAR_31->isp_use_gff_id = 1;

  FUNC_18(&VAR_32->gdt, &VAR_24->isp_lock, 0);
  FUNC_17(&VAR_32->gtask, 1, VAR_19, VAR_32);
  FUNC_26(VAR_24, VAR_26);
  FUNC_4(VAR_24);
  if (FUNC_27(VAR_20, VAR_32, &VAR_32->kproc, 0, 0,
      "%s_%d", FUNC_22(VAR_24->isp_osinfo.dev), VAR_26)) {
   FUNC_33(VAR_32->path);
   FUNC_2(VAR_24);
   FUNC_30(FUNC_21(VAR_32->sim));
   FUNC_4(VAR_24);
   FUNC_20(VAR_32->sim, VAR_14);
   return (VAR_12);
  }
  VAR_32->num_threads += 1;
  if (VAR_26 > 0) {
   FUNC_28(VAR_35, sizeof(VAR_35), "chan%d", VAR_26);
   VAR_34 = FUNC_11(VAR_33, FUNC_15(VAR_34),
       VAR_15, VAR_35, VAR_8, 0, "Virtual channel");
  }
  FUNC_13(VAR_33, FUNC_15(VAR_34), VAR_15,
      "wwnn", VAR_7, &VAR_31->isp_wwnn,
      "World Wide Node Name");
  FUNC_13(VAR_33, FUNC_15(VAR_34), VAR_15,
      "wwpn", VAR_7, &VAR_31->isp_wwpn,
      "World Wide Port Name");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "loop_down_limit", VAR_8, &VAR_32->loop_down_limit, 0,
      "Loop Down Limit");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "gone_device_time", VAR_8, &VAR_32->gone_device_time, 0,
      "Gone Device Time");





  FUNC_12(VAR_33, FUNC_15(VAR_34), VAR_15,
      "role", VAR_10 | VAR_8, VAR_24, VAR_26,
      VAR_22, "I", "Current role");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "speed", VAR_7, &VAR_31->isp_gbspeed, 0,
      "Connection speed in gigabits");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "linkstate", VAR_7, &VAR_31->isp_linkstate, 0,
      "Link state");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "fwstate", VAR_7, &VAR_31->isp_fwstate, 0,
      "Firmware state");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "loopstate", VAR_7, &VAR_31->isp_loopstate, 0,
      "Loop state");
  FUNC_14(VAR_33, FUNC_15(VAR_34), VAR_15,
      "topo", VAR_7, &VAR_31->isp_topo, 0,
      "Connection topology");
  FUNC_10(VAR_33, FUNC_15(VAR_34), VAR_15,
      "use_gft_id", VAR_9, &VAR_31->isp_use_gft_id, 0,
      "Use GFT_ID during fabric scan");
  FUNC_10(VAR_33, FUNC_15(VAR_34), VAR_15,
      "use_gff_id", VAR_9, &VAR_31->isp_use_gff_id, 0,
      "Use GFF_ID during fabric scan");
 }
 return (0);
}
