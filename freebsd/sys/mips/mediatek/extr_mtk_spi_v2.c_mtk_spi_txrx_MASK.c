
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtk_spi_softc*,int ) ;
 int FUNC_1 (struct mtk_spi_softc*,int ,int ) ;
 int FUNC_2 (struct mtk_spi_softc*,int ,int) ;
 scalar_t__ FUNC_3 (struct mtk_spi_softc*) ;

__attribute__((used)) static uint8_t
FUNC_4(struct mtk_spi_softc *VAR_7, uint8_t *VAR_8, int VAR_9)
{

 if (FUNC_3(VAR_7))
  return (0xff);

 if (VAR_9 == VAR_5) {
  FUNC_2(VAR_7, VAR_2, (*VAR_8));
  FUNC_2(VAR_7, VAR_1, (8<<24));
 } else {
  FUNC_2(VAR_7, VAR_1, (8<<12));
 }

 FUNC_1(VAR_7, VAR_3, VAR_6);

 if (FUNC_3(VAR_7))
  return (0xff);

 if (VAR_9 == VAR_4) {
  *VAR_8 = FUNC_0(VAR_7, VAR_0) & 0xff;
 }

 return (0);
}
