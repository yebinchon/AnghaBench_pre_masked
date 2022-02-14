
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5_core_dev *VAR_5, u16 VAR_6,
           u32 *VAR_7, u8 *VAR_8)
{
 *VAR_7 = 0;
 *VAR_8 = 0;

 switch (VAR_6) {
 case 128:
 case 202:
 case 193:
 case 214:
 case 217:
 case 219:
 case 212:
 case 213:
 case 207:
 case 204:
 case 218:
 case 226:
 case 227:
 case 224:
 case 203:
 case 223:
 case 225:
 case 220:
 case 221:
 case 206:
 case 208:
 case 210:
 case 211:
 case 205:
 case 209:
 case 215:
 case 216:
 case 222:
 case 257:
 case 256:
 case 186:
 case 188:
 case 137:
 case 136:
  return VAR_2;

 case 165:
 case 176:
 case 195:
 case 200:
 case 156:
 case 135:
 case 161:
 case 134:
 case 238:
 case 158:
 case 149:
 case 177:
 case 241:
 case 170:
 case 199:
 case 243:
 case 172:
 case 190:
 case 236:
 case 140:
 case 196:
 case 139:
 case 138:
 case 129:
 case 155:
 case 130:
 case 197:
 case 237:
 case 231:
 case 147:
 case 247:
 case 228:
 case 141:
 case 246:
 case 242:
 case 201:
 case 171:
 case 248:
 case 142:
 case 179:
 case 169:
 case 189:
 case 157:
 case 152:
 case 131:
 case 164:
 case 187:
 case 163:
 case 162:
 case 144:
 case 143:
 case 252:
 case 154:
 case 253:
 case 250:
 case 244:
 case 255:
 case 245:
 case 198:
 case 194:
 case 159:
 case 132:
 case 178:
 case 249:
 case 251:
 case 173:
 case 191:
 case 175:
 case 192:
 case 174:
 case 254:
 case 133:
 case 160:
 case 230:
 case 181:
 case 146:
 case 232:
 case 182:
 case 148:
 case 234:
 case 184:
 case 151:
 case 235:
 case 185:
 case 153:
 case 229:
 case 180:
 case 145:
 case 233:
 case 183:
 case 150:
 case 239:
 case 167:
 case 240:
 case 168:
 case 166:
  *VAR_8 = VAR_3;
  *VAR_7 = VAR_4;
  return -VAR_1;
 default:
  FUNC_0(VAR_5, "Unknown FW command (%d)\n", VAR_6);
  return -VAR_0;
 }
}
