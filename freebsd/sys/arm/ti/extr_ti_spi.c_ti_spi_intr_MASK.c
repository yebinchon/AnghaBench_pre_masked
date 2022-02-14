
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_spi_softc {scalar_t__ sc_written; scalar_t__ sc_len; scalar_t__ sc_read; int sc_dev; int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ti_spi_softc*) ;
 int FUNC_1 (struct ti_spi_softc*,int ) ;
 int FUNC_2 (struct ti_spi_softc*) ;
 int FUNC_3 (struct ti_spi_softc*,int ,int) ;
 int FUNC_4 (struct ti_spi_softc*) ;
 int FUNC_5 (struct ti_spi_softc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 int VAR_6;
 struct ti_spi_softc *VAR_7;
 uint32_t VAR_8;

 VAR_6 = 0;
 VAR_7 = (struct ti_spi_softc *)VAR_5;
 FUNC_0(VAR_7);
 VAR_8 = FUNC_1(VAR_7, VAR_0);







 if (VAR_8 & VAR_3)
  FUNC_5(VAR_7);
 if (VAR_8 & VAR_2)
  FUNC_4(VAR_7);

 if (VAR_8 & VAR_1)
  VAR_6 = 1;


 FUNC_3(VAR_7, VAR_0, VAR_8);


 if (VAR_7->sc_written == VAR_7->sc_len && VAR_7->sc_read == VAR_7->sc_len) {
  VAR_7->sc_flags |= VAR_4;
  FUNC_6(VAR_7->sc_dev);
 }

 FUNC_2(VAR_7);
}
