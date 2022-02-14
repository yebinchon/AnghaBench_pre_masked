
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_1__ uint32_t ;
typedef int uint16_t ;
struct rl_softc {int rl_twister; int rl_twist_row; size_t rl_twist_col; } ;



 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int ) ;
 int FUNC_2 (struct rl_softc*,int ,TYPE_1__ const) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ const VAR_9 ;
 TYPE_1__ const VAR_10 ;
 int VAR_11 ;
 TYPE_1__ const VAR_12 ;
 int VAR_13 ;
 TYPE_1__ const VAR_14 ;
 TYPE_1__ const VAR_15 ;


__attribute__((used)) static void
FUNC_3(struct rl_softc *VAR_16)
{
 uint16_t VAR_17;




 static const uint32_t VAR_18[4][4] = {
  {0xcb39de43, 0xcb39ce43, 0xfb38de03, 0xcb38de43},
  {0xcb39de43, 0xcb39ce43, 0xcb39ce83, 0xcb39ce83},
  {0xcb39de43, 0xcb39ce43, 0xcb39ce83, 0xcb39ce83},
  {0xbb39de43, 0xbb39ce43, 0xbb39ce83, 0xbb39ce83}
 };







 switch (VAR_16->rl_twister)
 {
 case 133:





  if (FUNC_0(VAR_16, VAR_0) & VAR_3) {
   FUNC_1(VAR_16, VAR_0, VAR_2);
   VAR_16->rl_twister = 131;
  } else {
   FUNC_1(VAR_16, VAR_0, VAR_1);
   FUNC_2(VAR_16, VAR_8, VAR_9);
   FUNC_2(VAR_16, VAR_11, VAR_12);
   FUNC_2(VAR_16, VAR_13, VAR_14);
   VAR_16->rl_twister = 132;
  }
  break;
 case 131:




  VAR_17 = FUNC_0(VAR_16, VAR_0) & VAR_7;
  if (VAR_17 == VAR_6)
   VAR_16->rl_twist_row = 3;
  else if (VAR_17 == VAR_5)
   VAR_16->rl_twist_row = 2;
  else if (VAR_17 == VAR_4)
   VAR_16->rl_twist_row = 1;
  else
   VAR_16->rl_twist_row = 0;
  VAR_16->rl_twist_col = 0;
  VAR_16->rl_twister = 128;
  break;
 case 128:
  if (VAR_16->rl_twist_col == 0)
   FUNC_2(VAR_16, VAR_8, VAR_10);
  FUNC_2(VAR_16, VAR_13,
      VAR_18[VAR_16->rl_twist_row][VAR_16->rl_twist_col]);
  if (++VAR_16->rl_twist_col == 4) {
   if (VAR_16->rl_twist_row == 3)
    VAR_16->rl_twister = 130;
   else
    VAR_16->rl_twister = 132;
  }
  break;
 case 130:




  VAR_17 = FUNC_0(VAR_16, VAR_0) & VAR_7;
  if (VAR_17 == VAR_6)
   VAR_16->rl_twister = 132;
  else {
   FUNC_2(VAR_16, VAR_13, VAR_15);
   VAR_16->rl_twister = 129;
  }
  break;
 case 129:

  FUNC_2(VAR_16, VAR_8, VAR_9);
  FUNC_2(VAR_16, VAR_11, VAR_12);
  FUNC_2(VAR_16, VAR_13, VAR_14);
  FUNC_2(VAR_16, VAR_8, VAR_10);
  VAR_16->rl_twist_row--;
  VAR_16->rl_twist_col = 0;
  VAR_16->rl_twister = 128;
  break;

 case 132:
  break;
 }

}
