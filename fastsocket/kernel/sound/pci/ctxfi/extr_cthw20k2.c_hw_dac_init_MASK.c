
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regs_cs4382 {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_16; int vol_control_B4; int vol_control_A4; int mix_control_P4; int vol_control_B3; int vol_control_A3; int mix_control_P3; int vol_control_B2; int vol_control_A2; int mix_control_P2; int vol_control_B1; int vol_control_A1; int mix_control_P1; int invert_control; int filter_control; int mode_control_3; int mode_control_2; int mode_control_1; } ;
struct hw {int dummy; } ;
struct dac_conf {int msr; } ;
typedef int cs_read ;


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
 int FUNC_0 (struct hw*,int,int,int) ;
 scalar_t__ FUNC_1 (struct hw*,int ,int *) ;
 int FUNC_2 (struct hw*) ;
 int FUNC_3 (struct hw*,int ,int) ;
 int FUNC_4 (struct hw*,int ) ;
 int FUNC_5 (struct hw*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct regs_cs4382*,struct regs_cs4382*,int) ;

__attribute__((used)) static int FUNC_8(struct hw *VAR_19, const struct dac_conf *VAR_20)
{
 int VAR_21;
 u32 VAR_22;
 int VAR_23;
 struct regs_cs4382 VAR_24 = {0};
 struct regs_cs4382 VAR_25 = {
       0x00000001,
       0x00000000,
       0x00000084,
       0x00000000,
       0x00000000,
       0x00000024,
       0x00000000,
       0x00000000,
       0x00000024,
       0x00000000,
       0x00000000,
       0x00000024,
       0x00000000,
       0x00000000,
       0x00000024,
       0x00000000,
       0x00000000
     };


 VAR_22 = FUNC_4(VAR_19, VAR_17);
 VAR_22 |= 0x02;
 FUNC_5(VAR_19, VAR_17, VAR_22);

 VAR_21 = FUNC_0(VAR_19, 0x18, 1, 1);
 if (VAR_21 < 0)
  goto End;

 for (VAR_23 = 0; VAR_23 < 2; VAR_23++) {


  VAR_22 = FUNC_4(VAR_19, VAR_18);

  VAR_22 &= 0xFFFFFFFD;
  FUNC_5(VAR_19, VAR_18, VAR_22);
  FUNC_6(10);
  VAR_22 |= 0x2;
  FUNC_5(VAR_19, VAR_18, VAR_22);
  FUNC_6(50);


  VAR_22 &= 0xFFFFFFFD;
  FUNC_5(VAR_19, VAR_18, VAR_22);
  FUNC_6(10);
  VAR_22 |= 0x2;
  FUNC_5(VAR_19, VAR_18, VAR_22);
  FUNC_6(50);

  if (FUNC_1(VAR_19, VAR_2, &VAR_24.mode_control_1))
   continue;

  if (FUNC_1(VAR_19, VAR_3, &VAR_24.mode_control_2))
   continue;

  if (FUNC_1(VAR_19, VAR_4, &VAR_24.mode_control_3))
   continue;

  if (FUNC_1(VAR_19, VAR_0, &VAR_24.filter_control))
   continue;

  if (FUNC_1(VAR_19, VAR_1, &VAR_24.invert_control))
   continue;

  if (FUNC_1(VAR_19, VAR_13, &VAR_24.mix_control_P1))
   continue;

  if (FUNC_1(VAR_19, VAR_5, &VAR_24.vol_control_A1))
   continue;

  if (FUNC_1(VAR_19, VAR_9, &VAR_24.vol_control_B1))
   continue;

  if (FUNC_1(VAR_19, VAR_14, &VAR_24.mix_control_P2))
   continue;

  if (FUNC_1(VAR_19, VAR_6, &VAR_24.vol_control_A2))
   continue;

  if (FUNC_1(VAR_19, VAR_10, &VAR_24.vol_control_B2))
   continue;

  if (FUNC_1(VAR_19, VAR_15, &VAR_24.mix_control_P3))
   continue;

  if (FUNC_1(VAR_19, VAR_7, &VAR_24.vol_control_A3))
   continue;

  if (FUNC_1(VAR_19, VAR_11, &VAR_24.vol_control_B3))
   continue;

  if (FUNC_1(VAR_19, VAR_16, &VAR_24.mix_control_P4))
   continue;

  if (FUNC_1(VAR_19, VAR_8, &VAR_24.vol_control_A4))
   continue;

  if (FUNC_1(VAR_19, VAR_12, &VAR_24.vol_control_B4))
   continue;

  if (FUNC_7(&VAR_24, &VAR_25, sizeof(VAR_24)))
   continue;
  else
   break;
 }

 if (VAR_23 >= 2)
  goto End;



 FUNC_3(VAR_19, VAR_2, 0x80);
 FUNC_3(VAR_19, VAR_3, 0x10);
 if (1 == VAR_20->msr) {
  FUNC_3(VAR_19, VAR_13, 0x24);
  FUNC_3(VAR_19, VAR_14, 0x24);
  FUNC_3(VAR_19, VAR_15, 0x24);
  FUNC_3(VAR_19, VAR_16, 0x24);
 } else if (2 == VAR_20->msr) {
  FUNC_3(VAR_19, VAR_13, 0x25);
  FUNC_3(VAR_19, VAR_14, 0x25);
  FUNC_3(VAR_19, VAR_15, 0x25);
  FUNC_3(VAR_19, VAR_16, 0x25);
 } else {
  FUNC_3(VAR_19, VAR_13, 0x26);
  FUNC_3(VAR_19, VAR_14, 0x26);
  FUNC_3(VAR_19, VAR_15, 0x26);
  FUNC_3(VAR_19, VAR_16, 0x26);
 }

 return 0;
End:

 FUNC_2(VAR_19);
 return -1;
}
