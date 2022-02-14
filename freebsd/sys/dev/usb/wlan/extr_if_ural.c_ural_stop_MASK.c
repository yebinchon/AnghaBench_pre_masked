
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_softc {int * sc_xfer; scalar_t__ sc_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ural_softc*) ;
 int FUNC_1 (struct ural_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ural_softc*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ural_softc*,int) ;
 int FUNC_4 (struct ural_softc*) ;
 int FUNC_5 (struct ural_softc*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ural_softc *VAR_9)
{

 FUNC_1(VAR_9, VAR_0);

 VAR_9->sc_running = 0;




 FUNC_2(VAR_9);
 FUNC_6(VAR_9->sc_xfer[VAR_7]);
 FUNC_6(VAR_9->sc_xfer[VAR_6]);
 FUNC_0(VAR_9);

 FUNC_4(VAR_9);


 FUNC_5(VAR_9, VAR_5, VAR_1);

 FUNC_5(VAR_9, VAR_2, VAR_3 | VAR_4);

 FUNC_3(VAR_9, VAR_8 / 10);
 FUNC_5(VAR_9, VAR_2, 0);

 FUNC_3(VAR_9, VAR_8 / 10);
}
