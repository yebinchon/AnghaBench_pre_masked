
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bpf_insn {size_t k; size_t jt; size_t jf; int code; } ;






 int const FUNC_0 (int ) ;
 int VAR_0 ;





 size_t VAR_1 ;


 int FUNC_1 (int ) ;



 int FUNC_2 (int ) ;



 int FUNC_3 (int ) ;





int
FUNC_4(const struct bpf_insn *VAR_2, int VAR_3)
{
 u_int VAR_4, VAR_5;
 const struct bpf_insn *VAR_6;

 if (VAR_3 < 1)
  return 0;

 for (VAR_4 = 0; VAR_4 < (u_int)VAR_3; ++VAR_4) {
  VAR_6 = &VAR_2[VAR_4];
  switch (FUNC_0(VAR_6->code)) {



  case 144:
  case 143:
   switch (FUNC_1(VAR_6->code)) {
   case 152:
    break;
   case 157:
   case 151:
   case 137:





    break;
   case 140:
    if (VAR_6->k >= VAR_1)
     return 0;
    break;
   case 142:
    break;
   default:
    return 0;
   }
   break;
  case 131:
  case 130:
   if (VAR_6->k >= VAR_1)
    return 0;
   break;
  case 155:
   switch (FUNC_2(VAR_6->code)) {
   case 156:
   case 129:
   case 136:
   case 134:
   case 154:
   case 128:
   case 141:
   case 132:
   case 135:
    break;
   case 153:
   case 138:




    if (FUNC_3(VAR_6->code) == VAR_0 && VAR_6->k == 0)
     return 0;
    break;
   default:
    return 0;
   }
   break;
  case 146:
   VAR_5 = VAR_4 + 1;
   switch (FUNC_2(VAR_6->code)) {
   case 150:
    if (VAR_5 + VAR_6->k >= (u_int)VAR_3)
     return 0;
    break;
   case 149:
   case 147:
   case 148:
   case 145:
    if (VAR_5 + VAR_6->jt >= (u_int)VAR_3 || VAR_5 + VAR_6->jf >= (u_int)VAR_3)
     return 0;
    break;
   default:
    return 0;
   }
   break;
  case 133:
   break;
  case 139:
   break;
  default:
   return 0;
  }
 }
 return FUNC_0(VAR_2[VAR_3 - 1].code) == 133;
}
