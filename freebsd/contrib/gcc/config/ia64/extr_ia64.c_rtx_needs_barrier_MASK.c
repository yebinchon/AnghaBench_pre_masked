
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_flags {int is_write; int is_sibcall; } ;
typedef int rtx ;
struct TYPE_2__ {int write_count; } ;
typedef int HOST_WIDE_INT ;




 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 char* FUNC_5 (int const) ;
 int FUNC_6 (int const) ;



 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;




 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;





 int FUNC_13 (int ) ;

 int VAR_8 ;
 int FUNC_14 (int ,int) ;
 int const FUNC_15 (int ,int) ;

 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int) ;

 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,struct reg_flags,int) ;
 int FUNC_21 (size_t,struct reg_flags,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_22 (int ,struct reg_flags,int) ;
 int FUNC_23 (int ,struct reg_flags*) ;

__attribute__((used)) static int
FUNC_24 (rtx VAR_10, struct reg_flags VAR_11, int VAR_12)
{
  int VAR_13, VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  const char *VAR_17;
  struct reg_flags VAR_18;
  rtx VAR_19;

  if (! VAR_10)
    return 0;

  VAR_18 = VAR_11;

  switch (FUNC_4 (VAR_10))
    {
    case 183:
      FUNC_23 (VAR_10, &VAR_18);
      VAR_16 = FUNC_22 (VAR_10, VAR_18, VAR_12);
      if (FUNC_4 (FUNC_12 (VAR_10)) != 226)
 {
   VAR_18.is_write = 1;
   VAR_16 |= FUNC_24 (FUNC_11 (VAR_10), VAR_18, VAR_12);
 }
      break;

    case 226:
      VAR_18.is_write = 0;
      VAR_16 |= FUNC_21 (VAR_0, VAR_18, VAR_12);



      if (! VAR_11.is_sibcall && ! VAR_9[VAR_5].write_count)
 {
   VAR_18.is_write = 1;
   VAR_16 |= FUNC_21 (VAR_6, VAR_18, VAR_12);
   VAR_16 |= FUNC_21 (VAR_1, VAR_18, VAR_12);
   VAR_16 |= FUNC_21 (VAR_5, VAR_18, VAR_12);
 }
      break;

    case 223:


      VAR_19 = FUNC_3 (VAR_10);
      FUNC_18 (!VAR_12);
      VAR_16 = FUNC_24 (VAR_19, VAR_11, 0);

      if (FUNC_4 (VAR_19) == 217)
 VAR_15 = 1;
      VAR_19 = FUNC_14 (VAR_19, 0);
      FUNC_18 (FUNC_4 (VAR_19) == 187
    && FUNC_10 (FUNC_9 (VAR_19)) == VAR_4);
      VAR_12 = FUNC_9 (VAR_19);
      if (VAR_15)
 ++VAR_12;

      VAR_16 |= FUNC_24 (FUNC_2 (VAR_10), VAR_11, VAR_12);
      return VAR_16;

    case 225:
    case 131:

      break;

    case 227:
    case 228:


      if (FUNC_4 (VAR_10) != 227
   || (FUNC_8 (VAR_10) && VAR_8))
 {


   if (! VAR_9[VAR_7].write_count)
     {
       VAR_18.is_write = 1;
       FUNC_21 (VAR_7, VAR_18, VAR_12);
     }
   return 1;
 }






      for (VAR_13 = FUNC_1 (VAR_10) - 1; VAR_13 >= 0; --VAR_13)
 if (FUNC_24 (FUNC_0 (VAR_10, VAR_13), VAR_11, VAR_12))
   VAR_16 = 1;
      break;

    case 193:
      for (VAR_13 = FUNC_17 (VAR_10, 0) - 1; VAR_13 >= 0; --VAR_13)
 {
   rtx VAR_20 = FUNC_16 (VAR_10, 0, VAR_13);
   switch (FUNC_4 (VAR_20))
     {
     case 183:
       FUNC_23 (VAR_20, &VAR_18);
       VAR_16 |= FUNC_22 (VAR_20, VAR_18, VAR_12);
       break;

     case 131:
     case 226:
     case 227:
       VAR_16 |= FUNC_24 (VAR_20, VAR_11, VAR_12);
       break;

     case 225:
     case 186:
       break;

     default:
       FUNC_19 ();
     }
 }
      for (VAR_13 = FUNC_17 (VAR_10, 0) - 1; VAR_13 >= 0; --VAR_13)
 {
   rtx VAR_21 = FUNC_16 (VAR_10, 0, VAR_13);
   if (FUNC_4 (VAR_21) == 183)
     {
       if (FUNC_4 (FUNC_12 (VAR_21)) != 226)
  {
    VAR_18.is_write = 1;
    VAR_16 |= FUNC_24 (FUNC_11 (VAR_21), VAR_18,
           VAR_12);
  }
     }
   else if (FUNC_4 (VAR_21) == 225 || FUNC_4 (VAR_21) == 186)
     VAR_16 |= FUNC_24 (VAR_21, VAR_11, VAR_12);
 }
      break;

    case 178:
      VAR_16 |= FUNC_24 (FUNC_13 (VAR_10), VAR_11, VAR_12);
      break;
    case 187:
      if (FUNC_9 (VAR_10) == VAR_3)
 {
   for (VAR_13 = 0; VAR_13 < 64; ++VAR_13)
     VAR_16 |= FUNC_21 (VAR_2 + VAR_13, VAR_11, VAR_12);
 }
      else
 VAR_16 = FUNC_20 (VAR_10, VAR_11, VAR_12);
      break;

    case 200:

      VAR_18.is_write = 0;
      VAR_16 = FUNC_24 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      break;

    case 220: case 221: case 219:
    case 177: case 206: case 222:
      break;


    case 189: case 190:
      FUNC_18 (FUNC_4 (FUNC_14 (VAR_10, 0)) == 187);

      VAR_18.is_write = 0;
      VAR_16 = FUNC_20 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      VAR_18.is_write = 1;
      VAR_16 |= FUNC_20 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      break;

    case 188:
      FUNC_18 (FUNC_4 (FUNC_14 (VAR_10, 0)) == 187);

      VAR_18.is_write = 0;
      VAR_16 = FUNC_20 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      VAR_16 |= FUNC_24 (FUNC_14 (VAR_10, 1), VAR_18, VAR_12);
      VAR_18.is_write = 1;
      VAR_16 |= FUNC_20 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      break;


    case 224: case 192: case 199: case 197: case 218:
    case 198: case 175: case 172: case 231: case 207:
    case 129: case 230: case 185: case 229: case 203:
    case 184: case 180: case 181: case 173: case 174:
    case 196: case 217: case 211: case 209: case 205:
    case 202: case 210: case 208: case 204: case 201:
      VAR_16 = FUNC_24 (FUNC_14 (VAR_10, 0), VAR_18, VAR_12);
      VAR_16 |= FUNC_24 (FUNC_14 (VAR_10, 1), VAR_18, VAR_12);
      break;

    case 195: case 194: case 182: case 128:
    case 176: case 213: case 212: case 214:
    case 215: case 170: case 171: case 232:
    case 179: case 216: case 191:
      VAR_16 = FUNC_24 (FUNC_14 (VAR_10, 0), VAR_11, VAR_12);
      break;

    case 130:




      VAR_16 = FUNC_24 (FUNC_14 (VAR_10, 0), VAR_11, VAR_12);
      break;

    case 169:
      switch (FUNC_15 (VAR_10, 1))
 {
 case 141:
 case 140:
 case 154:
 case 139:
 case 133:
 case 136:
 case 137:
        case 138:
        case 153:
 case 160:
 case 152:
 case 159:
          break;

 case 145:
 case 146:
   {
     HOST_WIDE_INT VAR_22 = FUNC_7 (FUNC_16 (VAR_10, 0, 1));
     HOST_WIDE_INT VAR_23 = (VAR_22 >> 3) & 63;

     VAR_16 = FUNC_24 (FUNC_16 (VAR_10, 0, 0), VAR_11, VAR_12);
     VAR_18.is_write = (FUNC_15 (VAR_10, 1) == 145);
     VAR_16 |= FUNC_21 (VAR_2 + VAR_23,
           VAR_18, VAR_12);
     break;
   }

 case 149:
 case 150:
 case 147:
 case 135:
        case 161:
 case 148:
 case 144:
 case 143:
 case 142:
 case 158:
        case 157:
   VAR_16 = FUNC_24 (FUNC_16 (VAR_10, 0, 0), VAR_11, VAR_12);
   break;

 case 151:
 case 134:
 case 155:
   VAR_16 = FUNC_24 (FUNC_16 (VAR_10, 0, 0), VAR_11, VAR_12);
   VAR_16 |= FUNC_24 (FUNC_16 (VAR_10, 0, 1), VAR_11, VAR_12);
   break;

        case 156:
   VAR_16 = FUNC_24 (FUNC_16 (VAR_10, 0, 1), VAR_11, VAR_12);
   VAR_16 |= FUNC_24 (FUNC_16 (VAR_10, 0, 2), VAR_11, VAR_12);
   break;

 default:
   FUNC_19 ();
 }
      break;

    case 132:
      switch (FUNC_15 (VAR_10, 1))
 {
 case 168:







   FUNC_21 (VAR_1, VAR_11, VAR_12);

   VAR_18.is_write = 1;
   FUNC_21 (VAR_5, VAR_18, VAR_12);
   return 1;

 case 162:
   VAR_16 = 1;
          break;

 case 167:
 case 165:
 case 166:
 case 164:
 case 163:
   return 0;

 default:
   FUNC_19 ();
 }
      break;

    case 186:
      VAR_18.is_write = 0;
      VAR_16 = FUNC_21 (VAR_6, VAR_11, VAR_12);
      VAR_16 |= FUNC_21 (VAR_1, VAR_11, VAR_12);

      VAR_18.is_write = 1;
      VAR_16 |= FUNC_21 (VAR_0, VAR_18, VAR_12);
      VAR_16 |= FUNC_21 (VAR_5, VAR_18, VAR_12);
      break;

    default:
      VAR_17 = FUNC_5 (FUNC_4 (VAR_10));
      for (VAR_13 = FUNC_6 (FUNC_4 (VAR_10)) - 1; VAR_13 >= 0; VAR_13--)
 switch (VAR_17[VAR_13])
   {
   case '0':
   case 'i':
   case 'n':
   case 'w':
   case 's':
   case 'S':
     break;

   case 'e':
     if (FUNC_24 (FUNC_14 (VAR_10, VAR_13), VAR_11, VAR_12))
       VAR_16 = 1;
     break;

   case 'E':
     for (VAR_14 = FUNC_17 (VAR_10, VAR_13) - 1; VAR_14 >= 0; --VAR_14)
       if (FUNC_24 (FUNC_16 (VAR_10, VAR_13, VAR_14), VAR_11, VAR_12))
  VAR_16 = 1;
     break;

   default:
     FUNC_19 ();
   }
      break;
    }
  return VAR_16;
}
