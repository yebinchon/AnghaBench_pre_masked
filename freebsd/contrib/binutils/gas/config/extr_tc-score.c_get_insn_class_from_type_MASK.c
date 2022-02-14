
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum score_insn_type { ____Placeholder_score_insn_type } score_insn_type ;
typedef enum insn_class { ____Placeholder_insn_class } insn_class ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
__attribute__((used)) static enum insn_class
FUNC_1 (enum score_insn_type VAR_5)
{
  enum insn_class VAR_6 = (int) VAR_0;

  switch (VAR_5)
    {
    case 165:
    case 164:
    case 144:
    case 152:
    case 163:
    case 168:
    case 171:
    case 161:
    case 167:
    case 151:
    case 143:
    case 133:
    case 162:
    case 174:
      VAR_6 = VAR_1;
      break;
    case 159:
    case 132:
    case 134:
    case 160:
    case 181:
    case 166:
    case 154:
    case 142:
    case 150:
    case 138:
    case 139:
    case 146:
    case 147:
    case 156:
    case 141:
    case 149:
    case 170:
    case 169:
    case 158:
    case 130:
    case 131:
    case 155:
    case 136:
    case 135:
    case 172:
    case 180:
    case 128:
    case 140:
    case 137:
    case 148:
    case 129:
    case 157:
    case 173:
    case 153:
    case 145:
    case 179:
    case 178:
    case 175:
      VAR_6 = VAR_2;
      break;
    case 177:
      VAR_6 = VAR_3;
      break;
    case 176:
      VAR_6 = VAR_4;
      break;
    default:
      FUNC_0 ();
      break;
    }
  return VAR_6;
}
