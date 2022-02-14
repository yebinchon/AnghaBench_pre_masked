
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ahci_channel {scalar_t__ numrslots; int pm_level; int r_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3)
{
 struct ahci_channel *VAR_4 = (struct ahci_channel *)VAR_3;
 uint32_t VAR_5;

 if (VAR_4->numrslots != 0)
  return;
 VAR_5 = FUNC_0(VAR_4->r_mem, VAR_0);
 if (VAR_4->pm_level == 4)
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_2;
 FUNC_1(VAR_4->r_mem, VAR_0, VAR_5);
}
