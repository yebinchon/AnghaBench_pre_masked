
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int work_bus; int rfis_bus; } ;
struct ahci_channel {int pm_level; int r_mem; TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ahci_channel*,int) ;
 int FUNC_2 (struct ahci_channel*) ;
 struct ahci_channel* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_12)
{
 struct ahci_channel *VAR_13 = FUNC_3(VAR_12);
 uint64_t VAR_14;


 FUNC_0(VAR_13->r_mem, VAR_11, 0);

 VAR_14 = VAR_13->dma.work_bus + VAR_0;
 FUNC_0(VAR_13->r_mem, VAR_1, VAR_14 & 0xffffffff);
 FUNC_0(VAR_13->r_mem, VAR_2, VAR_14 >> 32);
 VAR_14 = VAR_13->dma.rfis_bus;
 FUNC_0(VAR_13->r_mem, VAR_9, VAR_14 & 0xffffffff);
 FUNC_0(VAR_13->r_mem, VAR_10, VAR_14 >> 32);

 FUNC_0(VAR_13->r_mem, VAR_3,
      (VAR_4 | VAR_7 | VAR_8 |
      ((VAR_13->pm_level == 2 || VAR_13->pm_level == 3) ? VAR_5 : 0) |
      ((VAR_13->pm_level > 2) ? VAR_6 : 0 )));
 FUNC_2(VAR_13);
 FUNC_1(VAR_13, 1);
 return (0);
}
