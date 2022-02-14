
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int dump_info_p ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3 (dump_info_p VAR_0, tree VAR_1)
{
  switch (FUNC_1 (VAR_1)) {
    case 144:
      FUNC_2 (VAR_0, "new");
      break;
    case 128:
      FUNC_2 (VAR_0, "vecnew");
      break;
    case 156:
      FUNC_2 (VAR_0, "delete");
      break;
    case 129:
      FUNC_2 (VAR_0, "vecdelete");
      break;
    case 130:
      FUNC_2 (VAR_0, "pos");
      break;
    case 145:
      FUNC_2 (VAR_0, "neg");
      break;
    case 165:
      FUNC_2 (VAR_0, "addr");
      break;
    case 152:
      FUNC_2(VAR_0, "deref");
      break;
    case 161:
      FUNC_2(VAR_0, "not");
      break;
    case 132:
      FUNC_2(VAR_0, "lnot");
      break;
    case 137:
      FUNC_2(VAR_0, "preinc");
      break;
    case 138:
      FUNC_2(VAR_0, "predec");
      break;
    case 141:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "plusassign");
      else
 FUNC_2(VAR_0, "plus");
      break;
    case 147:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "minusassign");
      else
 FUNC_2(VAR_0, "minus");
      break;
    case 146:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "multassign");
      else
 FUNC_2 (VAR_0, "mult");
      break;
    case 135:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "divassign");
      else
 FUNC_2 (VAR_0, "div");
      break;
    case 134:
      if (FUNC_0 (VAR_1))
  FUNC_2 (VAR_0, "modassign");
      else
 FUNC_2 (VAR_0, "mod");
      break;
    case 163:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "andassign");
      else
 FUNC_2 (VAR_0, "and");
      break;
    case 162:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "orassign");
      else
 FUNC_2 (VAR_0, "or");
      break;
    case 160:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "xorassign");
      else
 FUNC_2 (VAR_0, "xor");
      break;
    case 150:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "lshiftassign");
      else
 FUNC_2 (VAR_0, "lshift");
      break;
    case 136:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "rshiftassign");
      else
 FUNC_2 (VAR_0, "rshift");
      break;
    case 155:
      FUNC_2 (VAR_0, "eq");
      break;
    case 143:
      FUNC_2 (VAR_0, "ne");
      break;
    case 149:
      FUNC_2 (VAR_0, "lt");
      break;
    case 153:
      FUNC_2 (VAR_0, "gt");
      break;
    case 151:
      FUNC_2 (VAR_0, "le");
      break;
    case 154:
      FUNC_2 (VAR_0, "ge");
      break;
    case 133:
      FUNC_2 (VAR_0, "land");
      break;
    case 131:
      FUNC_2 (VAR_0, "lor");
      break;
    case 157:
      FUNC_2 (VAR_0, "compound");
      break;
    case 148:
      FUNC_2 (VAR_0, "memref");
      break;
    case 158:
      FUNC_2 (VAR_0, "ref");
      break;
    case 164:
      FUNC_2 (VAR_0, "subs");
      break;
    case 139:
      FUNC_2 (VAR_0, "postinc");
      break;
    case 140:
      FUNC_2 (VAR_0, "postdec");
      break;
    case 159:
      FUNC_2 (VAR_0, "call");
      break;
    case 142:
      if (FUNC_0 (VAR_1))
 FUNC_2 (VAR_0, "assign");
      break;
    default:
      break;
  }
}
