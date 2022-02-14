
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_spi_softc {scalar_t__ txcnt; scalar_t__ txlen; int * txbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct aw_spi_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct aw_spi_softc *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5->txcnt == VAR_5->txlen)
  return;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 &= VAR_2;
 VAR_7 = VAR_6 >> VAR_3;

 for (VAR_8 = 0; VAR_8 < (VAR_0 - VAR_7); VAR_8++) {
  FUNC_1(VAR_5, VAR_4, VAR_5->txbuf[VAR_5->txcnt++]);
  if (VAR_5->txcnt == VAR_5->txlen)
   break;
 }

 return;
}
