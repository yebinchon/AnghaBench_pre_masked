
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int obfd; } ;
struct dwarf_block {int size; char* data; } ;
struct comp_unit_head {int dummy; } ;
struct dwarf2_cu {struct comp_unit_head header; struct objfile* objfile; } ;
typedef unsigned int CORE_ADDR ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char) ;
 int VAR_0 ;
 unsigned int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (int ,char*) ;
 unsigned int FUNC_5 (int ,char*) ;
 unsigned int FUNC_6 (int ,char*) ;
 unsigned int FUNC_7 (int ,char*) ;
 unsigned int FUNC_8 (int ,char*) ;
 unsigned int FUNC_9 (int ,char*,struct dwarf2_cu*,unsigned int*) ;
 unsigned int FUNC_10 (int *,char*,unsigned int*) ;
 void* FUNC_11 (int *,char*,unsigned int*) ;
 int VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_12 (struct dwarf_block *VAR_2, struct dwarf2_cu *VAR_3)
{
  struct objfile *VAR_4 = VAR_3->objfile;
  struct comp_unit_head *VAR_5 = &VAR_3->header;
  int VAR_6;
  int VAR_7 = VAR_2->size;
  char *VAR_8 = VAR_2->data;
  CORE_ADDR VAR_9[64];
  int VAR_10;
  unsigned int VAR_11, VAR_12;
  unsigned char VAR_13;

  VAR_6 = 0;
  VAR_10 = 0;
  VAR_9[VAR_10] = 0;
  VAR_0 = 0;

  while (VAR_6 < VAR_7)
    {
      VAR_13 = VAR_8[VAR_6++];
      switch (VAR_13)
 {
 case 195:
 case 194:
 case 183:
 case 172:
 case 169:
 case 168:
 case 167:
 case 166:
 case 165:
 case 164:
 case 193:
 case 192:
 case 191:
 case 190:
 case 189:
 case 188:
 case 187:
 case 186:
 case 185:
 case 184:
 case 182:
 case 181:
 case 180:
 case 179:
 case 178:
 case 177:
 case 176:
 case 175:
 case 174:
 case 173:
 case 171:
 case 170:
   VAR_9[++VAR_10] = VAR_13 - 195;
   break;

 case 160:
 case 159:
 case 148:
 case 137:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 158:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 case 152:
 case 151:
 case 150:
 case 149:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 136:
 case 135:
   VAR_0 = 1;
   VAR_9[++VAR_10] = VAR_13 - 160;
   if (VAR_6 < VAR_7)
     FUNC_1 ();
   break;

 case 128:
   VAR_0 = 1;
   VAR_12 = FUNC_11 (((void*)0), (VAR_8 + VAR_6), &VAR_11);
   VAR_6 += VAR_11;
   VAR_9[++VAR_10] = VAR_12;
   if (VAR_6 < VAR_7)
     FUNC_1 ();
   break;

 case 206:
   VAR_9[++VAR_10] = FUNC_9 (VAR_4->obfd, &VAR_8[VAR_6],
       VAR_3, &VAR_11);
   VAR_6 += VAR_11;
   break;

 case 204:
   VAR_9[++VAR_10] = FUNC_3 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 1;
   break;

 case 205:
   VAR_9[++VAR_10] = FUNC_4 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 1;
   break;

 case 202:
   VAR_9[++VAR_10] = FUNC_5 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 2;
   break;

 case 203:
   VAR_9[++VAR_10] = FUNC_6 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 2;
   break;

 case 200:
   VAR_9[++VAR_10] = FUNC_7 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 4;
   break;

 case 201:
   VAR_9[++VAR_10] = FUNC_8 (VAR_4->obfd, &VAR_8[VAR_6]);
   VAR_6 += 4;
   break;

 case 198:
   VAR_9[++VAR_10] = FUNC_11 (((void*)0), (VAR_8 + VAR_6),
        &VAR_11);
   VAR_6 += VAR_11;
   break;

 case 199:
   VAR_9[++VAR_10] = FUNC_10 (((void*)0), (VAR_8 + VAR_6), &VAR_11);
   VAR_6 += VAR_11;
   break;

 case 196:
   VAR_9[VAR_10 + 1] = VAR_9[VAR_10];
   VAR_10++;
   break;

 case 162:
   VAR_9[VAR_10 - 1] += VAR_9[VAR_10];
   VAR_10--;
   break;

 case 161:
   VAR_9[VAR_10] += FUNC_11 (((void*)0), (VAR_8 + VAR_6), &VAR_11);
   VAR_6 += VAR_11;
   break;

 case 163:
   VAR_9[VAR_10 - 1] -= VAR_9[VAR_10];
   VAR_10--;
   break;

 case 197:




   if (VAR_6 < VAR_7)
     FUNC_1 ();
   break;

        case 208:






   if (VAR_6 < VAR_7)
     FUNC_1 ();
          break;

 case 207:
   break;

 default:
   FUNC_0 (&VAR_1, "unsupported stack op: '%s'",
       FUNC_2 (VAR_13));
   return (VAR_9[VAR_10]);
 }
    }
  return (VAR_9[VAR_10]);
}
