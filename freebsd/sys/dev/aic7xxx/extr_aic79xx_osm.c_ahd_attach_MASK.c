
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int func_code; } ;
struct ccb_setasync {struct cam_sim* callback_arg; int callback; int event_enable; TYPE_2__ ccb_h; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
struct ahd_softc {TYPE_1__* platform_data; int dev_softc; } ;
struct TYPE_3__ {int eh; struct cam_path* path; struct cam_sim* sim; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct ahd_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ahd_softc*,char*) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*) ;
 struct cam_sim* FUNC_6 (int ,int ,char*,struct ahd_softc*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_7 (struct cam_sim*,int ) ;
 int FUNC_8 (struct cam_sim*) ;
 struct cam_devq* FUNC_9 (int ) ;
 int FUNC_10 (struct cam_devq*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 int VAR_13 ;
 int FUNC_13 (union ccb*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct cam_sim*,int ,int ) ;
 scalar_t__ FUNC_16 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_17 (TYPE_2__*,struct cam_path*,int) ;

int
FUNC_18(struct ahd_softc *VAR_14)
{
 char VAR_15[256];
 struct ccb_setasync VAR_16;
 struct cam_devq *VAR_17;
 struct cam_sim *VAR_18;
 struct cam_path *VAR_19;
 int VAR_20;

 VAR_20 = 0;
 VAR_17 = ((void*)0);
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);




 if (FUNC_4(VAR_14) != 0)
  goto fail;

 FUNC_1(VAR_14, VAR_15);
 FUNC_12("%s\n", VAR_15);
 FUNC_3(VAR_14);




 VAR_17 = FUNC_9(VAR_1);
 if (VAR_17 == ((void*)0))
  goto fail;




 VAR_18 = FUNC_6(VAR_9, VAR_11, "ahd", VAR_14,
       FUNC_11(VAR_14->dev_softc),
       &VAR_14->platform_data->mtx, 1, 256, VAR_17);
 if (VAR_18 == ((void*)0)) {
  FUNC_10(VAR_17);
  goto fail;
 }

 if (FUNC_15(VAR_18, VAR_14->dev_softc, 0) != VAR_4) {
  FUNC_7(VAR_18, VAR_7);
  VAR_18 = ((void*)0);
  goto fail;
 }

 if (FUNC_16(&VAR_19, ((void*)0),
       FUNC_8(VAR_18), VAR_5,
       VAR_2) != VAR_3) {
  FUNC_14(FUNC_8(VAR_18));
  FUNC_7(VAR_18, VAR_7);
  VAR_18 = ((void*)0);
  goto fail;
 }

 FUNC_17(&VAR_16.ccb_h, VAR_19, 5);
 VAR_16.ccb_h.func_code = VAR_8;
 VAR_16.event_enable = VAR_0;
 VAR_16.callback = VAR_10;
 VAR_16.callback_arg = VAR_18;
 FUNC_13((union ccb *)&VAR_16);
 VAR_20++;

fail:
 VAR_14->platform_data->sim = VAR_18;
 VAR_14->platform_data->path = VAR_19;
 FUNC_5(VAR_14);
 if (VAR_20 != 0) {

  VAR_14->platform_data->eh =
      FUNC_0(VAR_13, VAR_12,
       VAR_14, VAR_6);
  FUNC_2(VAR_14, VAR_7);
 }


 return (VAR_20);
}
