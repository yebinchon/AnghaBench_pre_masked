
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int dummy; } ;
struct pt_packet {int type; } ;




 int FUNC_0 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_packet *VAR_1,
      struct pt_packet_decoder *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 for (;;) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_2, VAR_1, sizeof(*VAR_1));
  if (VAR_3 < 0)
   return VAR_3;

  switch (VAR_1->type) {
  default:

   break;

  case 128:

   return 0;

  case 129:

   return 1;
  }
 }
}
