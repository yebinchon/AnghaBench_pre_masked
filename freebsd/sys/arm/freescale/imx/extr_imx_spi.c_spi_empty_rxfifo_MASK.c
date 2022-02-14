
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct spi_softc {scalar_t__ rxidx; scalar_t__ rxlen; int fifocnt; scalar_t__* rxbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_softc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct spi_softc *VAR_3)
{

 while (VAR_3->rxidx < VAR_3->rxlen && (FUNC_0(VAR_3, VAR_1) & VAR_2)) {
  VAR_3->rxbuf[VAR_3->rxidx++] = (uint8_t)FUNC_0(VAR_3, VAR_0);
  --VAR_3->fifocnt;
 }
}
