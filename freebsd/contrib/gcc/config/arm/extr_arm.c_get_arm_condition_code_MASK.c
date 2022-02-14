
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum arm_cond_code { ____Placeholder_arm_cond_code } arm_cond_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_14 ;


 int FUNC_4 (int,int ,int ) ;






 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static enum arm_cond_code
FUNC_8 (rtx VAR_15)
{
  enum machine_mode VAR_16 = FUNC_2 (FUNC_5 (VAR_15, 0));
  int VAR_17;
  enum rtx_code VAR_18 = FUNC_1 (VAR_15);

  if (FUNC_3 (VAR_16) != VAR_14)
    VAR_16 = FUNC_4 (VAR_18, FUNC_5 (VAR_15, 0),
      FUNC_5 (VAR_15, 1));

  switch (VAR_16)
    {
    case 151: VAR_17 = VAR_10; goto dominance;
    case 160: VAR_17 = VAR_2; goto dominance;
    case 158: VAR_17 = VAR_3; goto dominance;
    case 156: VAR_17 = VAR_4; goto dominance;
    case 154: VAR_17 = VAR_6; goto dominance;
    case 152: VAR_17 = VAR_8; goto dominance;
    case 159: VAR_17 = VAR_1; goto dominance;
    case 157: VAR_17 = VAR_5; goto dominance;
    case 155: VAR_17 = VAR_7; goto dominance;
    case 153: VAR_17 = VAR_0;

    dominance:
      FUNC_6 (VAR_18 == 145 || VAR_18 == 135);

      if (VAR_18 == 145)
 return FUNC_0 (VAR_17);
      return VAR_17;

    case 150:
      switch (VAR_18)
 {
 case 135: return VAR_10;
 case 145: return VAR_2;
 case 144: return VAR_11;
 case 138: return VAR_9;
 default: FUNC_7 ();
 }

    case 147:
      switch (VAR_18)
 {
 case 135: return VAR_10;
 case 145: return VAR_2;
 default: FUNC_7 ();
 }

    case 149:
      switch (VAR_18)
 {
 case 135: return VAR_9;
 case 145: return VAR_11;
 default: FUNC_7 ();
 }

    case 163:
    case 162:



      switch (VAR_18)
 {
 case 144: return VAR_3;
 case 142: return VAR_4;
 case 140: return VAR_7;
 case 138: return VAR_9;
 case 135: return VAR_10;
 case 145: return VAR_2;
 case 134: return VAR_12;
 case 128: return VAR_13;
 case 129: return VAR_8;
 case 130: return VAR_6;
 case 131: return VAR_5;
 case 132: return VAR_11;

 case 133:
 case 137:
 default: FUNC_7 ();
 }

    case 148:
      switch (VAR_18)
 {
 case 135: return VAR_10;
 case 145: return VAR_2;
 case 144: return VAR_6;
 case 142: return VAR_8;
 case 140: return VAR_3;
 case 138: return VAR_4;
 case 143: return VAR_7;
 case 141: return VAR_0;
 case 139: return VAR_1;
 case 136: return VAR_5;
 default: FUNC_7 ();
 }

    case 161:
      switch (VAR_18)
      {
      case 136: return VAR_1;
      case 143: return VAR_0;
      default: FUNC_7 ();
      }

    case 146:
      switch (VAR_18)
 {
 case 135: return VAR_10;
 case 145: return VAR_2;
 case 144: return VAR_3;
 case 142: return VAR_4;
 case 140: return VAR_6;
 case 138: return VAR_8;
 case 143: return VAR_1;
 case 141: return VAR_5;
 case 139: return VAR_7;
 case 136: return VAR_0;
 default: FUNC_7 ();
 }

    default: FUNC_7 ();
    }
}
