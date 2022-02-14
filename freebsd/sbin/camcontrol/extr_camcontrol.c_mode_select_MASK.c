
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int u_int8_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct cam_device*) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 int FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int *,int,int *,int,int,int,int *,int,int,int ,int) ;
 int VAR_10 ;

void
FUNC_9(struct cam_device *VAR_11, int VAR_12, int VAR_13,
    int VAR_14, int VAR_15, int VAR_16, u_int8_t *VAR_17, int VAR_18)
{
 union ccb *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_4(VAR_11);

 if (VAR_19 == ((void*)0))
  FUNC_7(1, "mode_select: couldn't allocate CCB");

 FUNC_0(&VAR_19->csio);

 FUNC_8(&VAR_19->csio,
                  VAR_15,
                 ((void*)0),
                     VAR_14,
                        1,
                     VAR_13,
                    VAR_17,
                    VAR_18,
                           VAR_12,
                    VAR_8,
                  VAR_16 ? VAR_16 : 5000);

 if (VAR_9 & VAR_0)
  VAR_19->ccb_h.flags |= VAR_5;


 VAR_19->ccb_h.flags |= VAR_2;

 if (((VAR_20 = FUNC_5(VAR_11, VAR_19)) < 0)
  || ((VAR_19->ccb_h.status & VAR_7) != VAR_6)) {
  if (VAR_9 & VAR_1) {
   FUNC_2(VAR_11, VAR_19, VAR_4,
     VAR_3, VAR_10);
  }
  FUNC_3(VAR_19);
  FUNC_1(VAR_11);

  if (VAR_20 < 0)
   FUNC_6(1, "error sending mode select command");
  else
   FUNC_7(1, "error sending mode select command");

 }

 FUNC_3(VAR_19);
}
