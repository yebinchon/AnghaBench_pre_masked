
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dev; int dmat; int ih; void* irq; void* irqid; void* mt; void* mth; void* mtt; void* ds; void* dsh; void* dst; void* ddma; void* ddmah; void* ddmat; void* cs; void* csh; void* cst; void* mtid; void* dsid; void* ddmaid; void* csid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int ,int ,void**,int) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_14 ;
 int FUNC_4 (int ,void*,int) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,void*,int ,int ,struct sc_info*,int *) ;

__attribute__((used)) static int
FUNC_8(struct sc_info *VAR_15)
{

 VAR_15->csid = VAR_5;
 VAR_15->cs = FUNC_0(VAR_15->dev, VAR_11,
     &VAR_15->csid, VAR_9);
 VAR_15->ddmaid = VAR_6;
 VAR_15->ddma = FUNC_0(VAR_15->dev, VAR_11,
     &VAR_15->ddmaid, VAR_9);
 VAR_15->dsid = VAR_7;
 VAR_15->ds = FUNC_0(VAR_15->dev, VAR_11,
     &VAR_15->dsid, VAR_9);
 VAR_15->mtid = VAR_8;
 VAR_15->mt = FUNC_0(VAR_15->dev, VAR_11,
     &VAR_15->mtid, VAR_9);
 if (!VAR_15->cs || !VAR_15->ddma || !VAR_15->ds || !VAR_15->mt) {
  FUNC_3(VAR_15->dev, "unable to map IO port space\n");
  return VAR_2;
 }
 VAR_15->cst = FUNC_6(VAR_15->cs);
 VAR_15->csh = FUNC_5(VAR_15->cs);
 VAR_15->ddmat = FUNC_6(VAR_15->ddma);
 VAR_15->ddmah = FUNC_5(VAR_15->ddma);
 VAR_15->dst = FUNC_6(VAR_15->ds);
 VAR_15->dsh = FUNC_5(VAR_15->ds);
 VAR_15->mtt = FUNC_6(VAR_15->mt);
 VAR_15->mth = FUNC_5(VAR_15->mt);
 VAR_15->irqid = 0;
 VAR_15->irq = FUNC_0(VAR_15->dev, VAR_12, &VAR_15->irqid,
     VAR_9 | VAR_10);
 if (!VAR_15->irq ||
     FUNC_7(VAR_15->dev, VAR_15->irq, VAR_4, VAR_14, VAR_15, &VAR_15->ih)) {
  FUNC_3(VAR_15->dev, "unable to map interrupt\n");
  return VAR_2;
 }


 if (FUNC_1( FUNC_2(VAR_15->dev),
                  4,
                 0,
                VAR_0,
                 VAR_0,
               ((void*)0), ((void*)0),
                VAR_1,
                  1, 0x3ffff,
              0, VAR_13,
                &VAR_3, &VAR_15->dmat) != 0) {
  FUNC_3(VAR_15->dev, "unable to create dma tag\n");
  return VAR_2;
 }

 return 0;
}
