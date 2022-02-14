
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_spi_softc {scalar_t__ txidx; scalar_t__ txlen; int intreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rk_spi_softc*) ;
 int FUNC_1 (struct rk_spi_softc*,int ) ;
 int FUNC_2 (struct rk_spi_softc*) ;
 int FUNC_3 (struct rk_spi_softc*,int ,int) ;
 int FUNC_4 (struct rk_spi_softc*) ;
 int FUNC_5 (struct rk_spi_softc*) ;
 int FUNC_6 (struct rk_spi_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 struct rk_spi_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = VAR_5;

 FUNC_0(VAR_6);
 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6, VAR_4);
 FUNC_3(VAR_6, VAR_2, VAR_8);

 if (VAR_8 & VAR_0)
  FUNC_4(VAR_6);

 if (VAR_8 & VAR_1)
  FUNC_5(VAR_6);


 if (VAR_6->txidx == VAR_6->txlen) {
  VAR_6->intreg = 0;
  FUNC_6(VAR_6);
 }

 if (VAR_6->intreg != VAR_7) {
  (void)FUNC_3(VAR_6, VAR_3, VAR_6->intreg);
  (void)FUNC_1(VAR_6, VAR_3);
 }

 FUNC_2(VAR_6);
}
