
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtk_spi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtk_spi_softc*,int ) ;
 int FUNC_1 (struct mtk_spi_softc*,int ,int ) ;
 int FUNC_2 (struct mtk_spi_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct mtk_spi_softc*) ;

__attribute__((used)) static uint8_t
FUNC_4(struct mtk_spi_softc *VAR_6, uint8_t *VAR_7, int VAR_8)
{

 if (FUNC_3(VAR_6))
  return (VAR_0);

 if (VAR_8 == VAR_3) {
  FUNC_2(VAR_6, VAR_2, *VAR_7);
  FUNC_1(VAR_6, VAR_1, VAR_5);
 } else {
  FUNC_1(VAR_6, VAR_1, VAR_4);
  if (FUNC_3(VAR_6))
   return (VAR_0);

  *VAR_7 = FUNC_0(VAR_6, VAR_2) & 0xff;
 }
 return (0);
}
