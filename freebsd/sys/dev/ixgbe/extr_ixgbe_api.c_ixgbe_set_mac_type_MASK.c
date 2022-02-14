
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {scalar_t__ vendor_id; int device_id; TYPE_1__ mac; int mvals; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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

s32 FUNC_3(struct ixgbe_hw *VAR_15)
{
 s32 VAR_16 = VAR_3;

 FUNC_0("ixgbe_set_mac_type\n");

 if (VAR_15->vendor_id != VAR_2) {
  FUNC_2(VAR_0,
        "Unsupported vendor id: %x", VAR_15->vendor_id);
  return VAR_1;
 }

 VAR_15->mvals = VAR_14;

 switch (VAR_15->device_id) {
 case 177:
 case 169:
 case 175:
 case 176:
 case 174:
 case 173:
 case 172:
 case 168:
 case 167:
 case 166:
 case 170:
 case 171:
  VAR_15->mac.type = VAR_4;
  break;
 case 159:
 case 158:
 case 150:
 case 162:
 case 160:
 case 156:
 case 164:
 case 154:
 case 155:
 case 153:
 case 152:
 case 157:
 case 165:
 case 161:
 case 163:
 case 151:
  VAR_15->mac.type = VAR_5;
  break;
 case 149:
 case 148:
 case 147:
  VAR_15->mac.type = VAR_6;
  VAR_15->mvals = VAR_10;
  break;
 case 129:
 case 128:
  VAR_15->mac.type = VAR_7;
  VAR_15->mvals = VAR_11;
  break;
 case 132:
 case 133:
 case 135:
 case 134:
 case 131:
 case 130:
  VAR_15->mac.type = VAR_9;
  VAR_15->mvals = VAR_13;
  break;
 case 143:
 case 142:
 case 138:
 case 137:
 case 136:
 case 145:
 case 144:
 case 146:
 case 141:
 case 140:
 case 139:
  VAR_15->mac.type = VAR_8;
  VAR_15->mvals = VAR_12;
  break;
 default:
  VAR_16 = VAR_1;
  FUNC_2(VAR_0,
        "Unsupported device id: %x",
        VAR_15->device_id);
  break;
 }

 FUNC_1("ixgbe_set_mac_type found mac: %d, returns: %d\n",
    VAR_15->mac.type, VAR_16);
 return VAR_16;
}
