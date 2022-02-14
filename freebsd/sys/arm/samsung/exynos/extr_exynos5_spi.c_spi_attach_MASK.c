
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_softc {int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct spi_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct spi_softc* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8)
{
 struct spi_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->dev = VAR_8;

 if (FUNC_2(VAR_8, VAR_7, VAR_9->res)) {
  FUNC_6(VAR_8, "could not allocate resources\n");
  return (VAR_1);
 }


 VAR_9->bst = FUNC_8(VAR_9->res[0]);
 VAR_9->bsh = FUNC_7(VAR_9->res[0]);

 VAR_6 = VAR_9;

 FUNC_1(VAR_9, VAR_3, VAR_2);

 VAR_10 = FUNC_0(VAR_9, VAR_0);
 VAR_10 |= (VAR_4 | VAR_5);
 FUNC_1(VAR_9, VAR_0, VAR_10);

 FUNC_4(VAR_8, "spibus", 0);
 return (FUNC_3(VAR_8));
}
