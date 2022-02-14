
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int dummy; } ;
struct pt_packet {int type; } ;
typedef int packet ;
 int FUNC_0 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_packet_decoder *VAR_1)
{
 for (;;) {
  struct pt_packet VAR_2;
  int VAR_3;

  VAR_3 = FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));
  if (VAR_3 < 0) {

   if (VAR_3 == -VAR_0)
    VAR_3 = 0;

   return VAR_3;
  }

  switch (VAR_2.type) {
  default:





   return 0;

  case 131:

   return 1;

  case 134:
  case 129:
  case 139:
  case 132:
  case 133:
  case 136:
  case 128:
  case 130:
  case 135:
  case 138:
  case 137:

   continue;
  }
 }
}
