
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dev; int dmat; int ih; void* irq; scalar_t__ irqid; void* mt; void* mth; void* mtt; void* cs; void* csh; void* cst; scalar_t__ mtid; scalar_t__ csid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_12 ;
 int FUNC_4 (int ,scalar_t__,int) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,void*,int ,int ,struct sc_info*,int *) ;

__attribute__((used)) static int
FUNC_8(struct sc_info *VAR_13)
{

 VAR_13->csid = VAR_6;
 VAR_13->cs = FUNC_0(VAR_13->dev, VAR_10,
     &VAR_13->csid, VAR_8);
 VAR_13->mtid = VAR_3;
 VAR_13->mt = FUNC_0(VAR_13->dev, VAR_10,
     &VAR_13->mtid, VAR_8);
 if (!VAR_13->cs || !VAR_13->mt) {
  FUNC_3(VAR_13->dev, "unable to map IO port space\n");
  return VAR_4;
 }
 VAR_13->cst = FUNC_6(VAR_13->cs);
 VAR_13->csh = FUNC_5(VAR_13->cs);
 VAR_13->mtt = FUNC_6(VAR_13->mt);
 VAR_13->mth = FUNC_5(VAR_13->mt);
 VAR_13->irqid = 0;
 VAR_13->irq = FUNC_0(VAR_13->dev, VAR_11, &VAR_13->irqid,
     VAR_8 | VAR_9);
 if (!VAR_13->irq ||
     FUNC_7(VAR_13->dev, VAR_13->irq, VAR_5, VAR_12, VAR_13, &VAR_13->ih)) {
  FUNC_3(VAR_13->dev, "unable to map interrupt\n");
  return VAR_4;
 }


 if (FUNC_1( FUNC_2(VAR_13->dev),
                  4,
                 0,
                VAR_1,
                 VAR_0,
               ((void*)0), ((void*)0),
                VAR_2,
                  1, 0x3ffff,
              0, ((void*)0),
                ((void*)0), &VAR_13->dmat) != 0) {
  FUNC_3(VAR_13->dev, "unable to create dma tag\n");
  return VAR_4;
 }

 return 0;
}
