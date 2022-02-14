
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int * sc_xfer; scalar_t__ sc_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*,int ,int ) ;
 int FUNC_3 (struct rum_softc*) ;
 int FUNC_4 (struct rum_softc*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct rum_softc *VAR_7)
{

 FUNC_0(VAR_7);
 if (!VAR_7->sc_running) {
  FUNC_1(VAR_7);
  return;
 }
 VAR_7->sc_running = 0;
 FUNC_1(VAR_7);




 FUNC_5(VAR_7->sc_xfer[VAR_6]);
 FUNC_5(VAR_7->sc_xfer[VAR_5]);

 FUNC_0(VAR_7);
 FUNC_3(VAR_7);


 FUNC_2(VAR_7, VAR_4, VAR_0);


 FUNC_4(VAR_7, VAR_1, VAR_2 | VAR_3);
 FUNC_4(VAR_7, VAR_1, 0);
 FUNC_1(VAR_7);
}
