
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ir_softc {int dcnt; unsigned char* buf; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static unsigned long
FUNC_1(struct aw_ir_softc *VAR_11)
{
 unsigned long VAR_12, VAR_13;
 unsigned char VAR_14, VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 if (VAR_10)
  FUNC_0(VAR_11->dev, "sc->dcnt = %d\n", VAR_11->dcnt);


 VAR_16 = (VAR_0 + 1) * (VAR_1 ? 128 : 1);
 VAR_12 = 0;
 VAR_12 += (VAR_16 >> 1);
 if (VAR_10)
  FUNC_0(VAR_11->dev, "Initial len: %ld\n", VAR_12);
 for (VAR_17 = 0; VAR_17 < VAR_11->dcnt; VAR_17++) {
  VAR_14 = VAR_11->buf[VAR_17];
  if (VAR_14 & VAR_9)
   VAR_12 += VAR_14 & VAR_8;
  else {
   if (VAR_12 > VAR_6)
    break;
   VAR_12 = 0;
  }
 }
 if (VAR_10)
  FUNC_0(VAR_11->dev, "len = %ld\n", VAR_12);
 if ((VAR_14 & VAR_9) || (VAR_12 <= VAR_6)) {
  if (VAR_10)
   FUNC_0(VAR_11->dev, "Bit separator error\n");
  goto error_code;
 }


 VAR_12 = 0;
 for (; VAR_17 < VAR_11->dcnt; VAR_17++) {
  VAR_14 = VAR_11->buf[VAR_17];
  if (VAR_14 & VAR_9) {
   if(VAR_12 > VAR_5)
    break;
   VAR_12 = 0;
  } else
   VAR_12 += VAR_14 & VAR_8;
 }
 if ((!(VAR_14 & VAR_9)) || (VAR_12 <= VAR_5)) {
  if (VAR_10)
   FUNC_0(VAR_11->dev, "Bit length error\n");
  goto error_code;
 }


 VAR_13 = 0;
 VAR_18 = 0;
 VAR_15 = 1;
 VAR_12 = 0;
 for (; VAR_17 < VAR_11->dcnt; VAR_17++) {
  VAR_14 = VAR_11->buf[VAR_17];
  if (VAR_15) {
   if (VAR_14 & VAR_9)
    VAR_12 += VAR_14 & VAR_8;
   else {
    if (VAR_12 > VAR_7) {
     if (VAR_10)
      FUNC_0(VAR_11->dev,
          "Pulse error\n");
     goto error_code;
    }
    VAR_15 = 0;
    VAR_12 = VAR_14 & VAR_8;
   }
  } else {
   if (VAR_14 & VAR_9) {
    if (VAR_12 > VAR_2) {
     if (VAR_10)
      FUNC_0(VAR_11->dev,
          "Distant error\n");
     goto error_code;
    } else {
     if (VAR_12 > VAR_3) {

      VAR_13 |= 1 << VAR_18;
     }
     VAR_18++;
     if (VAR_18 == 32)
      break;
    }
    VAR_15 = 1;
    VAR_12 = VAR_14 & VAR_8;
   } else
    VAR_12 += VAR_14 & VAR_8;
  }
 }
 return (VAR_13);

error_code:

 return (VAR_4);
}
