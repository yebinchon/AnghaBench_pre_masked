
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int value; } ;
struct qos_info {TYPE_2__ min_turn_time; TYPE_1__ baud_rate; } ;
struct irlap_cb {int mtt_required; int xbofs_delay; } ;
typedef int __u32 ;


 int FUNC_0 (int,int) ;

void FUNC_1(struct irlap_cb *VAR_0, struct qos_info *VAR_1)
{
 __u32 VAR_2;
 __u32 VAR_3;


 VAR_3 = VAR_1->baud_rate.value;
 VAR_2 = VAR_1->min_turn_time.value;


 if (VAR_3 > 115200) {
  VAR_0->mtt_required = VAR_2;
  return;
 }






 VAR_0->xbofs_delay = FUNC_0(VAR_3, VAR_2);
}
