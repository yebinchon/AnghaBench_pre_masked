
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct client_lease {TYPE_1__* options; } ;
struct TYPE_2__ {int len; int data; } ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int,int ,int ) ;
 char* FUNC_5 (int,int ,int ,int ,int ) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 int FUNC_7 (char*,...) ;

int
FUNC_8(struct client_lease *VAR_1, int VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;



 VAR_3 = FUNC_5(VAR_2, VAR_1->options[VAR_2].data,
     VAR_1->options[VAR_2].len, 0, 0);

 VAR_4 = FUNC_4(VAR_2, VAR_1->options[VAR_2].data,
     VAR_1->options[VAR_2].len);

 switch (VAR_2) {
 case 138:
 case 132:
 case 165:
 case 145:
 case 183:
 case 171:
 case 200:
 case 170:
 case 175:
 case 147:
 case 137:
 case 202:
 case 157:
 case 154:
 case 163:
 case 164:
 case 178:
 case 186:
 case 159:
 case 166:
 case 142:
 case 148:
 case 156:
 case 129:
 case 179:
 case 172:
 case 139:
 case 140:
  if (!FUNC_3(VAR_3)) {
   FUNC_7("Invalid IP address in option: %s", VAR_3);
   return (0);
  }
  return (1) ;
 case 177:
 case 158:
 case 160:
 case 134:
  if (!FUNC_6(VAR_4)) {
   FUNC_7("Bogus Host Name option %d: %s (%s)", VAR_2,
       VAR_4, VAR_3);
   VAR_1->options[VAR_2].len = 0;
   FUNC_2(VAR_1->options[VAR_2].data);
  }
  return (1);
 case 184:
 case 182:
  if (!FUNC_6(VAR_4)) {
   if (!FUNC_1(VAR_4)) {
    FUNC_7("Bogus domain search list %d: %s (%s)",
        VAR_2, VAR_4, VAR_3);
    VAR_1->options[VAR_2].len = 0;
    FUNC_2(VAR_1->options[VAR_2].data);
   }
  }
  return (1);
 case 153:
 case 133:
 case 203:
 case 167:
 case 146:
 case 180:
 case 173:
 case 155:
 case 149:
 case 168:
 case 199:
 case 152:
 case 151:
 case 174:
 case 206:
 case 150:
 case 169:
 case 144:
 case 143:
 case 141:
 case 131:
 case 205:
 case 176:
 case 198:
 case 135:
 case 136:
 case 130:
 case 162:
 case 161:
 case 128:
 case 187:
 case 195:
 case 191:
 case 192:
 case 190:
 case 193:
 case 194:
 case 188:
 case 189:
 case 197:
 case 196:
 case 204:
 case 185:
 case 181:
  return (1);
 case 201:
  return (FUNC_0(VAR_1->options[VAR_2].data,
      VAR_1->options[VAR_2].len));
 default:
  FUNC_7("unknown dhcp option value 0x%x", VAR_2);
  return (VAR_0);
 }
}
