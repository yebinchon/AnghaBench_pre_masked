
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 (unsigned char*,unsigned int*,int) ;

__attribute__((used)) static int
FUNC_5 (unsigned char * VAR_2,
       unsigned int VAR_3,
       unsigned long VAR_4,
       unsigned long VAR_5)
{
  unsigned VAR_6;
  unsigned int VAR_7;
  unsigned long VAR_8;
  unsigned char *VAR_9 = VAR_2 + VAR_4;
  int VAR_10 = 0;

  while (VAR_2 < VAR_9)
    {
      VAR_6 = *VAR_2++;

      switch (VAR_6)
 {
 case 276:
   FUNC_3 ("DW_OP_addr: %lx",
    (unsigned long) FUNC_1 (VAR_2, VAR_3));
   VAR_2 += VAR_3;
   break;
 case 227:
   FUNC_3 ("DW_OP_deref");
   break;
 case 236:
   FUNC_3 ("DW_OP_const1u: %lu", (unsigned long) FUNC_1 (VAR_2++, 1));
   break;
 case 237:
   FUNC_3 ("DW_OP_const1s: %ld", (long) FUNC_2 (VAR_2++, 1));
   break;
 case 234:
   FUNC_3 ("DW_OP_const2u: %lu", (unsigned long) FUNC_1 (VAR_2, 2));
   VAR_2 += 2;
   break;
 case 235:
   FUNC_3 ("DW_OP_const2s: %ld", (long) FUNC_2 (VAR_2, 2));
   VAR_2 += 2;
   break;
 case 232:
   FUNC_3 ("DW_OP_const4u: %lu", (unsigned long) FUNC_1 (VAR_2, 4));
   VAR_2 += 4;
   break;
 case 233:
   FUNC_3 ("DW_OP_const4s: %ld", (long) FUNC_2 (VAR_2, 4));
   VAR_2 += 4;
   break;
 case 230:
   FUNC_3 ("DW_OP_const8u: %lu %lu", (unsigned long) FUNC_1 (VAR_2, 4),
    (unsigned long) FUNC_1 (VAR_2 + 4, 4));
   VAR_2 += 8;
   break;
 case 231:
   FUNC_3 ("DW_OP_const8s: %ld %ld", (long) FUNC_1 (VAR_2, 4),
    (long) FUNC_1 (VAR_2 + 4, 4));
   VAR_2 += 8;
   break;
 case 228:
   FUNC_3 ("DW_OP_constu: %lu", FUNC_4 (VAR_2, &VAR_7, 0));
   VAR_2 += VAR_7;
   break;
 case 229:
   FUNC_3 ("DW_OP_consts: %ld", FUNC_4 (VAR_2, &VAR_7, 1));
   VAR_2 += VAR_7;
   break;
 case 223:
   FUNC_3 ("DW_OP_dup");
   break;
 case 224:
   FUNC_3 ("DW_OP_drop");
   break;
 case 175:
   FUNC_3 ("DW_OP_over");
   break;
 case 174:
   FUNC_3 ("DW_OP_pick: %ld", (unsigned long) FUNC_1 (VAR_2++, 1));
   break;
 case 131:
   FUNC_3 ("DW_OP_swap");
   break;
 case 136:
   FUNC_3 ("DW_OP_rot");
   break;
 case 130:
   FUNC_3 ("DW_OP_xderef");
   break;
 case 277:
   FUNC_3 ("DW_OP_abs");
   break;
 case 275:
   FUNC_3 ("DW_OP_and");
   break;
 case 225:
   FUNC_3 ("DW_OP_div");
   break;
 case 183:
   FUNC_3 ("DW_OP_minus");
   break;
 case 182:
   FUNC_3 ("DW_OP_mod");
   break;
 case 181:
   FUNC_3 ("DW_OP_mul");
   break;
 case 179:
   FUNC_3 ("DW_OP_neg");
   break;
 case 177:
   FUNC_3 ("DW_OP_not");
   break;
 case 176:
   FUNC_3 ("DW_OP_or");
   break;
 case 172:
   FUNC_3 ("DW_OP_plus");
   break;
 case 171:
   FUNC_3 ("DW_OP_plus_uconst: %lu",
    FUNC_4 (VAR_2, &VAR_7, 0));
   VAR_2 += VAR_7;
   break;
 case 135:
   FUNC_3 ("DW_OP_shl");
   break;
 case 134:
   FUNC_3 ("DW_OP_shr");
   break;
 case 133:
   FUNC_3 ("DW_OP_shra");
   break;
 case 128:
   FUNC_3 ("DW_OP_xor");
   break;
 case 274:
   FUNC_3 ("DW_OP_bra: %ld", (long) FUNC_2 (VAR_2, 2));
   VAR_2 += 2;
   break;
 case 222:
   FUNC_3 ("DW_OP_eq");
   break;
 case 219:
   FUNC_3 ("DW_OP_ge");
   break;
 case 218:
   FUNC_3 ("DW_OP_gt");
   break;
 case 217:
   FUNC_3 ("DW_OP_le");
   break;
 case 184:
   FUNC_3 ("DW_OP_lt");
   break;
 case 180:
   FUNC_3 ("DW_OP_ne");
   break;
 case 132:
   FUNC_3 ("DW_OP_skip: %ld", (long) FUNC_2 (VAR_2, 2));
   VAR_2 += 2;
   break;

 case 216:
 case 215:
 case 204:
 case 193:
 case 190:
 case 189:
 case 188:
 case 187:
 case 186:
 case 185:
 case 214:
 case 213:
 case 212:
 case 211:
 case 210:
 case 209:
 case 208:
 case 207:
 case 206:
 case 205:
 case 203:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 197:
 case 196:
 case 195:
 case 194:
 case 192:
 case 191:
   FUNC_3 ("DW_OP_lit%d", VAR_6 - 216);
   break;

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
   FUNC_3 ("DW_OP_reg%d", VAR_6 - 169);
   break;

 case 273:
 case 272:
 case 261:
 case 250:
 case 247:
 case 246:
 case 245:
 case 244:
 case 243:
 case 242:
 case 271:
 case 270:
 case 269:
 case 268:
 case 267:
 case 266:
 case 265:
 case 264:
 case 263:
 case 262:
 case 260:
 case 259:
 case 258:
 case 257:
 case 256:
 case 255:
 case 254:
 case 253:
 case 252:
 case 251:
 case 249:
 case 248:
   FUNC_3 ("DW_OP_breg%d: %ld", VAR_6 - 273,
    FUNC_4 (VAR_2, &VAR_7, 1));
   VAR_2 += VAR_7;
   break;

 case 137:
   FUNC_3 ("DW_OP_regx: %lu", FUNC_4 (VAR_2, &VAR_7, 0));
   VAR_2 += VAR_7;
   break;
 case 221:
   VAR_10 = 1;
   FUNC_3 ("DW_OP_fbreg: %ld", FUNC_4 (VAR_2, &VAR_7, 1));
   VAR_2 += VAR_7;
   break;
 case 241:
   VAR_8 = FUNC_4 (VAR_2, &VAR_7, 0);
   VAR_2 += VAR_7;
   FUNC_3 ("DW_OP_bregx: %lu %ld", VAR_8,
    FUNC_4 (VAR_2, &VAR_7, 1));
   VAR_2 += VAR_7;
   break;
 case 173:
   FUNC_3 ("DW_OP_piece: %lu", FUNC_4 (VAR_2, &VAR_7, 0));
   VAR_2 += VAR_7;
   break;
 case 226:
   FUNC_3 ("DW_OP_deref_size: %ld", (long) FUNC_1 (VAR_2++, 1));
   break;
 case 129:
   FUNC_3 ("DW_OP_xderef_size: %ld", (long) FUNC_1 (VAR_2++, 1));
   break;
 case 178:
   FUNC_3 ("DW_OP_nop");
   break;


 case 170:
   FUNC_3 ("DW_OP_push_object_address");
   break;
 case 240:


   FUNC_3 ("DW_OP_call2: <%lx>", (long) FUNC_1 (VAR_2, 2) + VAR_5);
   VAR_2 += 2;
   break;
 case 239:


   FUNC_3 ("DW_OP_call4: <%lx>", (long) FUNC_1 (VAR_2, 4) + VAR_5);
   VAR_2 += 4;
   break;
 case 238:
   FUNC_3 ("DW_OP_call_ref");
   break;
 case 220:
   FUNC_3 ("DW_OP_form_tls_address");
   break;


 case 278:
   FUNC_3 ("DW_OP_GNU_push_tls_address");
   break;

 default:
   if (VAR_6 >= VAR_1
       && VAR_6 <= VAR_0)
     FUNC_3 (FUNC_0("(User defined location op)"));
   else
     FUNC_3 (FUNC_0("(Unknown location op)"));

   return VAR_10;
 }


      if (VAR_2 < VAR_9)
 FUNC_3 ("; ");
    }

  return VAR_10;
}
