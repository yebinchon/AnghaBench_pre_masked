
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_spi_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_spi_softc*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct mtk_spi_softc *VAR_1)
{
 int VAR_2 = 1000;

 while (VAR_2--) {
  if (!FUNC_0(VAR_1, VAR_0))
   break;
 }
 if (VAR_2 == 0) {
  FUNC_1("busy\n");
  return (1);
 }

 return (0);
}
