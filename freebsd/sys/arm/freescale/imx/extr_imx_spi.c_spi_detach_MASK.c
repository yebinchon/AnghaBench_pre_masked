
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_softc {int mtx; int * memres; int dev; int * intres; int * inthandle; int ** cspins; int * spibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 struct spi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct spi_softc *VAR_3 = FUNC_4(VAR_2);
 int VAR_4, VAR_5;

 if ((VAR_4 = FUNC_0(VAR_3->dev)) != 0)
  return (VAR_4);

 if (VAR_3->spibus != ((void*)0))
  FUNC_3(VAR_2, VAR_3->spibus);

 for (VAR_5 = 0; VAR_5 < FUNC_7(VAR_3->cspins); ++VAR_5) {
  if (VAR_3->cspins[VAR_5] != ((void*)0))
   FUNC_5(VAR_3->cspins[VAR_5]);
 }

 if (VAR_3->inthandle != ((void*)0))
  FUNC_2(VAR_3->dev, VAR_3->intres, VAR_3->inthandle);
 if (VAR_3->intres != ((void*)0))
  FUNC_1(VAR_3->dev, VAR_0, 0, VAR_3->intres);
 if (VAR_3->memres != ((void*)0))
  FUNC_1(VAR_3->dev, VAR_1, 0, VAR_3->memres);

 FUNC_6(&VAR_3->mtx);

 return (0);
}
