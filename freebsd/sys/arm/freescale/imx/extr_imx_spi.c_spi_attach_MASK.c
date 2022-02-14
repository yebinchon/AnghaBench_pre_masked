
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_softc {int debug; int spibus; int dev; int * cspins; int inthandle; int * intres; int * memres; int mtx; int basefreq; } ;
typedef int phandle_t ;
typedef int ich_func_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct spi_softc*,int ,int ) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,int *,int,int *,int ,struct spi_softc*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct spi_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,int ,char*,int,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_20(device_t VAR_14)
{
 struct spi_softc *VAR_15 = FUNC_9(VAR_14);
 phandle_t VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_15->dev = VAR_14;
 VAR_15->basefreq = FUNC_15();

 FUNC_16(&VAR_15->mtx, FUNC_8(VAR_14), ((void*)0), VAR_7);


 FUNC_0(FUNC_10(VAR_15->dev),
     FUNC_1(FUNC_11(VAR_15->dev)),
     VAR_8, "debug", VAR_0, &VAR_15->debug, 0,
     "Enable debug, higher values = more info");


 VAR_19 = 0;
 VAR_15->memres = FUNC_3(VAR_15->dev, VAR_11, &VAR_19,
     VAR_9);
 if (VAR_15->memres == ((void*)0)) {
  FUNC_12(VAR_15->dev, "could not allocate registers\n");
  FUNC_19(VAR_15->dev);
  return (VAR_3);
 }


 VAR_19 = 0;
 VAR_15->intres = FUNC_3(VAR_15->dev, VAR_10, &VAR_19,
     VAR_9);
 if (VAR_15->intres == ((void*)0)) {
  FUNC_12(VAR_15->dev, "could not allocate interrupt\n");
  FUNC_7(VAR_15->dev);
  return (VAR_3);
 }
 VAR_17 = FUNC_4(VAR_15->dev, VAR_15->intres, VAR_6 | VAR_5,
     ((void*)0), VAR_13, VAR_15, &VAR_15->inthandle);
 if (VAR_17 != 0) {
  FUNC_12(VAR_15->dev, "could not setup interrupt handler");
  FUNC_7(VAR_15->dev);
  return (VAR_3);
 }


 VAR_16 = FUNC_18(VAR_15->dev);
 for (VAR_18 = 0; VAR_18 < FUNC_17(VAR_15->cspins); ++VAR_18) {
  VAR_17 = FUNC_13(VAR_15->dev, VAR_16, "cs-gpios",
      VAR_18, &VAR_15->cspins[VAR_18]);
  if (VAR_17 == 0) {
   FUNC_14(VAR_15->cspins[VAR_18], VAR_4);
  } else if (VAR_15->debug >= 2) {
   FUNC_12(VAR_15->dev,
       "cannot configure gpio for chip select %u\n", VAR_18);
  }
 }





 FUNC_2(VAR_15, VAR_2, VAR_1);







 VAR_15->spibus = FUNC_6(VAR_14, "spibus", -1);
 FUNC_5((ich_func_t)VAR_12, VAR_14);

 return (0);
}
