
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct rk_spi_softc {scalar_t__ rxidx; scalar_t__ rxlen; scalar_t__* rxbuf; } ;


 scalar_t__ FUNC_0 (struct rk_spi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct rk_spi_softc *VAR_2)
{
 uint32_t VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 while (VAR_2->rxidx < VAR_2->rxlen &&
     (VAR_3-- > 0)) {
  VAR_2->rxbuf[VAR_2->rxidx++] = (uint8_t)FUNC_0(VAR_2, VAR_0);
 }
}
