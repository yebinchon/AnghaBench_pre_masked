
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_spi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_spi_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mtk_spi_softc *VAR_2)
{
 int VAR_3 = 1000;

 while (VAR_3--) {
  if (!(FUNC_0(VAR_2, VAR_0) & VAR_1))
   break;
 }
 if (VAR_3 == 0) {
  return (1);
 }

 return (0);
}
