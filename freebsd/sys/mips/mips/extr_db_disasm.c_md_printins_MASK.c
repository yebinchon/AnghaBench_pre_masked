
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {size_t rt; size_t rs; size_t op; scalar_t__ imm; } ;
struct TYPE_7__ {int op; int target; } ;
struct TYPE_6__ {size_t func; size_t fmt; int ft; int fs; int fd; } ;
struct TYPE_8__ {size_t func; size_t rt; size_t rd; size_t rs; int shamt; } ;
struct TYPE_10__ {int word; TYPE_4__ IType; TYPE_2__ JType; TYPE_1__ FRType; TYPE_3__ RType; } ;
typedef TYPE_5__ InstFmt ;


 size_t VAR_0 ;


 size_t VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char*,...) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int
FUNC_1(int VAR_10, int VAR_11)
{
 InstFmt VAR_12;
 int VAR_13 = 0;

 VAR_12.word = VAR_10;

 switch (VAR_12.JType.op) {
 case 137:
  if (VAR_12.word == 0) {
   FUNC_0("nop");
   break;
  }
  if (VAR_12.RType.func == VAR_1 && VAR_12.RType.rt == 0) {
   FUNC_0("move\t%s,%s",
       VAR_8[VAR_12.RType.rd], VAR_8[VAR_12.RType.rs]);
   break;
  }
  FUNC_0("%s", VAR_9[VAR_12.RType.func]);
  switch (VAR_12.RType.func) {
  case 139:
  case 134:
  case 136:
  case 173:
  case 167:
  case 170:
  case 172:
  case 166:
  case 169:
   FUNC_0("\t%s,%s,%d", VAR_8[VAR_12.RType.rd],
       VAR_8[VAR_12.RType.rt], VAR_12.RType.shamt);
   break;

  case 138:
  case 133:
  case 135:
  case 171:
  case 165:
  case 168:
   FUNC_0("\t%s,%s,%s", VAR_8[VAR_12.RType.rd],
       VAR_8[VAR_12.RType.rt], VAR_8[VAR_12.RType.rs]);
   break;

  case 150:
  case 149:
   FUNC_0("\t%s", VAR_8[VAR_12.RType.rd]);
   break;

  case 161:
  case 162:
   VAR_13 = 1;

  case 146:
  case 147:
   FUNC_0("\t%s", VAR_8[VAR_12.RType.rs]);
   break;

  case 145:
  case 144:
  case 175:
  case 174:
  case 179:
  case 178:
  case 181:
  case 180:
   FUNC_0("\t%s,%s",
       VAR_8[VAR_12.RType.rs], VAR_8[VAR_12.RType.rt]);
   break;

  case 129:
  case 130:
   break;

  case 188:
   FUNC_0("\t%d", (VAR_12.RType.rs << 5) | VAR_12.RType.rt);
   break;

  default:
   FUNC_0("\t%s,%s,%s", VAR_8[VAR_12.RType.rd],
       VAR_8[VAR_12.RType.rs], VAR_8[VAR_12.RType.rt]);
  }
  break;

 case 199:
  FUNC_0("%s\t%s,", VAR_2[VAR_12.IType.rt],
      VAR_8[VAR_12.IType.rs]);
  goto pr_displ;

 case 192:
 case 191:
 case 194:
 case 193:
  FUNC_0("%s\t%s,", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rs]);
  goto pr_displ;

 case 196:
 case 195:
  if (VAR_12.IType.rs == 0 && VAR_12.IType.rt == 0) {
   FUNC_0("b\t");
   goto pr_displ;
  }

 case 190:
 case 189:
  FUNC_0("%s\t%s,%s,", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rs], VAR_8[VAR_12.IType.rt]);
 pr_displ:
  VAR_13 = 1;
  FUNC_0("0x%08x", VAR_11 + 4 + ((short)VAR_12.IType.imm << 2));
  break;

 case 186:
  switch (VAR_12.RType.rs) {
  case 198:
  case 197:
   FUNC_0("bc0%c\t",
       "ft"[VAR_12.RType.rt & VAR_0]);
   goto pr_displ;

  case 148:
   FUNC_0("mtc0\t%s,%s",
       VAR_8[VAR_12.RType.rt], VAR_4[VAR_12.RType.rd]);
   break;

  case 176:
   FUNC_0("dmtc0\t%s,%s",
       VAR_8[VAR_12.RType.rt], VAR_4[VAR_12.RType.rd]);
   break;

  case 151:
   FUNC_0("mfc0\t%s,%s",
       VAR_8[VAR_12.RType.rt], VAR_4[VAR_12.RType.rd]);
   break;

  case 177:
   FUNC_0("dmfc0\t%s,%s",
       VAR_8[VAR_12.RType.rt], VAR_4[VAR_12.RType.rd]);
   break;

  default:
   FUNC_0("%s", VAR_3[VAR_12.FRType.func]);
  }
  break;

 case 185:
  switch (VAR_12.RType.rs) {
  case 198:
  case 197:
   FUNC_0("bc1%c\t",
       "ft"[VAR_12.RType.rt & VAR_0]);
   goto pr_displ;

  case 148:
   FUNC_0("mtc1\t%s,f%d",
       VAR_8[VAR_12.RType.rt], VAR_12.RType.rd);
   break;

  case 151:
   FUNC_0("mfc1\t%s,f%d",
       VAR_8[VAR_12.RType.rt], VAR_12.RType.rd);
   break;

  case 184:
   FUNC_0("ctc1\t%s,f%d",
       VAR_8[VAR_12.RType.rt], VAR_12.RType.rd);
   break;

  case 187:
   FUNC_0("cfc1\t%s,f%d",
       VAR_8[VAR_12.RType.rt], VAR_12.RType.rd);
   break;

  default:
   FUNC_0("%s.%s\tf%d,f%d,f%d",
       VAR_5[VAR_12.FRType.func], VAR_6[VAR_12.FRType.fmt],
       VAR_12.FRType.fd, VAR_12.FRType.fs, VAR_12.FRType.ft);
  }
  break;

 case 164:
 case 163:
  FUNC_0("%s\t", VAR_7[VAR_12.JType.op]);
  FUNC_0("0x%8x",(VAR_11 & 0xF0000000) | (VAR_12.JType.target << 2));
  VAR_13 = 1;
  break;

 case 153:
 case 131:
  FUNC_0("%s\tf%d,", VAR_7[VAR_12.IType.op], VAR_12.IType.rt);
  goto loadstore;

 case 160:
 case 157:
 case 154:
 case 158:
 case 159:
 case 156:
 case 152:
 case 142:
 case 140:
 case 132:
 case 141:
  FUNC_0("%s\t%s,", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rt]);
 loadstore:
  FUNC_0("%d(%s)", (short)VAR_12.IType.imm, VAR_8[VAR_12.IType.rs]);
  break;

 case 143:
 case 128:
  if (VAR_12.IType.rs == 0) {
   FUNC_0("li\t%s,0x%x",
       VAR_8[VAR_12.IType.rt], VAR_12.IType.imm);
   break;
  }

 case 200:
  FUNC_0("%s\t%s,%s,0x%x", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rt], VAR_8[VAR_12.IType.rs], VAR_12.IType.imm);
  break;

 case 155:
  FUNC_0("%s\t%s,0x%x", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rt], VAR_12.IType.imm);
  break;

 case 202:
 case 183:
 case 201:
 case 182:
  if (VAR_12.IType.rs == 0) {
   FUNC_0("li\t%s,%d", VAR_8[VAR_12.IType.rt],
       (short)VAR_12.IType.imm);
   break;
  }

 default:
  FUNC_0("%s\t%s,%s,%d", VAR_7[VAR_12.IType.op],
      VAR_8[VAR_12.IType.rt], VAR_8[VAR_12.IType.rs],
      (short)VAR_12.IType.imm);
 }
 FUNC_0("\n");
 return (VAR_13);
}
