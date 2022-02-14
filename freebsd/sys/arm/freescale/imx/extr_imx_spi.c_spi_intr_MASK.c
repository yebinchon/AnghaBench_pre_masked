
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_softc {int intreg; int debug; scalar_t__ txidx; scalar_t__ txlen; scalar_t__ fifocnt; int mtx; int dev; int rxidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct spi_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_softc*) ;
 int FUNC_7 (struct spi_softc*) ;
 int FUNC_8 (struct spi_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_11)
{
 struct spi_softc *VAR_12 = VAR_11;
 uint32_t VAR_13, VAR_14;

 FUNC_4(&VAR_12->mtx);

 VAR_12 = VAR_11;
 VAR_13 = VAR_12->intreg;
 VAR_14 = FUNC_0(VAR_12, VAR_1);
 FUNC_1(VAR_12, VAR_1, VAR_14);






 if (FUNC_2(VAR_14 & VAR_5)) {
  if (VAR_12->debug || VAR_10) {
   FUNC_3(VAR_12->dev, "rxoverflow rxidx %u txidx %u\n",
       VAR_12->rxidx, VAR_12->txidx);
  }
  VAR_12->intreg = 0;
  FUNC_8(VAR_12);
  FUNC_5(&VAR_12->mtx);
  return;
 }

 if (VAR_14 & VAR_6)
  FUNC_6(VAR_12);

 if (VAR_14 & VAR_8)
  FUNC_7(VAR_12);
 if (VAR_12->txidx == VAR_12->txlen) {
  if ((VAR_14 & VAR_7) && VAR_12->fifocnt == 0) {
   VAR_12->intreg = 0;
   FUNC_8(VAR_12);
  } else if (VAR_14 & VAR_9) {
   VAR_12->intreg &= ~(VAR_12->intreg & ~VAR_4);
   VAR_12->intreg |= VAR_3 | VAR_2;
  }
 }






 if (VAR_12->intreg != VAR_13) {
  FUNC_1(VAR_12, VAR_0, VAR_12->intreg);
  (void)FUNC_0(VAR_12, VAR_0);
 }

 if (VAR_12->debug >= 3) {
  FUNC_3(VAR_12->dev,
      "spi_intr, sreg 0x%08x intreg was 0x%08x now 0x%08x\n",
      VAR_14, VAR_13, VAR_12->intreg);
 }

 FUNC_5(&VAR_12->mtx);
}
