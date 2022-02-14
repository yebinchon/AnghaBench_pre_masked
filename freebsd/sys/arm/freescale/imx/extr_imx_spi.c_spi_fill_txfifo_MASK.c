
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_softc {scalar_t__ txidx; scalar_t__ txlen; scalar_t__ fifocnt; int intreg; int * txbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct spi_softc *VAR_4)
{

 while (VAR_4->txidx < VAR_4->txlen && VAR_4->fifocnt < VAR_1) {
  FUNC_0(VAR_4, VAR_0, VAR_4->txbuf[VAR_4->txidx++]);
  ++VAR_4->fifocnt;
 }





 if (VAR_4->txidx == VAR_4->txlen)
  VAR_4->intreg = (VAR_4->intreg & ~VAR_2) | VAR_3;
}
