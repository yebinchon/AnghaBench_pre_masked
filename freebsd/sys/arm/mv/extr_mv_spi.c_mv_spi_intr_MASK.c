
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_spi_softc {int sc_flags; scalar_t__ sc_written; scalar_t__ sc_len; scalar_t__ sc_read; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv_spi_softc*) ;
 int FUNC_1 (struct mv_spi_softc*) ;
 int FUNC_2 (struct mv_spi_softc*) ;
 int FUNC_3 (struct mv_spi_softc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct mv_spi_softc *VAR_2;

 VAR_2 = (struct mv_spi_softc *)VAR_1;
 FUNC_0(VAR_2);


 if ((VAR_2->sc_flags & VAR_0) == 0) {
  FUNC_1(VAR_2);
  return;
 }


 FUNC_2(VAR_2);


 FUNC_3(VAR_2);


 if (VAR_2->sc_written == VAR_2->sc_len && VAR_2->sc_read == VAR_2->sc_len)
  FUNC_4(VAR_2->sc_dev);

 FUNC_1(VAR_2);
}
