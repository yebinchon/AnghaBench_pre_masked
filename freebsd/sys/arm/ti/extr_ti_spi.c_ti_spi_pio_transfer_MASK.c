
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_spi_softc {scalar_t__ sc_len; scalar_t__ sc_written; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_spi_softc*) ;
 int FUNC_1 (struct ti_spi_softc*) ;

__attribute__((used)) static int
FUNC_2(struct ti_spi_softc *VAR_1)
{

 while (VAR_1->sc_len - VAR_1->sc_written > 0) {
  if (FUNC_1(VAR_1) == -1)
   return (VAR_0);
  if (FUNC_0(VAR_1) == -1)
   return (VAR_0);
 }

 return (0);
}
