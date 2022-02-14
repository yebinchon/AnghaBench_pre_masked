
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct aw_spi_softc {scalar_t__ rxcnt; scalar_t__ rxlen; int * rxbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int FUNC_1 (struct aw_spi_softc*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct aw_spi_softc *VAR_4)
{
 uint32_t VAR_5;
 uint8_t VAR_6;
 int VAR_7;

 if (VAR_4->rxcnt == VAR_4->rxlen)
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 = (VAR_5 & VAR_1) >> VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (VAR_4->rxcnt < VAR_4->rxlen)
   VAR_4->rxbuf[VAR_4->rxcnt++] = VAR_6;
 }
}
