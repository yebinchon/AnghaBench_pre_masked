
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct resource {int start; } ;
struct TYPE_12__ {int platform_data; } ;
struct platform_device {int id; TYPE_10__ dev; } ;
typedef int clk_name ;
struct TYPE_14__ {int dma_chan; scalar_t__ base; } ;
struct TYPE_13__ {int dma_chan; scalar_t__ base; } ;
struct TYPE_16__ {unsigned int irq; scalar_t__ base; int clk; TYPE_2__ fsib; TYPE_1__ fsia; int info; } ;
struct TYPE_15__ {TYPE_10__* dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_10__*,char*,...) ;
 int FUNC_4 (unsigned int,TYPE_4__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_4__* FUNC_11 (int,int ) ;
 TYPE_4__* VAR_10 ;
 unsigned int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (unsigned int,int *,int ,char*,TYPE_4__*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_11)
{
 struct resource *VAR_12;
 char VAR_13[8];
 unsigned int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_13(VAR_11, VAR_5, 0);
 VAR_14 = FUNC_12(VAR_11, 0);
 if (!VAR_12 || !VAR_14) {
  FUNC_3(&VAR_11->dev, "Not enough FSI platform resources.\n");
  VAR_15 = -VAR_1;
  goto exit;
 }

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_4);
 if (!VAR_10) {
  FUNC_3(&VAR_11->dev, "Could not allocate master\n");
  VAR_15 = -VAR_2;
  goto exit;
 }

 VAR_10->base = FUNC_8(VAR_12->start, FUNC_15(VAR_12));
 if (!VAR_10->base) {
  VAR_15 = -VAR_3;
  FUNC_3(&VAR_11->dev, "Unable to ioremap FSI registers.\n");
  goto exit_kfree;
 }

 VAR_10->irq = VAR_14;
 VAR_10->info = VAR_11->dev.platform_data;
 VAR_10->fsia.base = VAR_10->base;
 VAR_10->fsib.base = VAR_10->base + 0x40;

 VAR_10->fsia.dma_chan = -1;
 VAR_10->fsib.dma_chan = -1;

 VAR_15 = FUNC_6();
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "cannot get dma api\n");
  goto exit_iounmap;
 }


 FUNC_18(VAR_13, sizeof(VAR_13), "spu%d", VAR_11->id);
 VAR_10->clk = FUNC_2(((void*)0), VAR_13);
 if (FUNC_1(VAR_10->clk)) {
  FUNC_3(&VAR_11->dev, "cannot get %s mstp\n", VAR_13);
  VAR_15 = -VAR_0;
  goto exit_free_dma;
 }

 VAR_8[0].dev = &VAR_11->dev;
 VAR_8[1].dev = &VAR_11->dev;

 FUNC_7();

 VAR_15 = FUNC_14(VAR_14, &VAR_7, VAR_6, "fsi", VAR_10);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "irq request err\n");
  goto exit_free_dma;
 }

 VAR_15 = FUNC_17(&VAR_9);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "cannot snd soc register\n");
  goto exit_free_irq;
 }

 return FUNC_16(VAR_8, FUNC_0(VAR_8));

exit_free_irq:
 FUNC_4(VAR_14, VAR_10);
exit_free_dma:
 FUNC_5();
exit_iounmap:
 FUNC_9(VAR_10->base);
exit_kfree:
 FUNC_10(VAR_10);
 VAR_10 = ((void*)0);
exit:
 return VAR_15;
}
