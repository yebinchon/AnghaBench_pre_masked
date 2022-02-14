
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_1 (union ccb*) ;
 union ccb* FUNC_2 (struct cam_device*) ;
 scalar_t__ FUNC_3 (struct cam_device*,union ccb*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int,int *,int,int,int,int ,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct cam_device *VAR_14, int VAR_15, int VAR_16,
   int VAR_17, int VAR_18, int VAR_19)
{
 union ccb *VAR_20;
 int VAR_21 = 0;

 VAR_20 = FUNC_2(VAR_14);
 if ((VAR_15 == 0)
  && (VAR_17 == VAR_9))
  VAR_17 = VAR_8;

 FUNC_5(&VAR_20->csio,
                 VAR_18,
                ((void*)0),
                    VAR_17,
                    VAR_15,
                    VAR_16,
                   0,
                   VAR_10,
                 VAR_19 ? VAR_19 : 120000);


 VAR_20->ccb_h.flags |= VAR_2;

 if (VAR_11 & VAR_0)
  VAR_20->ccb_h.flags |= VAR_5;

 if (FUNC_3(VAR_14, VAR_20) < 0) {
  FUNC_6("error sending START STOP UNIT command");
  FUNC_1(VAR_20);
  return (1);
 }

 if ((VAR_20->ccb_h.status & VAR_7) == VAR_6)
  if (VAR_15) {
   FUNC_4(VAR_13, "Unit started successfully");
   if (VAR_16)
    FUNC_4(VAR_13,", Media loaded\n");
   else
    FUNC_4(VAR_13,"\n");
  } else {
   FUNC_4(VAR_13, "Unit stopped successfully");
   if (VAR_16)
    FUNC_4(VAR_13, ", Media ejected\n");
   else
    FUNC_4(VAR_13, "\n");
  }
 else {
  VAR_21 = 1;
  if (VAR_15)
   FUNC_4(VAR_13,
    "Error received from start unit command\n");
  else
   FUNC_4(VAR_13,
    "Error received from stop unit command\n");

  if (VAR_11 & VAR_1) {
   FUNC_0(VAR_14, VAR_20, VAR_4,
     VAR_3, VAR_12);
  }
 }

 FUNC_1(VAR_20);

 return (VAR_21);
}
