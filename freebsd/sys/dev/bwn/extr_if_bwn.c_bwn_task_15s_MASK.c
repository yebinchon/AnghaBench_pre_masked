
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int txerrors; int (* task_15s ) (struct bwn_mac*) ;} ;
struct TYPE_3__ {scalar_t__ opensource; } ;
struct bwn_mac {TYPE_2__ mac_phy; TYPE_1__ mac_fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,char*) ;
 scalar_t__ FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ,int) ;
 int FUNC_3 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_3)
{
 uint16_t VAR_4;

 if (VAR_3->mac_fw.opensource) {
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_3, "fw watchdog");
   return;
  }
  FUNC_2(VAR_3, VAR_0, VAR_2, 1);
 }
 if (VAR_3->mac_phy.task_15s)
  VAR_3->mac_phy.task_15s(VAR_3);

 VAR_3->mac_phy.txerrors = VAR_1;
}
