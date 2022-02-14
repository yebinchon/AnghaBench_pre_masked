
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int sme_state; int current_bss; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int FUNC_1(struct wireless_dev *VAR_3)
{
 FUNC_0(VAR_3);

 switch (VAR_3->iftype) {
 case 133:
 case 132:
 case 129:
 case 131:
  break;
 case 134:
  if (!VAR_3->current_bss)
   return -VAR_2;
  break;
 case 128:
 case 130:
  if (VAR_3->sme_state != VAR_0)
   return -VAR_2;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
