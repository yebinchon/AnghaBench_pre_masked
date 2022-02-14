
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int FUNC_1 (struct spi_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct spi_softc*,int ,int ) ;
 int FUNC_3 (struct spi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct spi_softc *VAR_11, uint8_t *VAR_12,
    uint8_t *VAR_13, int VAR_14, int VAR_15)
{
 uint32_t VAR_16;
 uint32_t VAR_17;

 if (VAR_14 == 0) {

  return (0);
 }


 VAR_16 = FUNC_1(VAR_11, VAR_0);
 VAR_16 |= VAR_8;
 FUNC_3(VAR_11, VAR_0, VAR_16);
 VAR_16 &= ~VAR_8;
 FUNC_3(VAR_11, VAR_0, VAR_16);


 VAR_16 = FUNC_1(VAR_11, VAR_1);
 VAR_16 &= ~VAR_2;
 FUNC_3(VAR_11, VAR_1, VAR_16);

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {




  while (FUNC_1(VAR_11, VAR_6) & (VAR_9 << VAR_10))

   continue;

  FUNC_2(VAR_11, VAR_7, VAR_12[VAR_17]);


  while ((FUNC_1(VAR_11, VAR_6) & (VAR_3 << VAR_4)) == 0)

   continue;

  VAR_13[VAR_17] = FUNC_0(VAR_11, VAR_5);
 }


 VAR_16 = FUNC_1(VAR_11, VAR_1);
 VAR_16 |= VAR_2;
 FUNC_3(VAR_11, VAR_1, VAR_16);

 return (0);
}
