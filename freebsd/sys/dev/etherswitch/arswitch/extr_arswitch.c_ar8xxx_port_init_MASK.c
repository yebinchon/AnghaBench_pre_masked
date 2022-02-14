
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int sc_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct arswitch_softc *VAR_11, int VAR_12)
{


 if (VAR_12 == VAR_1) {
  FUNC_4(VAR_11->sc_dev, FUNC_2(0),
      (FUNC_0(VAR_11, VAR_0) ?
      VAR_7 : VAR_8) |
      (FUNC_0(VAR_11, VAR_0) ? 0 : VAR_5) |
      (FUNC_0(VAR_11, VAR_0) ? 0 : VAR_9) |
      VAR_6 |
      VAR_10 |
      VAR_3);
  FUNC_4(VAR_11->sc_dev, FUNC_1(0),
      FUNC_3(VAR_11->sc_dev, FUNC_1(0)) &
      ~VAR_2);
 } else {

  FUNC_4(VAR_11->sc_dev, FUNC_2(VAR_12),
      VAR_4);
  FUNC_4(VAR_11->sc_dev, FUNC_1(VAR_12),
      FUNC_3(VAR_11->sc_dev, FUNC_1(VAR_12)) &
      ~VAR_2);
 }
}
