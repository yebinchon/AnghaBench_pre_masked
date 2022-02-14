
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int opcode; char string; scalar_t__ longconst; TYPE_2__* type; TYPE_2__* internalvar; TYPE_2__* symbol; TYPE_2__* block; scalar_t__ doubleconst; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct expression*,struct ui_file*,int) ;
 int FUNC_3 (struct ui_file*,char*,...) ;
 int FUNC_4 (TYPE_2__*,struct ui_file*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int *,struct ui_file*,int ) ;

int
FUNC_7 (struct expression *VAR_0,
      struct ui_file *VAR_1, int VAR_2)
{
  int VAR_3 = VAR_0->elts[VAR_2++].opcode;

  switch (VAR_3)
    {
    case 159:
    case 158:
    case 157:
      VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2);
    case 220:
    case 188:
    case 194:
    case 212:
    case 191:
    case 195:
    case 198:
    case 189:
    case 200:
    case 199:
    case 217:
    case 216:
    case 215:
    case 210:
    case 193:
    case 201:
    case 206:
    case 202:
    case 207:
    case 190:
    case 219:
    case 214:
    case 187:
    case 208:
    case 196:
    case 197:
    case 203:
    case 218:
    case 186:
    case 204:
    case 209:
    case 213:
    case 205:
    case 192:
    case 211:
      VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2);
    case 138:
    case 143:
    case 148:
    case 145:
    case 155:
    case 131:
    case 133:
    case 132:
    case 134:
    case 130:
    case 135:
    case 154:
    case 149:
    case 136:
    case 156:
    case 147:
    case 146:
    case 141:
    case 139:
    case 137:
    case 129:
    case 142:
    case 128:
    case 144:
    case 153:
    case 151:
    case 150:
      VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2);
      break;
    case 173:
      FUNC_3 (VAR_1, "Type @");
      FUNC_4 (VAR_0->elts[VAR_2].type, VAR_1);
      FUNC_3 (VAR_1, " (");
      FUNC_6 (VAR_0->elts[VAR_2].type, ((void*)0), VAR_1, 0);
      FUNC_3 (VAR_1, "), value %ld (0x%lx)",
   (long) VAR_0->elts[VAR_2 + 1].longconst,
   (long) VAR_0->elts[VAR_2 + 1].longconst);
      VAR_2 += 3;
      break;
    case 180:
      FUNC_3 (VAR_1, "Type @");
      FUNC_4 (VAR_0->elts[VAR_2].type, VAR_1);
      FUNC_3 (VAR_1, " (");
      FUNC_6 (VAR_0->elts[VAR_2].type, ((void*)0), VAR_1, 0);
      FUNC_3 (VAR_1, "), value %g",
   (double) VAR_0->elts[VAR_2 + 1].doubleconst);
      VAR_2 += 3;
      break;
    case 164:
      FUNC_3 (VAR_1, "Block @");
      FUNC_4 (VAR_0->elts[VAR_2].block, VAR_1);
      FUNC_3 (VAR_1, ", symbol @");
      FUNC_4 (VAR_0->elts[VAR_2 + 1].symbol, VAR_1);
      FUNC_3 (VAR_1, " (%s)",
   FUNC_1 (VAR_0->elts[VAR_2 + 1].symbol));
      VAR_2 += 3;
      break;
    case 174:
      FUNC_3 (VAR_1, "History element %ld",
   (long) VAR_0->elts[VAR_2].longconst);
      VAR_2 += 2;
      break;
    case 169:
      FUNC_3 (VAR_1, "Register %ld",
   (long) VAR_0->elts[VAR_2].longconst);
      VAR_2 += 2;
      break;
    case 176:
      FUNC_3 (VAR_1, "Internal var @");
      FUNC_4 (VAR_0->elts[VAR_2].internalvar, VAR_1);
      FUNC_3 (VAR_1, " (%s)",
   VAR_0->elts[VAR_2].internalvar->name);
      VAR_2 += 2;
      break;
    case 177:
      {
 int VAR_4, VAR_5;

 VAR_5 = FUNC_5 (VAR_0->elts[VAR_2].longconst);

 FUNC_3 (VAR_1, "Number of args: %d", VAR_5);
 VAR_2 += 2;

 for (VAR_4 = 1; VAR_4 <= VAR_5 + 1; VAR_4++)
   VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2);
      }
      break;
    case 184:
      {
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5 (VAR_0->elts[VAR_2].longconst);
 VAR_7 = FUNC_5 (VAR_0->elts[VAR_2 + 1].longconst);

 FUNC_3 (VAR_1, "Bounds [%d:%d]", VAR_6, VAR_7);
 VAR_2 += 3;

 for (VAR_8 = 1; VAR_8 <= VAR_7 - VAR_6 + 1; VAR_8++)
   VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2);
      }
      break;
    case 140:
    case 152:
      FUNC_3 (VAR_1, "Type @");
      FUNC_4 (VAR_0->elts[VAR_2].type, VAR_1);
      FUNC_3 (VAR_1, " (");
      FUNC_6 (VAR_0->elts[VAR_2].type, ((void*)0), VAR_1, 0);
      FUNC_3 (VAR_1, ")");
      VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2 + 2);
      break;
    case 165:
      FUNC_3 (VAR_1, "Type @");
      FUNC_4 (VAR_0->elts[VAR_2].type, VAR_1);
      FUNC_3 (VAR_1, " (");
      FUNC_6 (VAR_0->elts[VAR_2].type, ((void*)0), VAR_1, 0);
      FUNC_3 (VAR_1, ")");
      VAR_2 += 2;
      break;
    case 160:
    case 161:
      {
 char *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5 (VAR_0->elts[VAR_2].longconst);
 VAR_9 = &VAR_0->elts[VAR_2 + 1].string;

 FUNC_3 (VAR_1, "Element name: `%.*s'", VAR_10, VAR_9);
 VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_2 + 3 + FUNC_0 (VAR_10 + 1));
      }
      break;
    case 168:
      {
 char *VAR_11;
 int VAR_12;

 FUNC_3 (VAR_1, "Type @");
 FUNC_4 (VAR_0->elts[VAR_2].type, VAR_1);
 FUNC_3 (VAR_1, " (");
 FUNC_6 (VAR_0->elts[VAR_2].type, ((void*)0), VAR_1, 0);
 FUNC_3 (VAR_1, ") ");

 VAR_12 = FUNC_5 (VAR_0->elts[VAR_2 + 1].longconst);
 VAR_11 = &VAR_0->elts[VAR_2 + 2].string;

 FUNC_3 (VAR_1, "Field name: `%.*s'", VAR_12, VAR_11);
 VAR_2 += 4 + FUNC_0 (VAR_12 + 1);
      }
      break;
    default:
    case 170:
    case 163:
    case 162:
    case 185:
    case 178:
    case 181:
    case 167:
    case 183:
    case 182:
    case 172:
    case 166:
    case 175:
    case 171:
    case 179:
      FUNC_3 (VAR_1, "Unknown format");
    }

  return VAR_2;
}
