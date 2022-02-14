
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {int curr_mode; int fbs_enabled; int quirks; int r_mem; scalar_t__ pm_present; scalar_t__ fake_busy; } ;
typedef enum mvs_edma_mode { ____Placeholder_mvs_edma_mode } mvs_edma_mode ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ) ;
 struct mvs_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_30, enum mvs_edma_mode VAR_31)
{
 struct mvs_channel *VAR_32 = FUNC_5(VAR_30);
 int VAR_33;
 uint32_t VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

 if (VAR_31 == VAR_32->curr_mode)
  return;

 if (VAR_32->curr_mode != VAR_20) {
  FUNC_1(VAR_32->r_mem, VAR_13, VAR_14);
  VAR_33 = 0;
  while (FUNC_0(VAR_32->r_mem, VAR_13) & VAR_15) {
   FUNC_2(1000);
   if (VAR_33++ > 1000) {
    FUNC_6(VAR_30, "stopping EDMA engine failed\n");
    break;
   }
  }
 }
 VAR_32->curr_mode = VAR_31;
 VAR_32->fbs_enabled = 0;
 VAR_32->fake_busy = 0;

 FUNC_3(FUNC_4(VAR_30), VAR_30, VAR_31);

 VAR_34 = VAR_11 | VAR_12 | VAR_4;
 if (VAR_32->pm_present) {
  VAR_34 |= VAR_5;
  if (VAR_32->quirks & VAR_25) {
   VAR_34 |= VAR_3;
   VAR_32->fbs_enabled = 1;
  }
 }
 if (VAR_32->quirks & VAR_23)
  VAR_34 |= VAR_7;
 else if (VAR_32->quirks & VAR_24)
  VAR_34 |= VAR_8 | VAR_10;
 if (VAR_32->quirks & VAR_22)
  VAR_34 |= VAR_1;
 if (VAR_31 != VAR_20)
  VAR_34 |= VAR_2;
 if (VAR_31 == VAR_21)
  VAR_34 |= VAR_6;
 else if (VAR_31 == VAR_19)
  VAR_34 |= VAR_9;
 FUNC_1(VAR_32->r_mem, VAR_0, VAR_34);
 FUNC_7(VAR_30);
 if (VAR_32->quirks & VAR_25) {

  VAR_35 = FUNC_0(VAR_32->r_mem, VAR_26);
  VAR_37 = FUNC_0(VAR_32->r_mem, VAR_29);
  VAR_36 = FUNC_0(VAR_32->r_mem, VAR_16);
  if (VAR_32->fbs_enabled) {
   VAR_35 |= VAR_27;
   if (VAR_31 == VAR_19) {
    VAR_35 &= ~VAR_28;
    VAR_36 &= ~VAR_17;
   } else {
    VAR_35 |= VAR_28;
    VAR_36 |= VAR_17;
   }
   VAR_37 |= (1 << 8);
  } else {
   VAR_35 &= ~VAR_27;
   VAR_35 &= ~VAR_28;
   VAR_36 |= VAR_17;
   VAR_37 &= ~(1 << 8);
  }
  FUNC_1(VAR_32->r_mem, VAR_26, VAR_35);
  FUNC_1(VAR_32->r_mem, VAR_29, VAR_37);
  FUNC_1(VAR_32->r_mem, VAR_16, VAR_36);


  VAR_38 = FUNC_0(VAR_32->r_mem, VAR_18);
  if (VAR_31 == VAR_20)
   VAR_38 |= 1;
  else
   VAR_38 &= ~1;
  FUNC_1(VAR_32->r_mem, VAR_18, VAR_38);
 }

 if (VAR_31 != VAR_20)
  FUNC_1(VAR_32->r_mem, VAR_13, VAR_15);
}
