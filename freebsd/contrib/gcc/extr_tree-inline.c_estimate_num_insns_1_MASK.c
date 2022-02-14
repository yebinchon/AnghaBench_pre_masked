
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;


 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static tree
FUNC_16 (tree *VAR_3, int *VAR_4, void *VAR_5)
{
  int *VAR_6 = (int *) VAR_5;
  tree VAR_7 = *VAR_3;

  if (FUNC_4 (VAR_7))
    {
      *VAR_4 = 0;
      return ((void*)0);
    }



  else if (FUNC_0 (VAR_7) || FUNC_6 (VAR_7))
    return ((void*)0);

  switch (FUNC_8 (VAR_7))
    {

    case 155:
    case 154:
    case 250:
    case 240:
    case 254:
    case 214:
    case 260:
    case 201:
    case 258:
    case 259:
    case 194:
    case 229:
    case 226:
    case 239:
    case 256:
    case 129:
    case 195:
    case 132:
    case 161:
    case 261:
    case 241:
    case 174:
    case 246:
    case 160:
    case 245:
    case 233:
    case 159:
    case 231:
    case 196:
    case 227:
    case 137:
    case 145:
    case 144:
    case 211:
    case 217:
    case 166:
    case 228:
    case 209:
    case 180:
    case 128:
    case 192:
    case 185:
    case 191:
      break;





    case 215:
    case 212:
    case 171:
    case 242:
    case 136:
    case 158:
      *VAR_4 = 0;
      return ((void*)0);
    case 213:
    case 200:

      if (FUNC_8 (FUNC_9 (VAR_7, 1)) == 156)
 break;


    case 156:
      VAR_7 = FUNC_9 (VAR_7, 0);

      if (FUNC_15 (VAR_7))
 break;


    case 236:
      *VAR_6 += FUNC_12 (FUNC_10 (VAR_7));
      break;



    case 238:
    case 135:

    case 179:
    case 203:
    case 199:

    case 222:
    case 225:
    case 224:
    case 223:

    case 198:
    case 221:
    case 202:
    case 204:
    case 262:

    case 207:
    case 162:
    case 208:
    case 163:
    case 134:
    case 133:

    case 253:
    case 251:
    case 255:
    case 252:

    case 151:
    case 148:
    case 150:
    case 147:
    case 146:
    case 149:

    case 205:
    case 210:
    case 216:
    case 218:
    case 232:
    case 197:
    case 181:
    case 138:

    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 206:

    case 235:

    case 237:

    case 176:
    case 175:
    case 178:
    case 177:

    case 157:

    case 257:

    case 172:

    case 170:
    case 169:
    case 168:
    case 130:
    case 234:

    case 131:

    case 167:
      *VAR_6 += 1;
      break;



    case 153:
    case 244:
    case 220:
    case 165:
    case 230:
    case 152:
    case 243:
    case 219:
    case 164:
    case 173:
      *VAR_6 += 10;
      break;
    case 247:
      {
 tree VAR_8 = FUNC_14 (VAR_7);
 tree VAR_9;

 if (VAR_8 && FUNC_2 (VAR_8) == VAR_0)
   switch (FUNC_3 (VAR_8))
     {
     case 249:
       *VAR_4 = 0;
       return VAR_1;
     case 248:
       return VAR_1;
     default:
       break;
     }



 if (!VAR_8)
   {
     for (VAR_9 = FUNC_9 (VAR_7, 1); VAR_9; VAR_9 = FUNC_7 (VAR_9))
       *VAR_6 += FUNC_12 (FUNC_10 (FUNC_11 (VAR_9)));
   }
 else
   {
     for (VAR_9 = FUNC_1 (VAR_8); VAR_9; VAR_9 = FUNC_7 (VAR_9))
       *VAR_6 += FUNC_12 (FUNC_10 (VAR_9));
   }

 *VAR_6 += FUNC_5 (VAR_2);
 break;
      }

    case 186:
    case 189:
    case 183:
    case 182:
    case 184:
    case 188:
    case 187:
    case 190:
    case 193:

      *VAR_6 += 40;
      break;

    default:
      FUNC_13 ();
    }
  return ((void*)0);
}
