
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uio {size_t uio_resid; } ;
struct cyapa_softc {int data_signal; int delta_x; int delta_y; scalar_t__ track_but; scalar_t__ reported_but; int delta_z; int zenabled; int blocked; int rfifo; int mutex; int fuzz_z; int fuzz_y; int fuzz_x; } ;
struct cdev {struct cyapa_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct cyapa_softc*) ;
 int FUNC_2 (struct cyapa_softc*) ;
 int FUNC_3 (struct cyapa_softc*) ;
 scalar_t__ FUNC_4 (struct cyapa_softc*,int *) ;
 char* FUNC_5 (struct cyapa_softc*,int *,size_t) ;
 size_t FUNC_6 (struct cyapa_softc*,int *) ;
 int FUNC_7 (struct cyapa_softc*,int *,int) ;
 int FUNC_8 (int*,int *,int ,char*,int ) ;
 int FUNC_9 (char*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct cyapa_softc *VAR_9;
 int VAR_10;
 int VAR_11;
 size_t VAR_12;
 char* VAR_13;

 VAR_9 = VAR_6->si_drv1;

 FUNC_1(VAR_9);
again:
 if (FUNC_4(VAR_9, &VAR_9->rfifo) &&
     (VAR_9->data_signal || VAR_9->delta_x || VAR_9->delta_y ||
      VAR_9->track_but != VAR_9->reported_but)) {
  uint8_t VAR_14;
  uint16_t VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;


  VAR_9->data_signal = 0;
  VAR_16 = VAR_9->delta_x;
  VAR_17 = VAR_9->delta_y;
  VAR_18 = VAR_9->delta_z;
  if (VAR_16 > 255) {
   VAR_16 = 255;
   VAR_9->data_signal = 1;
  }
  if (VAR_16 < -256) {
   VAR_16 = -256;
   VAR_9->data_signal = 1;
  }
  if (VAR_17 > 255) {
   VAR_17 = 255;
   VAR_9->data_signal = 1;
  }
  if (VAR_17 < -256) {
   VAR_17 = -256;
   VAR_9->data_signal = 1;
  }
  if (VAR_18 > 255) {
   VAR_18 = 255;
   VAR_9->data_signal = 1;
  }
  if (VAR_18 < -256) {
   VAR_18 = -256;
   VAR_9->data_signal = 1;
  }
  VAR_15 = VAR_9->track_but;


  VAR_9->delta_x -= VAR_16;
  VAR_9->delta_y -= VAR_17;
  VAR_9->delta_z -= VAR_18;
  VAR_9->reported_but = VAR_15;







  VAR_16 = FUNC_0(VAR_16, &VAR_9->fuzz_x);
  VAR_17 = FUNC_0(VAR_17, &VAR_9->fuzz_y);
  VAR_18 = FUNC_0(VAR_18, &VAR_9->fuzz_z);




  VAR_14 = 0;
  if (VAR_16 < 0)
   VAR_14 |= 0x10;
  if (VAR_17 < 0)
   VAR_14 |= 0x20;
  VAR_14 |= 0x08;
  if (VAR_15 & VAR_0)
   VAR_14 |= 0x01;
  if (VAR_15 & VAR_1)
   VAR_14 |= 0x04;
  if (VAR_15 & VAR_2)
   VAR_14 |= 0x02;

  FUNC_7(VAR_9, &VAR_9->rfifo, VAR_14);
  FUNC_7(VAR_9, &VAR_9->rfifo, (uint8_t)VAR_16);
  FUNC_7(VAR_9, &VAR_9->rfifo, (uint8_t)VAR_17);
  switch(VAR_9->zenabled) {
  case 1:

   FUNC_7(VAR_9, &VAR_9->rfifo, (uint8_t)VAR_18);
   break;
  case 2:






   while (VAR_18 > 7 || VAR_18 < -8)
    VAR_18 >>= 1;
   VAR_14 = (uint8_t)VAR_18 & 0x0F;
   FUNC_7(VAR_9, &VAR_9->rfifo, VAR_14);
   break;
  default:

   break;
  }
  FUNC_2(VAR_9);
 }


 VAR_10 = 0;
 VAR_11 = (VAR_7->uio_resid == 0);

 while ((VAR_8 & VAR_4) == 0 && FUNC_4(VAR_9, &VAR_9->rfifo)) {
  if (VAR_9->data_signal)
   goto again;
  VAR_9->blocked = 1;
  VAR_10 = FUNC_8(&VAR_9->blocked, &VAR_9->mutex, VAR_5, "cyablk", 0);
  if (VAR_10)
   break;
 }


 while (VAR_10 == 0 && VAR_7->uio_resid &&
     (VAR_12 = FUNC_6(VAR_9, &VAR_9->rfifo)) > 0) {
  if (VAR_12 > VAR_7->uio_resid)
   VAR_12 = VAR_7->uio_resid;
  VAR_13 = FUNC_5(VAR_9, &VAR_9->rfifo, 0);
  FUNC_3(VAR_9);
  VAR_10 = FUNC_9(VAR_13, VAR_12, VAR_7);
  FUNC_1(VAR_9);
  if (VAR_10)
   break;
  FUNC_5(VAR_9, &VAR_9->rfifo, VAR_12);
  VAR_11 = 1;
 }
 FUNC_3(VAR_9);

 if (VAR_10 == 0 && VAR_11 == 0) {
  VAR_10 = VAR_3;
 }
 return (VAR_11 ? 0 : VAR_10);
}
