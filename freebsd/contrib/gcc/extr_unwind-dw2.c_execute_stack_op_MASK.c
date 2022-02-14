
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int dummy; } ;
typedef int stack ;
typedef enum dwarf_location_atom { ____Placeholder_dwarf_location_atom } dwarf_location_atom ;
typedef int _Unwind_Word ;
typedef int _Unwind_Sword ;
typedef int _Unwind_Ptr ;
 int FUNC_0 (struct _Unwind_Context*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (unsigned char const*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (unsigned char const*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (unsigned char const*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 unsigned char* FUNC_12 (unsigned char const*,int*) ;
 unsigned char* FUNC_13 (unsigned char const*,int*) ;

__attribute__((used)) static _Unwind_Word
FUNC_14 (const unsigned char *VAR_0, const unsigned char *VAR_1,
    struct _Unwind_Context *VAR_2, _Unwind_Word VAR_3)
{
  _Unwind_Word VAR_4[64];
  int VAR_5;

  VAR_4[0] = VAR_3;
  VAR_5 = 1;

  while (VAR_0 < VAR_1)
    {
      enum dwarf_location_atom VAR_6 = *VAR_0++;
      _Unwind_Word VAR_7, VAR_8, VAR_9;
      _Unwind_Sword VAR_10, VAR_11;

      switch (VAR_6)
 {
 case 212:
 case 211:
 case 200:
 case 189:
 case 186:
 case 185:
 case 184:
 case 183:
 case 182:
 case 181:
 case 210:
 case 209:
 case 208:
 case 207:
 case 206:
 case 205:
 case 204:
 case 203:
 case 202:
 case 201:
 case 199:
 case 198:
 case 197:
 case 196:
 case 195:
 case 194:
 case 193:
 case 192:
 case 191:
 case 190:
 case 188:
 case 187:
   VAR_7 = VAR_6 - 212;
   break;

 case 267:
   VAR_7 = (_Unwind_Word) (_Unwind_Ptr) FUNC_11 (VAR_0);
   VAR_0 += sizeof (void *);
   break;

 case 230:
   VAR_7 = FUNC_4 (VAR_0);
   VAR_0 += 1;
   break;
 case 231:
   VAR_7 = FUNC_3 (VAR_0);
   VAR_0 += 1;
   break;
 case 228:
   VAR_7 = FUNC_6 (VAR_0);
   VAR_0 += 2;
   break;
 case 229:
   VAR_7 = FUNC_5 (VAR_0);
   VAR_0 += 2;
   break;
 case 226:
   VAR_7 = FUNC_8 (VAR_0);
   VAR_0 += 4;
   break;
 case 227:
   VAR_7 = FUNC_7 (VAR_0);
   VAR_0 += 4;
   break;
 case 224:
   VAR_7 = FUNC_10 (VAR_0);
   VAR_0 += 8;
   break;
 case 225:
   VAR_7 = FUNC_9 (VAR_0);
   VAR_0 += 8;
   break;
 case 222:
   VAR_0 = FUNC_13 (VAR_0, &VAR_7);
   break;
 case 223:
   VAR_0 = FUNC_12 (VAR_0, &VAR_11);
   VAR_7 = VAR_11;
   break;

 case 167:
 case 166:
 case 155:
 case 144:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 165:
 case 164:
 case 163:
 case 162:
 case 161:
 case 160:
 case 159:
 case 158:
 case 157:
 case 156:
 case 154:
 case 153:
 case 152:
 case 151:
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 143:
 case 142:
   VAR_7 = FUNC_0 (VAR_2, VAR_6 - 167);
   break;
 case 135:
   VAR_0 = FUNC_13 (VAR_0, &VAR_8);
   VAR_7 = FUNC_0 (VAR_2, VAR_8);
   break;

 case 264:
 case 263:
 case 252:
 case 241:
 case 238:
 case 237:
 case 236:
 case 235:
 case 234:
 case 233:
 case 262:
 case 261:
 case 260:
 case 259:
 case 258:
 case 257:
 case 256:
 case 255:
 case 254:
 case 253:
 case 251:
 case 250:
 case 249:
 case 248:
 case 247:
 case 246:
 case 245:
 case 244:
 case 243:
 case 242:
 case 240:
 case 239:
   VAR_0 = FUNC_12 (VAR_0, &VAR_10);
   VAR_7 = FUNC_0 (VAR_2, VAR_6 - 264) + VAR_10;
   break;
 case 232:
   VAR_0 = FUNC_13 (VAR_0, &VAR_8);
   VAR_0 = FUNC_12 (VAR_0, &VAR_10);
   VAR_7 = FUNC_0 (VAR_2, VAR_8) + VAR_10;
   break;

 case 217:
   FUNC_1 (VAR_5);
   VAR_7 = VAR_4[VAR_5 - 1];
   break;

 case 218:
   FUNC_1 (VAR_5);
   VAR_5 -= 1;
   goto no_push;

 case 170:
   VAR_10 = *VAR_0++;
   FUNC_1 (VAR_10 < VAR_5 - 1);
   VAR_7 = VAR_4[VAR_5 - 1 - VAR_10];
   break;

 case 171:
   FUNC_1 (VAR_5 >= 2);
   VAR_7 = VAR_4[VAR_5 - 2];
   break;

 case 129:
   {
     _Unwind_Word VAR_12;
     FUNC_1 (VAR_5 >= 2);
     VAR_12 = VAR_4[VAR_5 - 1];
     VAR_4[VAR_5 - 1] = VAR_4[VAR_5 - 2];
     VAR_4[VAR_5 - 2] = VAR_12;
     goto no_push;
   }

 case 134:
   {
     _Unwind_Word VAR_13, VAR_14, VAR_15;

     FUNC_1 (VAR_5 >= 3);
     VAR_13 = VAR_4[VAR_5 - 1];
     VAR_14 = VAR_4[VAR_5 - 2];
     VAR_15 = VAR_4[VAR_5 - 3];
     VAR_4[VAR_5 - 1] = VAR_14;
     VAR_4[VAR_5 - 2] = VAR_15;
     VAR_4[VAR_5 - 3] = VAR_13;
     goto no_push;
   }

 case 221:
 case 220:
 case 268:
 case 175:
 case 173:
 case 168:

   FUNC_1 (VAR_5);
   VAR_5 -= 1;

   VAR_7 = VAR_4[VAR_5];

   switch (VAR_6)
     {
     case 221:
       {
  void *VAR_16 = (void *) (_Unwind_Ptr) VAR_7;
  VAR_7 = (_Unwind_Ptr) FUNC_11 (VAR_16);
       }
       break;

     case 220:
       {
  void *VAR_17 = (void *) (_Unwind_Ptr) VAR_7;
  switch (*VAR_0++)
    {
    case 1:
      VAR_7 = FUNC_4 (VAR_17);
      break;
    case 2:
      VAR_7 = FUNC_6 (VAR_17);
      break;
    case 4:
      VAR_7 = FUNC_8 (VAR_17);
      break;
    case 8:
      VAR_7 = FUNC_10 (VAR_17);
      break;
    default:
      FUNC_2 ();
    }
       }
       break;

     case 268:
       if ((_Unwind_Sword) VAR_7 < 0)
  VAR_7 = -VAR_7;
       break;
     case 175:
       VAR_7 = -VAR_7;
       break;
     case 173:
       VAR_7 = ~VAR_7;
       break;
     case 168:
       VAR_0 = FUNC_13 (VAR_0, &VAR_9);
       VAR_7 += VAR_9;
       break;

     default:
       FUNC_2 ();
     }
   break;

 case 266:
 case 219:
 case 179:
 case 178:
 case 177:
 case 172:
 case 169:
 case 133:
 case 132:
 case 131:
 case 128:
 case 213:
 case 215:
 case 216:
 case 180:
 case 214:
 case 176:
   {

     _Unwind_Word VAR_18, VAR_19;
     FUNC_1 (VAR_5 >= 2);
     VAR_5 -= 2;

     VAR_19 = VAR_4[VAR_5];
     VAR_18 = VAR_4[VAR_5 + 1];

     switch (VAR_6)
       {
       case 266:
  VAR_7 = VAR_19 & VAR_18;
  break;
       case 219:
  VAR_7 = (_Unwind_Sword) VAR_19 / (_Unwind_Sword) VAR_18;
  break;
       case 179:
  VAR_7 = VAR_19 - VAR_18;
  break;
       case 178:
  VAR_7 = (_Unwind_Sword) VAR_19 % (_Unwind_Sword) VAR_18;
  break;
       case 177:
  VAR_7 = VAR_19 * VAR_18;
  break;
       case 172:
  VAR_7 = VAR_19 | VAR_18;
  break;
       case 169:
  VAR_7 = VAR_19 + VAR_18;
  break;
       case 133:
  VAR_7 = VAR_19 << VAR_18;
  break;
       case 132:
  VAR_7 = VAR_19 >> VAR_18;
  break;
       case 131:
  VAR_7 = (_Unwind_Sword) VAR_19 >> VAR_18;
  break;
       case 128:
  VAR_7 = VAR_19 ^ VAR_18;
  break;
       case 213:
  VAR_7 = (_Unwind_Sword) VAR_18 <= (_Unwind_Sword) VAR_19;
  break;
       case 215:
  VAR_7 = (_Unwind_Sword) VAR_18 >= (_Unwind_Sword) VAR_19;
  break;
       case 216:
  VAR_7 = (_Unwind_Sword) VAR_18 == (_Unwind_Sword) VAR_19;
  break;
       case 180:
  VAR_7 = (_Unwind_Sword) VAR_18 < (_Unwind_Sword) VAR_19;
  break;
       case 214:
  VAR_7 = (_Unwind_Sword) VAR_18 > (_Unwind_Sword) VAR_19;
  break;
       case 176:
  VAR_7 = (_Unwind_Sword) VAR_18 != (_Unwind_Sword) VAR_19;
  break;

       default:
  FUNC_2 ();
       }
   }
   break;

 case 130:
   VAR_10 = FUNC_5 (VAR_0);
   VAR_0 += 2;
   VAR_0 += VAR_10;
   goto no_push;

 case 265:
   FUNC_1 (VAR_5);
   VAR_5 -= 1;

   VAR_10 = FUNC_5 (VAR_0);
   VAR_0 += 2;
   if (VAR_4[VAR_5] != 0)
     VAR_0 += VAR_10;
   goto no_push;

 case 174:
   goto no_push;

 default:
   FUNC_2 ();
 }


      FUNC_1 ((size_t) VAR_5 < sizeof(VAR_4)/sizeof(*VAR_4));
      VAR_4[VAR_5++] = VAR_7;
    no_push:;
    }



  FUNC_1 (VAR_5);
  VAR_5 -= 1;
  return VAR_4[VAR_5];
}
