
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int dummy; } ;
struct pt_packet {int type; } ;
typedef int packet ;
 int FUNC_0 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int FUNC_1 (struct pt_packet*,struct pt_packet_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pt_packet_decoder *VAR_3)
{
 if (!VAR_3)
  return -VAR_2;

 for (;;) {
  struct pt_packet VAR_4;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4));
  if (VAR_5 < 0) {

   if (VAR_5 == -VAR_1)
    VAR_5 = 1;

   return VAR_5;
  }

  switch (VAR_4.type) {
  default:

   break;

  case 134:

   return 0;

  case 131:

   return 0;

  case 129:
  case 130:
  case 133:
  case 132:



   return 1;

  case 136:



   VAR_5 = FUNC_1(&VAR_4, VAR_3);


   if (VAR_5 == -VAR_1)
    VAR_5 = 1;

   return VAR_5;

  case 135:

   return -VAR_0;

  case 137:

   return 1;

  case 128:
  case 138:

   return 1;
  }
 }
}
