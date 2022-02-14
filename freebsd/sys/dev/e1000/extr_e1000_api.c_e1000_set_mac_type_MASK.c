
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_mac_info {int type; } ;
struct e1000_hw {int device_id; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

s32 FUNC_1(struct e1000_hw *VAR_37)
{
 struct e1000_mac_info *VAR_38 = &VAR_37->mac;
 s32 VAR_39 = VAR_1;

 FUNC_0("e1000_set_mac_type");

 switch (VAR_37->device_id) {
 case 266:
  VAR_38->type = VAR_6;
  break;
 case 264:
 case 265:
  VAR_38->type = VAR_7;
  break;
 case 263:
 case 262:
 case 261:
 case 260:
  VAR_38->type = VAR_8;
  break;
 case 278:
 case 277:
 case 276:
 case 275:
 case 274:
  VAR_38->type = VAR_3;
  break;
 case 259:
 case 258:
  VAR_38->type = VAR_9;
  break;
 case 257:
 case 256:
 case 255:
  VAR_38->type = VAR_10;
  break;
 case 254:
 case 253:
 case 252:
  VAR_38->type = VAR_11;
  break;
 case 251:
 case 250:
 case 246:
 case 249:
 case 248:
 case 247:
  VAR_38->type = VAR_12;
  break;
 case 273:
 case 272:
 case 270:
  VAR_38->type = VAR_4;
  break;
 case 271:
 case 269:
 case 268:
 case 267:
  VAR_38->type = VAR_5;
  break;
 case 245:
 case 244:
  VAR_38->type = VAR_13;
  break;
 case 243:
  VAR_38->type = VAR_14;
  break;
 case 242:
 case 241:
 case 237:
 case 236:
 case 235:
 case 240:
 case 234:
 case 238:
 case 239:
  VAR_38->type = VAR_15;
  break;
 case 233:
 case 232:
 case 231:
 case 230:
  VAR_38->type = VAR_16;
  break;
 case 229:
 case 228:
 case 227:
  VAR_38->type = VAR_17;
  break;
 case 226:
 case 225:
  VAR_38->type = VAR_18;
  break;
 case 205:
  VAR_38->type = VAR_22;
  break;
 case 282:
 case 280:
 case 281:
 case 279:
  VAR_38->type = VAR_2;
  break;
 case 174:
 case 172:
 case 173:
 case 169:
 case 168:
 case 171:
 case 170:
 case 175:
  VAR_38->type = VAR_28;
  break;
 case 166:
 case 164:
 case 165:
 case 161:
 case 160:
 case 159:
 case 163:
 case 167:
 case 162:
 case 177:
 case 178:
 case 176:
  VAR_38->type = VAR_29;
  break;
 case 180:
 case 181:
 case 179:
  VAR_38->type = VAR_27;
  break;
 case 151:
 case 152:
 case 136:
 case 137:
  VAR_38->type = VAR_34;
  break;
 case 158:
 case 157:
  VAR_38->type = VAR_30;
  break;
 case 139:
 case 138:
 case 141:
 case 140:
 case 150:
 case 148:
 case 149:
 case 147:
  VAR_38->type = VAR_32;
  break;
 case 135:
 case 131:
 case 134:
 case 130:
 case 142:
 case 133:
 case 129:
 case 132:
 case 128:
  VAR_38->type = VAR_33;
  break;
 case 156:
 case 154:
 case 155:
 case 153:
 case 146:
 case 144:
 case 145:
 case 143:
  VAR_38->type = VAR_31;
  break;
 case 224:
 case 223:
 case 222:
  VAR_38->type = VAR_19;
  break;
 case 221:
 case 220:
 case 215:
 case 217:
 case 216:
 case 219:
 case 218:
 case 214:
  VAR_38->type = VAR_20;
  break;
 case 211:
 case 209:
 case 207:
 case 206:
 case 210:
 case 208:
 case 201:
 case 203:
 case 204:
 case 202:
  VAR_38->type = VAR_21;
  break;
 case 191:
 case 189:
 case 188:
 case 187:
 case 190:
  VAR_38->type = VAR_25;
  break;
 case 199:
 case 194:
 case 200:
 case 197:
 case 198:
 case 196:
 case 195:
 case 193:
  VAR_38->type = VAR_23;
  break;
 case 192:
  VAR_38->type = VAR_24;
  break;
 case 213:
 case 212:
  VAR_38->type = VAR_35;
  break;
 case 186:
 case 185:
  VAR_38->type = VAR_36;
  break;

 case 184:
 case 182:
 case 183:
  VAR_38->type = VAR_26;
  break;
 default:

  VAR_39 = -VAR_0;
  break;
 }

 return VAR_39;
}
