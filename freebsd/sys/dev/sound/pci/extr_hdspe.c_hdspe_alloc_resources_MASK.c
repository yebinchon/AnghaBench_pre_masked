
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int bufsize; int rbuf; int pbuf; int dev; int rmap; int dmat; int pmap; int ih; void* irq; scalar_t__ irqid; void* cs; int csh; int cst; scalar_t__ csid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,int ,struct sc_info*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,void*,int,int *,int ,struct sc_info*,int *) ;
 int VAR_12 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int
FUNC_11(struct sc_info *VAR_15)
{


 VAR_15->csid = FUNC_0(0);
 VAR_15->cs = FUNC_1(VAR_15->dev, VAR_11,
     &VAR_15->csid, VAR_8);

 if (!VAR_15->cs) {
  FUNC_8(VAR_15->dev, "Unable to map SYS_RES_MEMORY.\n");
  return (VAR_3);
 }

 VAR_15->cst = FUNC_10(VAR_15->cs);
 VAR_15->csh = FUNC_9(VAR_15->cs);


 VAR_15->irqid = 0;
 VAR_15->irq = FUNC_1(VAR_15->dev, VAR_10, &VAR_15->irqid,
     VAR_8 | VAR_9);

 if (!VAR_15->irq ||
     FUNC_6(VAR_15->dev, VAR_15->irq, VAR_6 | VAR_7,
  ((void*)0), VAR_14, VAR_15, &VAR_15->ih)) {
  FUNC_8(VAR_15->dev, "Unable to alloc interrupt resource.\n");
  return (VAR_3);
 }


 if (FUNC_2( FUNC_5(VAR_15->dev),
               4,
              0,
             VAR_2,
              VAR_1,
            ((void*)0),
               ((void*)0),
             2 * VAR_5,
               2,
              VAR_5,
           0,
              VAR_12,
             &VAR_4,
            &VAR_15->dmat) != 0) {
  FUNC_8(VAR_15->dev, "Unable to create dma tag.\n");
  return (VAR_3);
 }

 VAR_15->bufsize = VAR_5;


 if (FUNC_4(VAR_15->dmat, (void **)&VAR_15->pbuf,
  VAR_0, &VAR_15->pmap)) {
  FUNC_8(VAR_15->dev, "Can't alloc pbuf.\n");
  return (VAR_3);
 }

 if (FUNC_3(VAR_15->dmat, VAR_15->pmap, VAR_15->pbuf, VAR_15->bufsize,
  VAR_13, VAR_15, 0)) {
  FUNC_8(VAR_15->dev, "Can't load pbuf.\n");
  return (VAR_3);
 }


 if (FUNC_4(VAR_15->dmat, (void **)&VAR_15->rbuf,
  VAR_0, &VAR_15->rmap)) {
  FUNC_8(VAR_15->dev, "Can't alloc rbuf.\n");
  return (VAR_3);
 }

 if (FUNC_3(VAR_15->dmat, VAR_15->rmap, VAR_15->rbuf, VAR_15->bufsize,
  VAR_13, VAR_15, 0)) {
  FUNC_8(VAR_15->dev, "Can't load rbuf.\n");
  return (VAR_3);
 }

 FUNC_7(VAR_15->pbuf, VAR_15->bufsize);
 FUNC_7(VAR_15->rbuf, VAR_15->bufsize);

 return (0);
}
