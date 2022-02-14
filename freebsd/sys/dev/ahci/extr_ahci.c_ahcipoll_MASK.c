
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct cam_sim {int dummy; } ;
struct ahci_channel {scalar_t__ resetting; scalar_t__ resetpolldiv; int reset_timer; int r_mem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ahci_channel*,scalar_t__) ;
 int FUNC_2 (struct ahci_channel*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;

__attribute__((used)) static void
FUNC_5(struct cam_sim *VAR_1)
{
 struct ahci_channel *VAR_2 = (struct ahci_channel *)FUNC_4(VAR_1);
 uint32_t VAR_3;


 VAR_3 = FUNC_0(VAR_2->r_mem, VAR_0);
 if (VAR_3 != 0)
  FUNC_1(VAR_2, VAR_3);
 if (VAR_2->resetting != 0 &&
     (--VAR_2->resetpolldiv <= 0 || !FUNC_3(&VAR_2->reset_timer))) {
  VAR_2->resetpolldiv = 1000;
  FUNC_2(VAR_2);
 }
}
