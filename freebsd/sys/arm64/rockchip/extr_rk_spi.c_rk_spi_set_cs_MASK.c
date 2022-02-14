
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_spi_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rk_spi_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct rk_spi_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct rk_spi_softc *VAR_4, uint32_t VAR_5, bool VAR_6)
{
 uint32_t VAR_7;

 if (VAR_5 & VAR_3) {
  FUNC_2(VAR_4->dev, "SPIBUS_CS_HIGH is not supported\n");
  return (VAR_1);
 }

 if (VAR_5 > VAR_0)
  return (VAR_1);

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6)
  VAR_7 |= (1 << VAR_5);
 else
  VAR_7 &= ~(1 << VAR_5);
 FUNC_1(VAR_4, VAR_2, VAR_7);

 return (0);
}
