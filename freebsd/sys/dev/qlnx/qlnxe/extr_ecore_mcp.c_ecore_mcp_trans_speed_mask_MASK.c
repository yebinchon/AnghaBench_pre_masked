
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;
 scalar_t__ FUNC_3 (int,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_11,
      struct ecore_ptt *VAR_12,
      u32 *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;

 FUNC_2(VAR_11, VAR_12, &VAR_14);

 VAR_16 = FUNC_1(VAR_14,
       VAR_2);

 VAR_15 = FUNC_1(VAR_14,
      VAR_3);

 if (FUNC_3(VAR_16, VAR_15) == 0) {
  return VAR_0;
 }

 switch (VAR_15) {
 case 152:
 case 150:
 case 151:
 case 153:
 case 167:
  *VAR_13 = VAR_5;
  break;

 case 154:
 case 157:
 case 156:
 case 158:
 case 155:
 case 160:
 case 137:
  *VAR_13 = VAR_4;
  break;

 case 139:
 case 138:
 case 133:
 case 134:
  *VAR_13 = VAR_8 |
   VAR_4;
  break;

 case 165:
 case 161:
 case 162:
 case 163:
 case 166:
  *VAR_13 =
   VAR_10 |
   VAR_7;
  break;

 case 141:
 case 142:
 case 146:
 case 147:
 case 148:
 case 149:
  *VAR_13 = VAR_7;
  break;

 case 144:
 case 143:
 case 145:
 case 136:
  *VAR_13 = VAR_7 |
   VAR_4 |
   VAR_5;
  break;

 case 140:
 case 135:
  *VAR_13 = VAR_8 |
   VAR_4 |
   VAR_5;
  break;

 case 164:
 case 131:
  *VAR_13 =
   VAR_10 |
   VAR_9 |
   VAR_8 |
   VAR_7 |
   VAR_6 |
   VAR_4 |
   VAR_5;
  break;

 case 129:
 case 130:
 case 132:
  *VAR_13 =
   VAR_10 |
   VAR_8 |
   VAR_7 |
   VAR_4;
  break;

 case 128:
  *VAR_13 = VAR_8;
  break;

 case 159:
  *VAR_13 = VAR_4 |
   VAR_5;
  break;

 default:
  FUNC_0(VAR_11, "Unknown transcevier type 0x%x\n",
   VAR_15);
  *VAR_13 = 0xff;
  break;
 }

 return VAR_1;
}
