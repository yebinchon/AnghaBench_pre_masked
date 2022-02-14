
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwn_softc {char* fwname; int hw_type; int subdevice_id; int sc_dev; int * base_params; int * limits; void* rxchainmask; void* txchainmask; int sc_flags; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
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

__attribute__((used)) static int
FUNC_1(struct iwn_softc *VAR_26, uint16_t VAR_27)
{

 switch (VAR_27) {

 case 300:
 case 299:
 case 298:
 case 297:
  VAR_26->base_params = &VAR_12;
  VAR_26->limits = &VAR_13;
  VAR_26->fwname = "iwn4965fw";

  VAR_26->txchainmask = VAR_1;
  VAR_26->rxchainmask = VAR_2;

  VAR_26->sc_flags |= VAR_5;
  break;

 case 314:
 case 313:
  switch(VAR_26->subdevice_id) {
   case 272:
   case 268:
   case 267:
   case 266:
   case 265:
   case 264:
   case 263:
   case 262:
   case 261:
   case 271:
   case 270:
   case 269:
    VAR_26->limits = &VAR_8;
    VAR_26->base_params = &VAR_7;
    VAR_26->fwname = "iwn1000fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 281:
 case 279:
 case 282:
 case 280:
  VAR_26->fwname = "iwn6000fw";
  VAR_26->limits = &VAR_16;
  switch(VAR_26->subdevice_id) {
   case 165:
   case 163:
   case 157:

    VAR_26->base_params = &VAR_19;
    break;
   case 162:
   case 159:
   case 156:

   case 161:
   case 158:
   case 164:

   case 160:

    VAR_26->base_params = &VAR_22;
    VAR_26->sc_flags |= VAR_6;
    VAR_26->txchainmask = VAR_4;
    VAR_26->rxchainmask = VAR_4;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 278:
 case 277:
  switch(VAR_26->subdevice_id) {
   case 155:
   case 149:
   case 147:

   case 151:
   case 148:
   case 146:

   case 150:

   case 145:
   case 144:

   case 154:

   case 153:

   case 152:

    VAR_26->fwname = "iwn6000g2afw";
    VAR_26->limits = &VAR_16;
    VAR_26->base_params = &VAR_20;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 288:
 case 287:
  switch(VAR_26->subdevice_id) {
   case 182:
   case 181:
   case 180:
   case 179:
   case 178:
    VAR_26->fwname = "iwn6000g2bfw";
    VAR_26->limits = &VAR_17;
    VAR_26->base_params = &VAR_25;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 286:
 case 285:
  switch(VAR_26->subdevice_id) {
   case 177:
   case 175:
   case 173:

   case 176:
   case 174:
   case 172:

    VAR_26->fwname = "iwn6050fw";
    VAR_26->txchainmask = VAR_1;
    VAR_26->rxchainmask = VAR_1;
    VAR_26->limits = &VAR_16;
    VAR_26->base_params = &VAR_23;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 284:
 case 283:
  switch(VAR_26->subdevice_id) {
   case 171:
   case 169:
   case 167:

   case 170:
   case 168:
   case 166:

    VAR_26->fwname = "iwn6050fw";
    VAR_26->limits = &VAR_16;
    VAR_26->base_params = &VAR_24;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 276:
 case 275:
 case 274:
 case 273:
  switch(VAR_26->subdevice_id) {
   case 143:
   case 134:
   case 132:

   case 135:
   case 133:
   case 131:

   case 130:
   case 142:
   case 138:

   case 129:
   case 141:
   case 137:

   case 128:
   case 140:
   case 136:

   case 139:

    VAR_26->fwname = "iwn6000g2bfw";
    VAR_26->limits = &VAR_16;
    VAR_26->base_params = &VAR_21;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;




 case 308:
 case 307:
  switch(VAR_26->subdevice_id) {
   case 250:
   case 248:
   case 246:

   case 249:
   case 247:
   case 245:

    VAR_26->fwname = "iwn6000g2bfw";
    VAR_26->limits = &VAR_16;
    VAR_26->base_params = &VAR_21;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 312:
 case 311:
  switch(VAR_26->subdevice_id) {
   case 260:
   case 259:
   case 258:
   case 257:
   case 256:
   case 255:
    VAR_26->limits = &VAR_8;
    VAR_26->base_params = &VAR_7;
    VAR_26->fwname = "iwn100fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;





 case 310:
 case 309:
  switch(VAR_26->subdevice_id) {
   case 254:
   case 253:
   case 252:

   case 251:

    VAR_26->limits = &VAR_11;
    VAR_26->base_params = &VAR_9;
    VAR_26->fwname = "iwn105fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;





 case 306:
 case 305:
  switch(VAR_26->subdevice_id) {
   case 244:
   case 243:
   case 242:
    VAR_26->limits = &VAR_11;
    VAR_26->base_params = &VAR_10;
    VAR_26->fwname = "iwn135fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;


 case 304:
 case 303:
  switch(VAR_26->subdevice_id) {
   case 241:
   case 240:
   case 239:

   case 238:

    VAR_26->limits = &VAR_11;
    VAR_26->base_params = &VAR_9;
    VAR_26->fwname = "iwn2000fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice) \n",
        VAR_27, VAR_26->subdevice_id, VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 302:
 case 301:
  switch(VAR_26->subdevice_id) {
   case 237:
   case 235:
   case 233:

   case 236:
   case 234:
   case 232:

    VAR_26->limits = &VAR_11;
    VAR_26->base_params = &VAR_10;
    VAR_26->fwname = "iwn2030fw";
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 296:
 case 295:
 case 294:
 case 293:
  VAR_26->limits = &VAR_15;
  VAR_26->base_params = &VAR_14;
  VAR_26->fwname = "iwn5000fw";
  switch(VAR_26->subdevice_id) {
   case 231:
   case 220:
   case 209:
   case 201:
   case 196:
   case 230:
   case 229:
   case 228:
   case 223:
   case 222:
   case 221:
   case 219:

    VAR_26->txchainmask = VAR_3;
    VAR_26->rxchainmask = VAR_1;
    break;
   case 200:
   case 199:
   case 227:
   case 226:
   case 218:
   case 217:

    VAR_26->txchainmask = VAR_3;
    VAR_26->rxchainmask = VAR_1;
    break;
   case 198:
   case 197:
   case 225:
   case 224:
   case 216:
   case 215:

    VAR_26->txchainmask = VAR_3;
    VAR_26->rxchainmask = VAR_1;
    break;
   case 214:
   case 213:
   case 212:
   case 211:
   case 210:
   case 208:
   case 207:
   case 206:
   case 205:
   case 204:
   case 203:
   case 202:

    VAR_26->txchainmask = VAR_2;
    VAR_26->rxchainmask = VAR_2;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;

 case 292:
 case 291:
 case 290:
 case 289:
  VAR_26->limits = &VAR_15;
  VAR_26->base_params = &VAR_14;
  VAR_26->fwname = "iwn5000fw";
  switch(VAR_26->subdevice_id) {
   case 195:
   case 190:
   case 189:

    VAR_26->limits = &VAR_15;
    VAR_26->base_params = &VAR_14;
    VAR_26->fwname = "iwn5000fw";
    break;
   case 188:
   case 187:
   case 184:
   case 183:
   case 194:
   case 193:

   case 186:
   case 185:
   case 192:
   case 191:

    VAR_26->limits = &VAR_15;
    VAR_26->fwname = "iwn5150fw";
    VAR_26->base_params = &VAR_18;
    break;
   default:
    FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id :"
        "0x%04x rev %d not supported (subdevice)\n", VAR_27,
        VAR_26->subdevice_id,VAR_26->hw_type);
    return VAR_0;
  }
  break;
 default:
  FUNC_0(VAR_26->sc_dev, "adapter type id : 0x%04x sub id : 0x%04x"
      "rev 0x%08x not supported (device)\n", VAR_27, VAR_26->subdevice_id,
       VAR_26->hw_type);
  return VAR_0;
 }
 return 0;
}
