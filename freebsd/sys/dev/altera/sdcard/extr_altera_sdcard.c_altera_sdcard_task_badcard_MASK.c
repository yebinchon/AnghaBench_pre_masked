
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
 int FUNC_1 (struct altera_sdcard_softc*) ;

__attribute__((used)) static void
FUNC_2(struct altera_sdcard_softc *VAR_4)
{

 FUNC_0(VAR_4);




 if (VAR_4->as_flags & VAR_1) {
  VAR_4->as_state = VAR_2;
  return;
 }





 if (!(FUNC_1(VAR_4) & VAR_0))
  VAR_4->as_state = VAR_3;
}
