
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_spi_softc {scalar_t__ txcnt; scalar_t__ txlen; scalar_t__ transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int FUNC_1 (struct aw_spi_softc*,int ,int) ;
 int FUNC_2 (struct aw_spi_softc*) ;
 int FUNC_3 (struct aw_spi_softc*) ;
 int FUNC_4 (struct aw_spi_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
 struct aw_spi_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (struct aw_spi_softc *)VAR_5;

 VAR_7 = FUNC_0(VAR_6, VAR_4);

 if (VAR_7 & VAR_1)
  FUNC_3(VAR_6);

 if (VAR_7 & VAR_3) {
  FUNC_2(VAR_6);




  if (VAR_6->txcnt == VAR_6->txlen)
   FUNC_1(VAR_6, VAR_0, VAR_2 |
       VAR_1);
 }

 if (VAR_7 & VAR_2) {

  FUNC_3(VAR_6);


  FUNC_1(VAR_6, VAR_0, 0);
  VAR_6->transfer = 0;
  FUNC_4(VAR_6);
 }


 FUNC_1(VAR_6, VAR_4, VAR_7);
}
