
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rk_spi_softc {scalar_t__ rxlen; scalar_t__ rxidx; scalar_t__ txlen; scalar_t__ txidx; scalar_t__ intreg; int mtx; void* txbuf; void* rxbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rk_spi_softc*,int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct rk_spi_softc*,int *,int ,char*,int) ;
 int FUNC_2 (struct rk_spi_softc*) ;
 int FUNC_3 (struct rk_spi_softc*) ;

__attribute__((used)) static int
FUNC_4(struct rk_spi_softc *VAR_3, void *VAR_4, void *VAR_5, uint32_t VAR_6)
{
 int VAR_7;

 if (VAR_6 == 0)
  return (0);

 VAR_3->rxbuf = VAR_4;
 VAR_3->rxlen = VAR_6;
 VAR_3->rxidx = 0;
 VAR_3->txbuf = VAR_5;
 VAR_3->txlen = VAR_6;
 VAR_3->txidx = 0;
 VAR_3->intreg = 0;
 FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_1, VAR_3->intreg);

 VAR_7 = 0;
 while (VAR_7 == 0 && VAR_3->intreg != 0)
  VAR_7 = FUNC_1(VAR_3, &VAR_3->mtx, 0, "rk_spi", 10 * VAR_2);

 while (VAR_7 == 0 && VAR_3->rxidx != VAR_3->txidx) {

  FUNC_2(VAR_3);
 }

 if (VAR_3->rxidx != VAR_3->rxlen || VAR_3->txidx != VAR_3->txlen)
  VAR_7 = VAR_0;

 return (VAR_7);
}
