
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rk_spi_softc {scalar_t__ txidx; scalar_t__ txlen; scalar_t__ fifo_size; int intreg; int * txbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rk_spi_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rk_spi_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct rk_spi_softc *VAR_4)
{
 uint32_t VAR_5;
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 int VAR_6 = 0;

 while (VAR_4->txidx < VAR_4->txlen && VAR_5 < VAR_4->fifo_size) {
  FUNC_1(VAR_4, VAR_2, VAR_4->txbuf[VAR_4->txidx++]);
  VAR_5++;
  VAR_6++;
 }

 if (VAR_4->txidx != VAR_4->txlen)
  VAR_4->intreg |= (VAR_1 | VAR_0);
}
