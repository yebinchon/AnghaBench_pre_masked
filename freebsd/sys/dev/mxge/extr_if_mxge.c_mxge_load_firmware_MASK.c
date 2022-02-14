
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int map; int dmat; int bus_addr; } ;
struct TYPE_7__ {int sram_size; int tx_boundary; int dev; TYPE_1__ cmd_dma; scalar_t__ sram; scalar_t__ cmd; int fw_name; } ;
typedef TYPE_2__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*,int*) ;
 int FUNC_8 (char volatile*,int*,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(mxge_softc_t *VAR_5, int VAR_6)
{
 volatile uint32_t *VAR_7;
 volatile char *VAR_8;
 char VAR_9[72];
 uint32_t *VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_10 = (uint32_t *)((unsigned long)(VAR_9 + 7) & ~7UL);

 VAR_11 = VAR_5->sram_size;
 VAR_14 = FUNC_7(VAR_5, &VAR_11);
 if (VAR_14) {
  if (!VAR_6)
   return VAR_14;


  VAR_14 = FUNC_6(VAR_5);
  if (VAR_14) {
   FUNC_4(VAR_5->dev,
          "failed to adopt running firmware\n");
   return VAR_14;
  }
  FUNC_4(VAR_5->dev,
         "Successfully adopted running firmware\n");
  if (VAR_5->tx_boundary == 4096) {
   FUNC_4(VAR_5->dev,
    "Using firmware currently running on NIC"
     ".  For optimal\n");
   FUNC_4(VAR_5->dev,
     "performance consider loading optimized "
     "firmware\n");
  }
  VAR_5->fw_name = VAR_4;
  VAR_5->tx_boundary = 2048;
  return 0;
 }

 VAR_7 = (volatile uint32_t *)VAR_5->cmd;
 *VAR_7 = 0;
 FUNC_9();





 VAR_12 = FUNC_2(VAR_5->cmd_dma.bus_addr);
 VAR_13 = FUNC_1(VAR_5->cmd_dma.bus_addr);

 VAR_10[0] = FUNC_5(VAR_13);
 VAR_10[1] = FUNC_5(VAR_12);
 VAR_10[2] = FUNC_5(0xffffffff);






 VAR_10[3] = FUNC_5(VAR_3 + 8);
 VAR_10[4] = FUNC_5(VAR_11 - 8);
 VAR_10[5] = FUNC_5(8);
 VAR_10[6] = FUNC_5(0);

 VAR_8 = (volatile char *)(VAR_5->sram + VAR_2);
 FUNC_8(VAR_8, VAR_10, 64);
 FUNC_9();
 FUNC_0(1000);
 FUNC_9();
 VAR_15 = 0;
 while (*VAR_7 != 0xffffffff && VAR_15 < 20) {
  FUNC_0(1000*10);
  VAR_15++;
  FUNC_3(VAR_5->cmd_dma.dmat,
    VAR_5->cmd_dma.map, VAR_0);
 }
 if (*VAR_7 != 0xffffffff) {
  FUNC_4(VAR_5->dev,"handoff failed (%p = 0x%x)",
   VAR_7, *VAR_7);

  return VAR_1;
 }
 return 0;
}
