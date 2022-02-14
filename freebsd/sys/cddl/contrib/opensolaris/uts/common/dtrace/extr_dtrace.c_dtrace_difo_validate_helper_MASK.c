
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_3__ {size_t dtdo_len; int * dtdo_buf; } ;
typedef TYPE_1__ dtrace_difo_t ;
typedef int dif_instr_t ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 int FUNC_3 (uint_t,char const*) ;

__attribute__((used)) static int
FUNC_4(dtrace_difo_t *VAR_37)
{
 int (*VAR_38)(uint_t VAR_39, const char *, ...) = FUNC_3;
 int VAR_40 = 0;
 uint_t VAR_41;

 for (VAR_41 = 0; VAR_41 < VAR_37->dtdo_len; VAR_41++) {
  dif_instr_t VAR_42 = VAR_37->dtdo_buf[VAR_41];

  uint_t VAR_43 = FUNC_2(VAR_42);
  uint_t VAR_44 = FUNC_1(VAR_42);
  uint_t VAR_45 = FUNC_0(VAR_42);

  switch (VAR_45) {
  case 168:
  case 128:
  case 195:
  case 152:
  case 149:
  case 151:
  case 139:
  case 197:
  case 171:
  case 155:
  case 137:
  case 150:
  case 129:
  case 181:
  case 169:
  case 172:
  case 163:
  case 162:
  case 161:
  case 160:
  case 159:
  case 158:
  case 157:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 148:
  case 145:
  case 141:
  case 140:
  case 196:
  case 182:
  case 156:
  case 138:
  case 194:
  case 193:
  case 184:
  case 192:
  case 189:
  case 191:
  case 190:
  case 188:
  case 185:
  case 187:
  case 186:
  case 164:
  case 170:
  case 167:
  case 180:
  case 153:
  case 154:
  case 179:
  case 176:
  case 146:
  case 144:
  case 166:
  case 165:
   break;

  case 177:
   if (VAR_43 >= VAR_31)
    break;

   if (VAR_43 >= VAR_25 && VAR_43 <= VAR_26)
    break;

   if (VAR_43 == VAR_27 || VAR_43 == VAR_32 ||
       VAR_43 == VAR_33 || VAR_43 == VAR_34 ||
       VAR_43 == VAR_28 ||
       VAR_43 == VAR_29 || VAR_43 == VAR_36 ||
       VAR_43 == VAR_35 || VAR_43 == VAR_30)
    break;

   VAR_40 += VAR_38(VAR_41, "illegal variable %u\n", VAR_43);
   break;

  case 175:
  case 173:
  case 178:
  case 174:
   VAR_40 += VAR_38(VAR_41, "illegal dynamic variable load\n");
   break;

  case 142:
  case 147:
  case 143:
   VAR_40 += VAR_38(VAR_41, "illegal dynamic variable store\n");
   break;

  case 183:
   if (VAR_44 == VAR_0 ||
       VAR_44 == VAR_1 ||
       VAR_44 == VAR_2 ||
       VAR_44 == VAR_4 ||
       VAR_44 == VAR_3 ||
       VAR_44 == VAR_8 ||
       VAR_44 == VAR_9 ||
       VAR_44 == VAR_10 ||
       VAR_44 == VAR_11 ||
       VAR_44 == VAR_12 ||
       VAR_44 == VAR_13 ||
       VAR_44 == VAR_24 ||
       VAR_44 == VAR_19 ||
       VAR_44 == VAR_20 ||
       VAR_44 == VAR_21 ||
       VAR_44 == VAR_22 ||
       VAR_44 == VAR_23 ||
       VAR_44 == VAR_7 ||
       VAR_44 == VAR_5 ||
       VAR_44 == VAR_6 ||
       VAR_44 == VAR_18 ||
       VAR_44 == VAR_16 ||
       VAR_44 == VAR_17 ||
       VAR_44 == VAR_14)
    break;





   VAR_40 += VAR_38(VAR_41, "invalid subr %u\n", VAR_44);
   break;

  default:
   VAR_40 += VAR_38(VAR_41, "invalid opcode %u\n",
       FUNC_0(VAR_42));
  }
 }

 return (VAR_40);
}
