
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; int timeout; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
struct mvs_channel {int r_mem; scalar_t__ pm_present; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,union ccb*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_12, union ccb *VAR_13)
{
 struct mvs_channel *VAR_14 = FUNC_2(VAR_12);
 int VAR_15 = VAR_13->ccb_h.target_id & 0x0f;
 int VAR_16, VAR_17;
 uint8_t VAR_18;

 FUNC_4(VAR_12, VAR_9);
 FUNC_0(VAR_14->r_mem, VAR_10, VAR_15 << VAR_11);
 FUNC_0(VAR_14->r_mem, VAR_1, VAR_0);
 FUNC_1(10000);
 FUNC_0(VAR_14->r_mem, VAR_1, 0);
 VAR_13->ccb_h.status &= ~VAR_8;

 if ((VAR_16 = FUNC_6(VAR_12, 0, VAR_2, VAR_13->ccb_h.timeout)) < 0) {
  VAR_13->ccb_h.status |= VAR_6;
  VAR_17 = 1;
 } else {
  VAR_18 = FUNC_3(VAR_12, 0);
  if (VAR_18 & VAR_4)
   VAR_13->ccb_h.status |= VAR_5;
  else
   VAR_13->ccb_h.status |= VAR_7;
  if (VAR_18 & VAR_3)
   VAR_17 = 1;
  else
   VAR_17 = 0;
 }
 FUNC_5(VAR_12, VAR_13);





 if (VAR_17 && VAR_14->pm_present && VAR_15 != 15) {
  FUNC_0(VAR_14->r_mem, VAR_10,
      15 << VAR_11);
  FUNC_0(VAR_14->r_mem, VAR_1, VAR_0);
  FUNC_1(10000);
  FUNC_0(VAR_14->r_mem, VAR_1, 0);
  FUNC_6(VAR_12, 0, VAR_2 | VAR_3, VAR_13->ccb_h.timeout);
 }

 FUNC_7(VAR_13);
}
