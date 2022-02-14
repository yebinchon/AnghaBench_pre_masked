
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; int flags; } ;
struct ccb_dev_advinfo {int bufsiz; int * buf; int buftype; int flags; TYPE_1__ ccb_h; } ;
union ccb {struct ccb_dev_advinfo cdai; } ;
typedef int uint8_t ;
struct mmc_params {char* model; int card_features; } ;
struct device_match_result {int target_lun; int target_id; int path_id; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cam_device*) ;
 int VAR_6 ;
 int FUNC_1 (union ccb*) ;
 union ccb* FUNC_2 (struct cam_device*) ;
 struct cam_device* FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct cam_device*,union ccb*) ;
 int FUNC_5 (char*,char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct device_match_result *VAR_7, char *VAR_8)
{
 union ccb *VAR_9;
 struct ccb_dev_advinfo *VAR_10;
 struct cam_device *VAR_11;
 struct mmc_params VAR_12;

 VAR_11 = FUNC_3(VAR_7->path_id, VAR_7->target_id,
     VAR_7->target_lun, VAR_4, ((void*)0));
 if (VAR_11 == ((void*)0)) {
  FUNC_8("%s", VAR_6);
  return (1);
 }

 VAR_9 = FUNC_2(VAR_11);
 if (VAR_9 == ((void*)0)) {
  FUNC_8("couldn't allocate CCB");
  FUNC_0(VAR_11);
  return (1);
 }

 VAR_10 = &VAR_9->cdai;
 VAR_10->ccb_h.flags = VAR_0;
 VAR_10->ccb_h.func_code = VAR_5;
 VAR_10->flags = VAR_2;
 VAR_10->buftype = VAR_3;
 VAR_10->bufsiz = sizeof(struct mmc_params);
 VAR_10->buf = (uint8_t *)&VAR_12;

 if (FUNC_4(VAR_11, VAR_9) < 0) {
  FUNC_7("error sending XPT_DEV_ADVINFO CCB");
  FUNC_1(VAR_9);
  FUNC_0(VAR_11);
  return (1);
 }

 if (FUNC_6(VAR_12.model) > 0) {
  FUNC_5(VAR_8, "<%s>", VAR_12.model);
 } else {
  FUNC_5(VAR_8, "<%s card>",
      VAR_12.card_features &
      VAR_1 ? "SDIO" : "unknown");
 }

 FUNC_1(VAR_9);
 FUNC_0(VAR_11);
 return (0);
}
