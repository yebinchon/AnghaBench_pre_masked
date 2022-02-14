
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_softc {int dummy; } ;


 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct spi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct spi_softc *VAR_4, uint8_t *VAR_5,
    uint8_t *VAR_6, int VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_1(VAR_4, VAR_1, VAR_5[VAR_10]);

  while(!(FUNC_0(VAR_4, VAR_2) & VAR_3))
   continue;

  VAR_9 = FUNC_0(VAR_4, VAR_0);
  if (VAR_6)
   VAR_6[VAR_10] = (VAR_9 & 0xff);
 }

 return (0);
}
