
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct txx9dmac_slave {int reg_width; scalar_t__ rx_reg; scalar_t__ tx_reg; } ;
struct TYPE_2__ {int dev; } ;
struct txx9aclc_soc_device {TYPE_1__ soc_dev; } ;
struct txx9aclc_plat_drvdata {scalar_t__ physbase; } ;
struct txx9aclc_dmadata {scalar_t__ stream; int tasklet; int dma_chan; int dma_lock; struct txx9dmac_slave dma_slave; } ;
typedef int dma_cap_mask_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct txx9aclc_dmadata*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int VAR_6 ;
 struct txx9aclc_plat_drvdata* FUNC_6 (struct txx9aclc_soc_device*) ;

__attribute__((used)) static int FUNC_7(struct txx9aclc_soc_device *VAR_7,
        struct txx9aclc_dmadata *VAR_8)
{
 struct txx9aclc_plat_drvdata *VAR_9 = FUNC_6(VAR_7);
 struct txx9dmac_slave *VAR_10 = &VAR_8->dma_slave;
 dma_cap_mask_t VAR_11;

 FUNC_4(&VAR_8->dma_lock);

 VAR_10->reg_width = sizeof(u32);
 if (VAR_8->stream == VAR_4) {
  VAR_10->tx_reg = VAR_9->physbase + VAR_1;
  VAR_10->rx_reg = 0;
 } else {
  VAR_10->tx_reg = 0;
  VAR_10->rx_reg = VAR_9->physbase + VAR_0;
 }


 FUNC_2(VAR_11);
 FUNC_1(VAR_2, VAR_11);
 VAR_8->dma_chan = FUNC_3(VAR_11, VAR_5, VAR_8);
 if (!VAR_8->dma_chan) {
  FUNC_0(VAR_7->soc_dev.dev,
   "DMA channel for %s is not available\n",
   VAR_8->stream == VAR_4 ?
   "playback" : "capture");
  return -VAR_3;
 }
 FUNC_5(&VAR_8->tasklet, VAR_6,
       (unsigned long)VAR_8);
 return 0;
}
