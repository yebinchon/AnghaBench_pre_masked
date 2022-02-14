
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_sdcard_softc {int as_flags; int as_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_sdcard_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct altera_sdcard_softc*) ;
 int FUNC_2 (struct altera_sdcard_softc*) ;
 scalar_t__ FUNC_3 (struct altera_sdcard_softc*) ;

__attribute__((used)) static void
FUNC_4(struct altera_sdcard_softc *VAR_5)
{

 FUNC_0(VAR_5);




 if (VAR_5->as_flags & VAR_1) {
  VAR_5->as_state = VAR_3;
  return;
 }




 if (!(FUNC_2(VAR_5) & VAR_0))
  return;
 if (FUNC_3(VAR_5) != 0) {
  VAR_5->as_state = VAR_2;
  return;
 }




 FUNC_1(VAR_5);
 VAR_5->as_state = VAR_4;
}
