
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_spi_softc {int sc_flags; scalar_t__ sc_written; scalar_t__ sc_len; scalar_t__ sc_read; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_spi_softc*) ;
 int FUNC_1 (struct bcm_spi_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bcm_spi_softc*) ;
 int FUNC_3 (struct bcm_spi_softc*) ;
 int FUNC_4 (struct bcm_spi_softc*,int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct bcm_spi_softc *VAR_6;

 VAR_6 = (struct bcm_spi_softc *)VAR_5;
 FUNC_0(VAR_6);


 if ((VAR_6->sc_flags & VAR_0) == 0) {
  FUNC_1(VAR_6);
  return;
 }


 FUNC_3(VAR_6);


 FUNC_2(VAR_6);


 if (VAR_6->sc_written == VAR_6->sc_len && VAR_6->sc_read == VAR_6->sc_len) {

  FUNC_4(VAR_6, VAR_1,
      VAR_4 | VAR_3 | VAR_2, 0);
  FUNC_5(VAR_6->sc_dev);
 }

 FUNC_1(VAR_6);
}
