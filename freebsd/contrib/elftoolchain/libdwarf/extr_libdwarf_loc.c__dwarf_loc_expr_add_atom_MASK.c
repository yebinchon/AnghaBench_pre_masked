
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int buf ;
struct TYPE_4__ {int dbg_pointer_size; int (* write ) (int *,int *,int ,int) ;} ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int FUNC_6 (int *,int *,int ,int) ;
 int FUNC_7 (int *,int *,int ,int) ;

int
FUNC_8(Dwarf_Debug VAR_2, uint8_t *VAR_3, uint8_t *VAR_4,
    Dwarf_Small VAR_5, Dwarf_Unsigned VAR_6, Dwarf_Unsigned VAR_7,
    int *VAR_8, Dwarf_Error *VAR_9)
{
 uint8_t VAR_10[64];
 uint8_t *VAR_11, *VAR_12;
 uint64_t VAR_13;
 int VAR_14;

 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  VAR_11 = VAR_3;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_3 = VAR_10;
  VAR_12 = &VAR_10[sizeof(VAR_10)];
 }

 switch (VAR_5) {

 case 225:
 case 169:
 case 168:
 case 157:
 case 146:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 167:
 case 166:
 case 165:
 case 164:
 case 163:
 case 162:
 case 161:
 case 160:
 case 159:
 case 158:
 case 156:
 case 155:
 case 154:
 case 153:
 case 152:
 case 151:
 case 150:
 case 149:
 case 148:
 case 147:
 case 145:
 case 144:

 case 215:
 case 214:
 case 203:
 case 192:
 case 189:
 case 188:
 case 187:
 case 186:
 case 185:
 case 184:
 case 213:
 case 212:
 case 211:
 case 210:
 case 209:
 case 208:
 case 207:
 case 206:
 case 205:
 case 204:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 197:
 case 196:
 case 195:
 case 194:
 case 193:
 case 191:
 case 190:

 case 221:
 case 222:

 case 174:

 case 131:
 case 136:
 case 130:

 case 272:
 case 270:
 case 223:
 case 182:
 case 181:
 case 180:
 case 178:
 case 176:
 case 175:
 case 171:

 case 135:
 case 134:
 case 133:
 case 128:

 case 220:
 case 218:
 case 217:
 case 216:
 case 183:
 case 179:

 case 177:
 case 273:
  *VAR_11++ = VAR_5;
  break;


 case 234:
 case 235:
 case 173:
 case 224:
 case 129:
  *VAR_11++ = VAR_5;
  *VAR_11++ = (uint8_t) VAR_6;
  break;


 case 232:
 case 233:
 case 269:
 case 132:
  *VAR_11++ = VAR_5;
  VAR_13 = 0;
  VAR_2->write(VAR_11, &VAR_13, VAR_6, 2);
  VAR_11 += 2;
  break;


 case 230:
 case 231:
  *VAR_11++ = VAR_5;
  VAR_13 = 0;
  VAR_2->write(VAR_11, &VAR_13, VAR_6, 4);
  VAR_11 += 4;
  break;


 case 228:
 case 229:
  *VAR_11++ = VAR_5;
  VAR_13 = 0;
  VAR_2->write(VAR_11, &VAR_13, VAR_6, 8);
  VAR_11 += 8;
  break;


 case 226:
 case 170:
 case 137:
 case 172:
  *VAR_11++ = VAR_5;
  VAR_14 = FUNC_2(VAR_11, VAR_12, VAR_6);
  FUNC_3(VAR_14 > 0);
  VAR_11 += VAR_14;
  break;


 case 227:
 case 268:
 case 267:
 case 256:
 case 245:
 case 242:
 case 241:
 case 240:
 case 239:
 case 238:
 case 237:
 case 266:
 case 265:
 case 264:
 case 263:
 case 262:
 case 261:
 case 260:
 case 259:
 case 258:
 case 257:
 case 255:
 case 254:
 case 253:
 case 252:
 case 251:
 case 250:
 case 249:
 case 248:
 case 247:
 case 246:
 case 244:
 case 243:
 case 219:
  *VAR_11++ = VAR_5;
  VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_6);
  FUNC_3(VAR_14 > 0);
  VAR_11 += VAR_14;
  break;





 case 236:
  *VAR_11++ = VAR_5;
  VAR_14 = FUNC_2(VAR_11, VAR_12, VAR_6);
  FUNC_3(VAR_14 > 0);
  VAR_11 += VAR_14;
  VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_7);
  FUNC_3(VAR_14 > 0);
  VAR_11 += VAR_14;
  break;


 case 271:
  *VAR_11++ = VAR_5;
  VAR_13 = 0;
  VAR_2->write(VAR_11, &VAR_13, VAR_6, VAR_2->dbg_pointer_size);
  VAR_11 += VAR_2->dbg_pointer_size;
  break;


 default:
  FUNC_0(VAR_2, VAR_9, VAR_0);
  return (VAR_0);
 }

 if (VAR_8)
  *VAR_8 = VAR_11 - VAR_3;

 return (VAR_1);
}
