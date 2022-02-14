
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int bus_addr; } ;
struct TYPE_5__ {int bus_addr; } ;
struct TYPE_7__ {int dev; scalar_t__ sram; TYPE_2__ zeropad_dma; TYPE_1__ cmd_dma; scalar_t__ cmd; } ;
typedef TYPE_3__ mxge_softc_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,int volatile*,int volatile) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char volatile*,int*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(mxge_softc_t *VAR_1, int VAR_2)
{
 char VAR_3[72];
 volatile uint32_t *VAR_4;
 volatile char *VAR_5;
 uint32_t *VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = (uint32_t *)((unsigned long)(VAR_3 + 7) & ~7UL);


 VAR_4 = (volatile uint32_t *)VAR_1->cmd;
 *VAR_4 = 0;
 FUNC_6();






 VAR_7 = FUNC_2(VAR_1->cmd_dma.bus_addr);
 VAR_8 = FUNC_1(VAR_1->cmd_dma.bus_addr);
 VAR_6[0] = FUNC_4(VAR_8);
 VAR_6[1] = FUNC_4(VAR_7);
 VAR_6[2] = FUNC_4(0xffffffff);
 VAR_7 = FUNC_2(VAR_1->zeropad_dma.bus_addr);
 VAR_8 = FUNC_1(VAR_1->zeropad_dma.bus_addr);
 VAR_6[3] = FUNC_4(VAR_8);
 VAR_6[4] = FUNC_4(VAR_7);
 VAR_6[5] = FUNC_4(VAR_2);


 VAR_5 = (volatile char *)(VAR_1->sram + VAR_0);

 FUNC_5(VAR_5, VAR_6, 64);
 FUNC_6();
 FUNC_0(1000);
 FUNC_6();
 VAR_9 = 0;
 while (*VAR_4 != 0xffffffff && VAR_9 < 20) {
  FUNC_0(1000);
  VAR_9++;
 }
 if (*VAR_4 != 0xffffffff) {
  FUNC_3(VAR_1->dev, "dummy rdma %s failed (%p = 0x%x)",
         (VAR_2 ? "enable" : "disable"), VAR_4,
         *VAR_4);
 }
 return;
}
