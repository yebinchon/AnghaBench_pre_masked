
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int status; int func_code; } ;
union ccb {TYPE_2__ cts; TYPE_1__ ccb_h; } ;
struct ccb_trans_settings {int dummy; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,struct ccb_trans_settings*,int) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (struct cam_device*,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct cam_device *VAR_10, int VAR_11, int VAR_12,
       struct ccb_trans_settings *VAR_13)
{
 int VAR_14;
 union ccb *VAR_15;

 VAR_14 = 0;
 VAR_15 = FUNC_4(VAR_10);

 if (VAR_15 == ((void*)0)) {
  FUNC_8("get_print_cts: error allocating ccb");
  return (1);
 }

 FUNC_0(&VAR_15->cts);

 VAR_15->ccb_h.func_code = VAR_7;

 if (VAR_11 == 0)
  VAR_15->cts.type = VAR_5;
 else
  VAR_15->cts.type = VAR_6;

 if (FUNC_5(VAR_10, VAR_15) < 0) {
  FUNC_7("error sending XPT_GET_TRAN_SETTINGS CCB");
  VAR_14 = 1;
  goto get_print_cts_bailout;
 }

 if ((VAR_15->ccb_h.status & VAR_4) != VAR_3) {
  FUNC_8("XPT_GET_TRANS_SETTINGS CCB failed");
  if (VAR_8 & VAR_0)
   FUNC_2(VAR_10, VAR_15, VAR_2,
     VAR_1, VAR_9);
  VAR_14 = 1;
  goto get_print_cts_bailout;
 }

 if (VAR_12 == 0)
  FUNC_6(VAR_10, &VAR_15->cts);

 if (VAR_13 != ((void*)0))
  FUNC_1(&VAR_15->cts, VAR_13, sizeof(struct ccb_trans_settings));

get_print_cts_bailout:

 FUNC_3(VAR_15);

 return (VAR_14);
}
