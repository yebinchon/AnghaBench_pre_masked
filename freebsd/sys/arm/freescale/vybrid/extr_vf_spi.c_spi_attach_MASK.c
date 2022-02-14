
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_softc {int * res; int bsh; int bst; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct spi_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_24)
{
 struct spi_softc *VAR_25;
 uint32_t VAR_26;

 VAR_25 = FUNC_5(VAR_24);

 if (FUNC_2(VAR_24, VAR_23, VAR_25->res)) {
  FUNC_6(VAR_24, "could not allocate resources\n");
  return (VAR_9);
 }


 VAR_25->bst = FUNC_8(VAR_25->res[0]);
 VAR_25->bsh = FUNC_7(VAR_25->res[0]);

 VAR_26 = FUNC_0(VAR_25, VAR_21);
 VAR_26 |= VAR_16;
 VAR_26 &= ~(VAR_12 | VAR_15 | VAR_13);
 VAR_26 &= ~(VAR_17 << VAR_18);
 VAR_26 |= (VAR_17 << VAR_18);
 VAR_26 |= (VAR_11 | VAR_10);
 FUNC_1(VAR_25, VAR_21, VAR_26);

 VAR_26 = FUNC_0(VAR_25, VAR_22);
 VAR_26 |= VAR_19;
 FUNC_1(VAR_25, VAR_22, VAR_26);

 VAR_26 = FUNC_0(VAR_25, VAR_21);
 VAR_26 &= ~VAR_14;
 FUNC_1(VAR_25, VAR_21, VAR_26);

 VAR_26 = FUNC_0(VAR_25, VAR_20);
 VAR_26 &= ~(VAR_3 << VAR_4);
 VAR_26 |= (VAR_2 << VAR_4);






 VAR_26 &= ~VAR_1;
 VAR_26 |= VAR_0;




 VAR_26 |= VAR_5;
 FUNC_1(VAR_25, VAR_20, VAR_26);

 VAR_26 = FUNC_0(VAR_25, VAR_20);
 VAR_26 &= ~(VAR_7 << VAR_8);
 VAR_26 |= (VAR_6 << VAR_8);
 FUNC_1(VAR_25, VAR_20, VAR_26);

 FUNC_4(VAR_24, "spibus", 0);
 return (FUNC_3(VAR_24));
}
