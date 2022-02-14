
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {scalar_t__ sc_strategy; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct urtw_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct urtw_softc*) ;
 int FUNC_3 (struct urtw_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3)
{
 struct urtw_softc *VAR_4 = VAR_2;

 if (VAR_4->sc_strategy != VAR_1) {
  FUNC_0(VAR_4, VAR_0,
      "could not process a LED strategy 0x%x",
      VAR_4->sc_strategy);
  return;
 }

 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
