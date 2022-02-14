
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uio {int uio_resid; } ;
struct cmx_softc {int dev; void** buf; int sel; int ch; scalar_t__ polling; scalar_t__ dying; } ;
struct cdev {struct cmx_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmx_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned long,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct cmx_softc*) ;
 int FUNC_7 (struct cmx_softc*,int ) ;
 scalar_t__ FUNC_8 (struct cmx_softc*,int ,int ) ;
 int FUNC_9 (struct cmx_softc*,int ,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (void**,int,struct uio*) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_9, struct uio *VAR_10, int VAR_11)
{
 struct cmx_softc *VAR_12 = VAR_9->si_drv1;
 unsigned long VAR_13;
 uint8_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (VAR_12 == ((void*)0) || VAR_12->dying)
  return VAR_4;

 FUNC_2(VAR_12->dev, "called (len=%d flag=%b)\n",
  VAR_10->uio_resid, VAR_11, VAR_5);

 FUNC_0(VAR_12);
 if (VAR_12->polling) {
  FUNC_2(VAR_12->dev, "disabling polling\n");
  FUNC_5(&VAR_12->ch);
  VAR_12->polling = 0;
  FUNC_1(VAR_12);
  FUNC_4(&VAR_12->ch);
  FUNC_10(&VAR_12->sel, VAR_7);
 } else {
  FUNC_1(VAR_12);
 }

 if (VAR_10->uio_resid == 0) {
  return 0;
 }

 if (VAR_10->uio_resid < VAR_1) {
  return VAR_3;
 }

 if (VAR_11 & VAR_6) {
  if (FUNC_8(VAR_12, VAR_0, 0)) {
   return VAR_2;
  }
 }

 for (int VAR_18 = 0; VAR_18 < 5; VAR_18++) {
  if ((VAR_15 = FUNC_9(VAR_12, VAR_0, 1)) != 0) {
   return VAR_15;
  }
  VAR_12->buf[VAR_18] = FUNC_6(VAR_12);
  FUNC_2(VAR_12->dev, "buf[%02x]=%02x\n", VAR_18, VAR_12->buf[VAR_18]);
 }

 VAR_13 = VAR_1 +
                 (0x000000FF&((char)VAR_12->buf[1])) +
                 (0x0000FF00&((char)VAR_12->buf[2] << 8)) +
                 (0x00FF0000&((char)VAR_12->buf[3] << 16)) +
                 (0xFF000000&((char)VAR_12->buf[4] << 24));
 FUNC_2(VAR_12->dev, "msgsz=%lu\n", VAR_13);

 if (VAR_10->uio_resid < VAR_13) {
  return VAR_3;
 }

 VAR_17 = 5;
 while (VAR_13 > 0) {
  VAR_16 = FUNC_3(VAR_13, sizeof(VAR_12->buf));

  for (int VAR_19 = VAR_17; VAR_19 < VAR_16; VAR_19++) {
   if ((VAR_15 = FUNC_9(VAR_12, VAR_0, 1))!=0) {
    return VAR_15;
   }
   VAR_12->buf[VAR_19] = FUNC_6(VAR_12);
   FUNC_2(VAR_12->dev, "buf[%02x]=%02x\n",
     VAR_19, VAR_12->buf[VAR_19]);
  }

  if ((VAR_15 = FUNC_11(VAR_12->buf, VAR_16, VAR_10)) != 0) {
   FUNC_2(VAR_12->dev, "uiomove failed (%d)\n", VAR_15);
   return VAR_15;
  }

  if (VAR_17)
   VAR_17 = 0;
  VAR_13 -= VAR_16;
 }

 if ((VAR_15 = FUNC_9(VAR_12, VAR_0, 1)) != 0) {
  return VAR_15;
 }

 if ((VAR_15 = FUNC_7(VAR_12, VAR_8)) != 0) {
  return VAR_15;
 }

 VAR_14 = FUNC_6(VAR_12);
 FUNC_2(VAR_12->dev, "success (DTR=%02x)\n", VAR_14);
 return 0;
}
