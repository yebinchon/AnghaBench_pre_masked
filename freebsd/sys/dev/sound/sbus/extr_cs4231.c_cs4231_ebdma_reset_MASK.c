
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_softc {int sc_burst; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cs4231_softc*,int ) ;
 int FUNC_2 (struct cs4231_softc*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (struct cs4231_softc*,int ) ;
 int FUNC_4 (struct cs4231_softc*,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct cs4231_softc *VAR_6)
{
 int VAR_7;


 FUNC_4(VAR_6, VAR_5,
     FUNC_3(VAR_6, VAR_5) & ~(VAR_2 | VAR_3));
 FUNC_4(VAR_6, VAR_5, VAR_4);
 for (VAR_7 = VAR_0;
     VAR_7 && FUNC_3(VAR_6, VAR_5) & VAR_1; VAR_7--)
  FUNC_0(1);
 if (VAR_7 == 0)
  FUNC_5(VAR_6->sc_dev,
      "timeout waiting for playback DMA reset\n");
 FUNC_4(VAR_6, VAR_5, VAR_6->sc_burst);

 FUNC_2(VAR_6, VAR_5,
     FUNC_1(VAR_6, VAR_5) & ~(VAR_2 | VAR_3));
 FUNC_2(VAR_6, VAR_5, VAR_4);
 for (VAR_7 = VAR_0;
     VAR_7 && FUNC_1(VAR_6, VAR_5) & VAR_1; VAR_7--)
  FUNC_0(1);
 if (VAR_7 == 0)
  FUNC_5(VAR_6->sc_dev,
      "timeout waiting for capture DMA reset\n");
 FUNC_2(VAR_6, VAR_5, VAR_6->sc_burst);
}
