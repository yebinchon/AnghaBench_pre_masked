
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
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct spi_softc*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_11)
{
 struct spi_softc *VAR_12;
 uint32_t VAR_13;

 VAR_12 = FUNC_5(VAR_11);

 if (FUNC_2(VAR_11, VAR_10, VAR_12->res)) {
  FUNC_6(VAR_11, "could not allocate resources\n");
  return (VAR_5);
 }


 VAR_12->bst = FUNC_8(VAR_12->res[0]);
 VAR_12->bsh = FUNC_7(VAR_12->res[0]);


 FUNC_1(VAR_12, VAR_8, VAR_9);

 FUNC_0(1000);

 VAR_13 = (VAR_0 | VAR_1 | VAR_2 | VAR_3);
 FUNC_1(VAR_12, VAR_6, VAR_13);
 FUNC_1(VAR_12, VAR_7, 0);

 VAR_13 = (VAR_0 | VAR_1 | VAR_4);
 FUNC_1(VAR_12, VAR_6, VAR_13);

 FUNC_4(VAR_11, "spibus", 0);
 return (FUNC_3(VAR_11));
}
