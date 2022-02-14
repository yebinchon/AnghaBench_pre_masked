
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct cmx_softc {int dev; int * buf; int timeout; scalar_t__ dying; } ;
struct cdev {struct cmx_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cmx_softc*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cmx_softc*,int ,int ) ;
 int FUNC_5 (struct cmx_softc*,int ) ;
 int FUNC_6 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 struct cmx_softc *VAR_11 = VAR_8->si_drv1;
 int VAR_12, VAR_13;

 if (VAR_11 == ((void*)0) || VAR_11->dying)
  return VAR_4;

 FUNC_0(VAR_11->dev, "called (len=%d flag=%b)\n",
   VAR_9->uio_resid, VAR_10, VAR_5);

 if (VAR_9->uio_resid == 0) {
  return 0;
 }

 if (VAR_9->uio_resid < VAR_2) {
  return VAR_3;
 }

 if ((VAR_12 = FUNC_2(VAR_11, VAR_7)) != 0) {
  return VAR_12;
 }

 VAR_11->timeout = 0;
 while (VAR_9->uio_resid > 0) {
  VAR_13 = FUNC_1(VAR_9->uio_resid, sizeof(VAR_11->buf));

  if ((VAR_12 = FUNC_6(VAR_11->buf, VAR_13, VAR_9)) != 0) {
   FUNC_0(VAR_11->dev, "uiomove failed (%d)\n", VAR_12);

   VAR_11->timeout = VAR_1;
   FUNC_2(VAR_11, VAR_6);
   return VAR_12;
  }

  if (VAR_11->timeout == 0) {
   VAR_11->timeout = FUNC_3(VAR_11->buf[0]);
   FUNC_0(VAR_11->dev, "cmd=%02x timeout=%lu\n",
     VAR_11->buf[0], VAR_11->timeout);
  }

  for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   if ((VAR_12 = FUNC_4(VAR_11, VAR_0, 0))!=0) {
    return VAR_12;
   }
   FUNC_5(VAR_11, VAR_11->buf[VAR_14]);
   FUNC_0(VAR_11->dev, "buf[%02x]=%02x\n",
     VAR_14, VAR_11->buf[VAR_14]);
  }
 }

 if ((VAR_12 = FUNC_2(VAR_11, VAR_6)) != 0) {
  return VAR_12;
 }

 FUNC_0(VAR_11->dev, "success\n");
 return 0;
}
