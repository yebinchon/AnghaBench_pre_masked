
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_channel {int resetting; int reset_timer; int sim; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahci_channel*) ;
 int FUNC_1 (struct ahci_channel*,int) ;
 scalar_t__ FUNC_2 (struct ahci_channel*,int,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct ahci_channel *VAR_3 = VAR_2;

 if (VAR_3->resetting == 0)
  return;
 VAR_3->resetting--;
 if (FUNC_2(VAR_3, VAR_3->resetting == 0 ? -1 : 0,
     (310 - VAR_3->resetting) * 100) == 0) {
  VAR_3->resetting = 0;
  FUNC_1(VAR_3, 1);
  FUNC_4(VAR_3->sim, VAR_0);
  return;
 }
 if (VAR_3->resetting == 0) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 1);
  FUNC_4(VAR_3->sim, VAR_0);
  return;
 }
 FUNC_3(&VAR_3->reset_timer, VAR_1 / 10);
}
