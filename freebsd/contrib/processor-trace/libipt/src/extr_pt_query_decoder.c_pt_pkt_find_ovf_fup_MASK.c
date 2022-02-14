
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int dummy; } ;
struct pt_packet {int type; } ;
typedef int packet ;
 int FUNC_0 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_packet_decoder *VAR_2)
{
 for (;;) {
  struct pt_packet VAR_3;
  int VAR_4;

  VAR_4 = FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
  if (VAR_4 < 0)
   return VAR_4;

  switch (VAR_3.type) {
  case 151:
   return 1;

  case 150:
   return -VAR_1;

  case 129:
  case 144:
  case 149:
  case 154:
  case 130:
  case 133:
  case 147:
  case 153:
   continue;

  case 142:
  case 134:
  case 148:
  case 143:
  case 128:
  case 137:
  case 145:
  case 152:
  case 146:
  case 139:
  case 138:
  case 140:
   return 0;

  case 141:
  case 136:
  case 135:
  case 131:
  case 132:
   return -VAR_0;
  }
 }
}
