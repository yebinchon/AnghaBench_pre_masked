
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {void* func_code; } ;
struct ccb_setasync {struct cam_sim* callback_arg; void* callback; void* event_enable; TYPE_2__ ccb_h; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
struct ahc_softc {int features; int flags; TYPE_1__* platform_data; int dev_softc; } ;
struct TYPE_3__ {int eh; struct cam_path* path_b; struct cam_sim* sim_b; struct cam_path* path; struct cam_sim* sim; int mtx; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,struct ahc_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct ahc_softc*,char*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*) ;
 struct cam_sim* FUNC_6 (int ,int ,char*,struct ahc_softc*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_7 (struct cam_sim*,int ) ;
 int FUNC_8 (struct cam_sim*) ;
 struct cam_devq* FUNC_9 (int ) ;
 int FUNC_10 (struct cam_devq*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int VAR_16 ;
 int FUNC_13 (union ccb*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct cam_sim*,int ,int) ;
 scalar_t__ FUNC_16 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_17 (TYPE_2__*,struct cam_path*,int) ;

int
FUNC_18(struct ahc_softc *VAR_17)
{
 char VAR_18[256];
 struct ccb_setasync VAR_19;
 struct cam_devq *VAR_20;
 int VAR_21;
 int VAR_22;
 struct cam_sim *VAR_23;
 struct cam_sim *VAR_24;
 struct cam_path *VAR_25;
 struct cam_path *VAR_26;
 int VAR_27;

 VAR_27 = 0;
 VAR_23 = ((void*)0);
 VAR_24 = ((void*)0);
 VAR_25 = ((void*)0);
 VAR_26 = ((void*)0);





 if (FUNC_4(VAR_17) != 0)
  goto fail;

 FUNC_1(VAR_17, VAR_18);
 FUNC_12("%s\n", VAR_18);
 FUNC_3(VAR_17);





 if ((VAR_17->features & VAR_3) != 0
  && (VAR_17->flags & VAR_2) != 0) {
  VAR_21 = 1;
  VAR_22 = 0;
 } else {
  VAR_21 = 0;
  VAR_22 = 1;
 }




 VAR_20 = FUNC_9(VAR_1);
 if (VAR_20 == ((void*)0))
  goto fail;




 VAR_23 = FUNC_6(VAR_12, VAR_14, "ahc", VAR_17,
       FUNC_11(VAR_17->dev_softc),
       &VAR_17->platform_data->mtx, 1, VAR_1, VAR_20);
 if (VAR_23 == ((void*)0)) {
  FUNC_10(VAR_20);
  goto fail;
 }

 if (FUNC_15(VAR_23, VAR_17->dev_softc, VAR_21) != VAR_6) {
  FUNC_7(VAR_23, VAR_10);
  VAR_23 = ((void*)0);
  goto fail;
 }

 if (FUNC_16(&VAR_25, ((void*)0),
       FUNC_8(VAR_23), VAR_7,
       VAR_4) != VAR_5) {
  FUNC_14(FUNC_8(VAR_23));
  FUNC_7(VAR_23, VAR_10);
  VAR_23 = ((void*)0);
  goto fail;
 }

 FUNC_17(&VAR_19.ccb_h, VAR_25, 5);
 VAR_19.ccb_h.func_code = VAR_11;
 VAR_19.event_enable = VAR_0;
 VAR_19.callback = VAR_13;
 VAR_19.callback_arg = VAR_23;
 FUNC_13((union ccb *)&VAR_19);
 VAR_27++;

 if (VAR_17->features & VAR_3) {
  VAR_24 = FUNC_6(VAR_12, VAR_14, "ahc",
        VAR_17, FUNC_11(VAR_17->dev_softc),
        &VAR_17->platform_data->mtx, 1,
        VAR_1, VAR_20);

  if (VAR_24 == ((void*)0)) {
   FUNC_12("ahc_attach: Unable to attach second "
          "bus due to resource shortage");
   goto fail;
  }

  if (FUNC_15(VAR_24, VAR_17->dev_softc, VAR_22) !=
      VAR_6) {
   FUNC_12("ahc_attach: Unable to attach second "
          "bus due to resource shortage");




   FUNC_7(VAR_24, VAR_8);
   goto fail;
  }

  if (FUNC_16(&VAR_26, ((void*)0),
        FUNC_8(VAR_24),
        VAR_7,
        VAR_4) != VAR_5) {
   FUNC_14(FUNC_8(VAR_24));
   FUNC_7(VAR_24, VAR_8);
   VAR_24 = ((void*)0);
   goto fail;
  }
  FUNC_17(&VAR_19.ccb_h, VAR_26, 5);
  VAR_19.ccb_h.func_code = VAR_11;
  VAR_19.event_enable = VAR_0;
  VAR_19.callback = VAR_13;
  VAR_19.callback_arg = VAR_24;
  FUNC_13((union ccb *)&VAR_19);
  VAR_27++;
 }

fail:
 if ((VAR_17->features & VAR_3) != 0
  && (VAR_17->flags & VAR_2) != 0) {
  VAR_17->platform_data->sim_b = VAR_23;
  VAR_17->platform_data->path_b = VAR_25;
  VAR_17->platform_data->sim = VAR_24;
  VAR_17->platform_data->path = VAR_26;
 } else {
  VAR_17->platform_data->sim = VAR_23;
  VAR_17->platform_data->path = VAR_25;
  VAR_17->platform_data->sim_b = VAR_24;
  VAR_17->platform_data->path_b = VAR_26;
 }
 FUNC_5(VAR_17);

 if (VAR_27 != 0) {

  VAR_17->platform_data->eh =
      FUNC_0(VAR_16, VAR_15,
       VAR_17, VAR_9);
  FUNC_2(VAR_17, VAR_10);
 }

 return (VAR_27);
}
