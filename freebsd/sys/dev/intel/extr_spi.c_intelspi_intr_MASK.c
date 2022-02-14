
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intelspi_softc {int sc_flags; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct intelspi_softc*) ;
 int FUNC_1 (struct intelspi_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct intelspi_softc*) ;
 int FUNC_3 (struct intelspi_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct intelspi_softc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
 struct intelspi_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = (struct intelspi_softc *)VAR_6;

 FUNC_0(VAR_7);
 if ((VAR_7->sc_flags & VAR_0) == 0) {
  FUNC_2(VAR_7);
  return;
 }


 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (VAR_8 == 0xffffffffU) {
  FUNC_2(VAR_7);
  return;
 }


 if (FUNC_4(VAR_7)) {

  VAR_8 = FUNC_1(VAR_7, VAR_1);
  VAR_8 &= ~(VAR_4 | VAR_3 | VAR_5);
  FUNC_3(VAR_7, VAR_1, VAR_8);
  FUNC_5(VAR_7->sc_dev);
 }

 FUNC_2(VAR_7);
}
