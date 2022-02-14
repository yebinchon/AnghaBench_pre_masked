
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct llc_pdu_sn {int ctrl_1; int ctrl_2; } ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct llc_pdu_sn *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4 = 0;

 if (VAR_2->ctrl_1 & 1) {
  if ((VAR_2->ctrl_1 & 128) == 128)
   VAR_3 = 128;
  else
   VAR_3 = 129;
 } else
  VAR_3 = 130;
 switch (VAR_3) {
 case 130:
 case 129:
  VAR_4 = VAR_2->ctrl_2 & VAR_0;
  break;
 case 128:
  VAR_4 = (VAR_2->ctrl_1 & VAR_1) >> 4;
  break;
 }
 return VAR_4;
}
