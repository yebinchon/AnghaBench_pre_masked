
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int prev_offset; int max_skipcount; int skipcount; } ;
struct TYPE_4__ {TYPE_1__ pacal_info; } ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct ath_hal*,int ,char*) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int) ;
 int FUNC_6 (struct ath_hal*,int,int ,int) ;
 int FUNC_7 (struct ath_hal*,int,int) ;
 scalar_t__ FUNC_8 (struct ath_hal*,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct ath_hal *VAR_31, HAL_BOOL VAR_32)
{
 uint32_t VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;
 uint32_t VAR_38, VAR_39;
 uint32_t VAR_40[][2] = {
  { 0x786c, 0 },
  { 0x7854, 0 },
  { 0x7820, 0 },
  { 0x7824, 0 },
  { 0x7868, 0 },
  { 0x783c, 0 },
  { 0x7838, 0 },
 };


 if (FUNC_8(VAR_31, VAR_28, VAR_0) ==
     VAR_1)
  return;

 FUNC_1(VAR_31, VAR_29, "Running PA Calibration\n");

 for (VAR_34 = 0; VAR_34 < FUNC_3(VAR_40); VAR_34++)
  VAR_40[VAR_34][1] = FUNC_5(VAR_31, VAR_40[VAR_34][0]);

 VAR_33 = FUNC_5(VAR_31, 0x7834);
 VAR_33 &= (~(0x1));
 FUNC_7(VAR_31, 0x7834, VAR_33);
 VAR_33 = FUNC_5(VAR_31, 0x9808);
 VAR_33 |= (0x1 << 27);
 FUNC_7(VAR_31, 0x9808, VAR_33);

 FUNC_6(VAR_31, VAR_26, VAR_27, 1);
 FUNC_6(VAR_31, VAR_20, VAR_22, 1);
 FUNC_6(VAR_31, VAR_20, VAR_23, 1);
 FUNC_6(VAR_31, VAR_20, VAR_21, 1);
 FUNC_6(VAR_31, VAR_7, VAR_8, 0);
 FUNC_6(VAR_31, VAR_14, VAR_16, 0);
 FUNC_6(VAR_31, VAR_2, VAR_3, 0);
 FUNC_6(VAR_31, VAR_2, VAR_4, 0);
 FUNC_6(VAR_31, VAR_2, VAR_5, 0);
 FUNC_6(VAR_31, VAR_2, VAR_6, 0);
 FUNC_6(VAR_31, VAR_17, VAR_18, 7);
 FUNC_6(VAR_31, VAR_14, VAR_15, 0);
 VAR_38 = FUNC_2(FUNC_5(VAR_31, VAR_11), VAR_12);
 FUNC_6(VAR_31, VAR_11, VAR_12, 0xf);

 FUNC_7(VAR_31, VAR_25, 0xca0358a0);
 FUNC_4(30);
 FUNC_6(VAR_31, VAR_11, VAR_13, 0);
 FUNC_6(VAR_31, VAR_9, VAR_10, 0);

 for (VAR_34 = 6; VAR_34 > 0; VAR_34--) {
  VAR_33 = FUNC_5(VAR_31, 0x7834);
  VAR_33 |= (1 << (19 + VAR_34));
  FUNC_7(VAR_31, 0x7834, VAR_33);
  FUNC_4(1);
  VAR_33 = FUNC_5(VAR_31, 0x7834);
  VAR_33 &= (~(0x1 << (19 + VAR_34)));
  VAR_39 = FUNC_2(FUNC_5(VAR_31, 0x7840), VAR_24);
  VAR_33 |= (VAR_39 << (19 + VAR_34));
  FUNC_7(VAR_31, 0x7834, VAR_33);
 }

 FUNC_6(VAR_31, VAR_9, VAR_10, 1);
 FUNC_4(1);
 VAR_39 = FUNC_2(FUNC_5(VAR_31, VAR_19), VAR_24);
 FUNC_6(VAR_31, VAR_9, VAR_10, VAR_39);
 VAR_36 = FUNC_2(FUNC_5(VAR_31, VAR_11), VAR_13);
 VAR_37 = FUNC_2(FUNC_5(VAR_31, VAR_9), VAR_10);

 VAR_35 = (VAR_36<<1) | VAR_37;
 VAR_35 = VAR_35 - 0;
 VAR_36 = VAR_35>>1;
 VAR_37 = VAR_35 & 1;

 if ((!VAR_32) && (FUNC_0(VAR_31)->pacal_info.prev_offset == VAR_35)) {
  if (FUNC_0(VAR_31)->pacal_info.max_skipcount < VAR_30)
   FUNC_0(VAR_31)->pacal_info.max_skipcount =
    2 * FUNC_0(VAR_31)->pacal_info.max_skipcount;
  FUNC_0(VAR_31)->pacal_info.skipcount = FUNC_0(VAR_31)->pacal_info.max_skipcount;
 } else {
  FUNC_0(VAR_31)->pacal_info.max_skipcount = 1;
  FUNC_0(VAR_31)->pacal_info.skipcount = 0;
  FUNC_0(VAR_31)->pacal_info.prev_offset = VAR_35;
 }

 FUNC_6(VAR_31, VAR_11, VAR_13, VAR_36);
 FUNC_6(VAR_31, VAR_9, VAR_10, VAR_37);

 VAR_33 = FUNC_5(VAR_31, 0x7834);
 VAR_33 |= 0x1;
 FUNC_7(VAR_31, 0x7834, VAR_33);
 VAR_33 = FUNC_5(VAR_31, 0x9808);
 VAR_33 &= (~(0x1 << 27));
 FUNC_7(VAR_31, 0x9808, VAR_33);

 for (VAR_34 = 0; VAR_34 < FUNC_3(VAR_40); VAR_34++)
  FUNC_7(VAR_31, VAR_40[VAR_34][0], VAR_40[VAR_34][1]);

 FUNC_6(VAR_31, VAR_11, VAR_12, VAR_38);
}
