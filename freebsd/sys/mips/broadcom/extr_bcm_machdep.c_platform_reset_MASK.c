
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chip_id; } ;
struct bcm_platform {int pmu_addr; TYPE_1__ cid; } ;


 int FUNC_0 (struct bcm_platform*,int ,int) ;
 int FUNC_1 (struct bcm_platform*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct bcm_platform* FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

void
FUNC_8(void)
{
 struct bcm_platform *VAR_5;
 bool VAR_6;

 FUNC_7("bcm::platform_reset()\n");
 FUNC_5();
 VAR_5 = FUNC_3();
 VAR_6 = 0;


 if (VAR_5->cid.chip_id == VAR_0) {
  VAR_6 = 1;


  FUNC_2(VAR_2);
 }


 if (VAR_5->pmu_addr != 0x0) {
  FUNC_1(VAR_5, VAR_1, 1);
 } else
  FUNC_0(VAR_5, VAR_3, 1);


 if (VAR_6) {
  FUNC_6();
  __asm __volatile("wait");
 }

 while (1);
}
