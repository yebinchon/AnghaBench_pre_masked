
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct lagg_softc {TYPE_2__* sc_ifp; } ;
struct lagg_port {struct lagg_softc* lp_softc; } ;
struct lacp_port {int lp_media; int lp_state; TYPE_1__* lp_ifp; struct lagg_port* lp_lagg; } ;
struct TYPE_4__ {int if_index; } ;
struct TYPE_3__ {int if_index; } ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint16_t
FUNC_4(struct lacp_port *VAR_3)
{
 struct lagg_port *VAR_4 = VAR_3->lp_lagg;
 struct lagg_softc *VAR_5 = VAR_4->lp_softc;
 u_int VAR_6 = VAR_3->lp_media;
 uint16_t VAR_7;

 if ((VAR_3->lp_state & VAR_2) == 0) {
  VAR_7 = VAR_3->lp_ifp->if_index;

  VAR_7 |= 0x8000;
 } else {
  u_int VAR_8 = FUNC_0(VAR_6);

  FUNC_2(FUNC_1(VAR_6) == VAR_0, ("invalid media type"));
  FUNC_2((VAR_6 & VAR_1) != 0, ("aggregating HDX interface"));


  switch (VAR_8) {
  case 189:
  case 193:
  case 192:
  case 190:
  case 191:
   VAR_7 = 189;
   break;
  case 208:
  case 213:
  case 209:
  case 207:
  case 210:
  case 211:
  case 212:
   VAR_7 = 208;
   break;
  case 233:
  case 235:
  case 238:
  case 232:
  case 236:
  case 234:
  case 237:
   VAR_7 = 233;
   break;
  case 200:
  case 197:
  case 204:
  case 195:
  case 194:
  case 199:
  case 196:
  case 201:
  case 202:
  case 205:
  case 203:
  case 198:
  case 206:
   VAR_7 = 200;
   break;
  case 178:
   VAR_7 = 178;
   break;
  case 177:
  case 176:
  case 175:
   VAR_7 = 177;
   break;
  case 145:
  case 148:
  case 146:
  case 147:
   VAR_7 = 145;
   break;
  case 131:
  case 139:
  case 137:
  case 129:
  case 132:
  case 134:
  case 135:
  case 141:
  case 142:
  case 140:
  case 130:
  case 133:
  case 138:
  case 136:
  case 143:
  case 144:
   VAR_7 = 131;
   break;
  case 128:
   VAR_7 = 128;
   break;
  case 164:
  case 171:
  case 168:
  case 163:
  case 165:
  case 174:
  case 173:
  case 162:
  case 169:
  case 170:
  case 166:
  case 172:
  case 167:
   VAR_7 = 164;
   break;
  case 156:
  case 152:
  case 153:
  case 149:
  case 154:
  case 151:
  case 150:
  case 155:
   VAR_7 = 156;
   break;
  case 222:
  case 214:
  case 218:
  case 216:
  case 224:
  case 225:
  case 228:
  case 229:
  case 221:
  case 217:
  case 223:
  case 215:
  case 220:
  case 219:
  case 226:
  case 227:
  case 230:
  case 231:
   VAR_7 = 222;
   break;
  case 184:
  case 179:
  case 182:
  case 180:
  case 183:
  case 181:
  case 187:
  case 188:
  case 185:
  case 186:
   VAR_7 = 184;
   break;
  case 158:
  case 157:
  case 159:
  case 160:
  case 161:
   VAR_7 = 158;
   break;
  default:
   VAR_7 = VAR_8;
   break;
  }

  VAR_7 |= 0x7fe0 & ((VAR_5->sc_ifp->if_index) << 5);

 }
 return (FUNC_3(VAR_7));
}
