
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct cs4231_softc {scalar_t__ sc_enabled; int sc_flags; int sc_rch; int sc_pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs4231_softc*,int ,int ) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int FUNC_2 (struct cs4231_softc*) ;
 int VAR_2 ;
 int FUNC_3 (struct cs4231_softc*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (struct cs4231_softc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cs4231_softc*,int ) ;
 int FUNC_8 (struct cs4231_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct cs4231_softc *VAR_5)
{
 u_int8_t VAR_6;

 FUNC_2(VAR_5);

 if (VAR_5->sc_enabled == 0)
  return;
 VAR_5->sc_enabled = 0;
 FUNC_3(VAR_5);
 FUNC_6(&VAR_5->sc_pch);
 FUNC_6(&VAR_5->sc_rch);
 FUNC_1(VAR_5);
 VAR_6 = FUNC_7(VAR_5, VAR_3) & ~VAR_4;
 FUNC_8(VAR_5, VAR_3, VAR_6);

 if ((VAR_5->sc_flags & VAR_2) != 0) {
  FUNC_0(VAR_5, VAR_0, VAR_1);
  FUNC_4(10);
  FUNC_0(VAR_5, VAR_0, 0);
  FUNC_4(10);
 } else
  FUNC_5(VAR_5);
}
