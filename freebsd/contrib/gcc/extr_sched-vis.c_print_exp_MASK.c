
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;






 int VAR_0 ;


 int const VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int const FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int const) ;




 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;

 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;


 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,scalar_t__,int) ;
 char* FUNC_11 (char*,char*,char const*) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_3, rtx VAR_4, int VAR_5)
{
  char VAR_6[VAR_0];
  const char *VAR_7[4];
  char *VAR_8 = VAR_3;
  const char *VAR_9 = (char *) 0;
  const char *VAR_10;
  rtx VAR_11[4];
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
    {
      VAR_7[VAR_12] = (char *) 0;
      VAR_11[VAR_12] = VAR_2;
    }

  switch (FUNC_1 (VAR_4))
    {
    case 153:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      if (FUNC_1 (FUNC_5 (VAR_4, 1)) == VAR_1
   && FUNC_3 (FUNC_5 (VAR_4, 1)) < 0)
 {
   VAR_7[1] = "-";
   VAR_11[1] = FUNC_0 (-FUNC_3 (FUNC_5 (VAR_4, 1)));
 }
      else
 {
   VAR_7[1] = "+";
   VAR_11[1] = FUNC_5 (VAR_4, 1);
 }
      break;
    case 163:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "+low(";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      VAR_7[2] = ")";
      break;
    case 159:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "-";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 179:
      VAR_9 = "cmp";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 155:
      VAR_7[0] = "-";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 157:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "*";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 178:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "/";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 138:
      VAR_9 = "udiv";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 158:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "%";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 135:
      VAR_9 = "umod";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 142:
      VAR_9 = "smin";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 143:
      VAR_9 = "smax";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 136:
      VAR_9 = "umin";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 137:
      VAR_9 = "umax";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 154:
      VAR_7[0] = "!";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 183:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "&";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 166:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "|";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 130:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "^";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 182:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "<<";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 162:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = " 0>>";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 181:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = ">>";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 147:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "<-<";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 146:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = ">->";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 184:
      VAR_9 = "abs";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 141:
      VAR_9 = "sqrt";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 176:
      VAR_9 = "ffs";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 177:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "==";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 156:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "!=";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 169:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = ">";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 168:
      VAR_9 = "gtu";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 161:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "<";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 160:
      VAR_9 = "ltu";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 171:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = ">=";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 170:
      VAR_9 = "geu";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 165:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "<=";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 164:
      VAR_9 = "leu";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      break;
    case 144:
      VAR_9 = (VAR_5) ? "sign_extract" : "sxt";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      VAR_11[2] = FUNC_5 (VAR_4, 2);
      break;
    case 128:
      VAR_9 = (VAR_5) ? "zero_extract" : "zxt";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      VAR_11[2] = FUNC_5 (VAR_4, 2);
      break;
    case 145:
      VAR_9 = (VAR_5) ? "sign_extend" : "sxn";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 129:
      VAR_9 = (VAR_5) ? "zero_extend" : "zxn";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 173:
      VAR_9 = (VAR_5) ? "float_extend" : "fxn";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 139:
      VAR_9 = (VAR_5) ? "trunc" : "trn";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 172:
      VAR_9 = (VAR_5) ? "float_trunc" : "ftr";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 174:
      VAR_9 = (VAR_5) ? "float" : "flt";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 133:
      VAR_9 = (VAR_5) ? "uns_float" : "ufl";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 175:
      VAR_9 = "fix";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 134:
      VAR_9 = (VAR_5) ? "uns_fix" : "ufx";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 149:
      VAR_7[0] = "--";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 148:
      VAR_7[0] = "++";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      break;
    case 152:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "--";
      break;
    case 151:
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = "++";
      break;
    case 180:
      VAR_7[0] = "call ";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      if (VAR_5)
 {
   VAR_7[1] = " argc:";
   VAR_11[1] = FUNC_5 (VAR_4, 1);
 }
      break;
    case 167:
      VAR_7[0] = "{(";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_7[1] = ")?";
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      VAR_7[2] = ":";
      VAR_11[2] = FUNC_5 (VAR_4, 2);
      VAR_7[3] = "}";
      break;
    case 140:
      VAR_9 = "trap_if";
      VAR_11[0] = FUNC_4 (VAR_4);
      break;
    case 150:
      VAR_9 = "prefetch";
      VAR_11[0] = FUNC_5 (VAR_4, 0);
      VAR_11[1] = FUNC_5 (VAR_4, 1);
      VAR_11[2] = FUNC_5 (VAR_4, 2);
      break;
    case 132:
    case 131:
      {
 VAR_8 = FUNC_11 (VAR_3, VAR_8, "unspec");
 if (FUNC_1 (VAR_4) == 131)
   VAR_8 = FUNC_11 (VAR_3, VAR_8, "/v");
 VAR_8 = FUNC_11 (VAR_3, VAR_8, "[");
 VAR_10 = "";
 for (VAR_12 = 0; VAR_12 < FUNC_8 (VAR_4, 0); VAR_12++)
   {
     FUNC_9 (VAR_6, FUNC_7 (VAR_4, 0, VAR_12), VAR_5);
     VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_10);
     VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_6);
     VAR_10 = ",";
   }
 VAR_8 = FUNC_11 (VAR_3, VAR_8, "] ");
 FUNC_12 (VAR_6, "%d", FUNC_6 (VAR_4, 1));
 VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_6);
      }
      break;
    default:

      VAR_7[0] = FUNC_2 (FUNC_1 (VAR_4));
      break;
    }


  if (VAR_9)
    {
      VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_9);
      VAR_8 = FUNC_11 (VAR_3, VAR_8, "(");
    }

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
    {
      if (VAR_7[VAR_12])
 VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_7[VAR_12]);

      if (VAR_11[VAR_12])
 {
   if (VAR_9 && VAR_12 != 0)
     VAR_8 = FUNC_11 (VAR_3, VAR_8, ",");

   FUNC_10 (VAR_6, VAR_11[VAR_12], VAR_5);
   VAR_8 = FUNC_11 (VAR_3, VAR_8, VAR_6);
 }
    }

  if (VAR_9)
    VAR_8 = FUNC_11 (VAR_3, VAR_8, ")");
}
