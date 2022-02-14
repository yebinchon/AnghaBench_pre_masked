
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instance; } ;
struct irlap_cb {TYPE_1__ notify; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int FUNC_1 (int ,int,int ) ;

void FUNC_2(struct irlap_cb *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_0("IrLAP, no activity on link!\n");
  break;
 case 129:
  FUNC_0("IrLAP, noisy link!\n");
  break;
 default:
  break;
 }
 FUNC_1(VAR_1->notify.instance,
    VAR_2, VAR_0);
}
