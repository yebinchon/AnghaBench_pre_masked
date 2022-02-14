
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct cd_softc {int flags; int quirks; int disk; } ;
struct cam_periph {scalar_t__ softc; } ;


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
 int FUNC_0 (union ccb*,int ,int ) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (union ccb*,int*,int*,int*,int*) ;
 struct cam_periph* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(union ccb *VAR_11, u_int32_t VAR_12, u_int32_t VAR_13)
{
 struct cd_softc *VAR_14;
 struct cam_periph *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_15 = FUNC_5(VAR_11->ccb_h.path);
 VAR_14 = (struct cd_softc *)VAR_15->softc;

 VAR_16 = 0;






 if ((VAR_11->ccb_h.status & VAR_1) == VAR_0) {
  VAR_16 = FUNC_1(VAR_11);
 } else if (FUNC_4(VAR_11,
     &VAR_17, &VAR_18, &VAR_19, &VAR_20)) {
  if (VAR_18 == VAR_8)
   VAR_16 = FUNC_1(VAR_11);
  else if (VAR_18 == VAR_10 &&
      VAR_19 == 0x28 && VAR_20 == 0x00)
   FUNC_2(VAR_14->disk, VAR_5);
  else if (VAR_18 == VAR_9 &&
      VAR_19 == 0x3a && (VAR_14->flags & VAR_2)) {
   VAR_14->flags &= ~VAR_2;
   FUNC_3(VAR_14->disk, VAR_5);
  }
 }

 if (VAR_16 == VAR_4)
  return (VAR_16);






 VAR_13 |= VAR_7;

 if (VAR_14->quirks & VAR_3)
  VAR_13 |= VAR_6;
 return (FUNC_0(VAR_11, VAR_12, VAR_13));
}
