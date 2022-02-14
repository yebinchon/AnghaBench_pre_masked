
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwm_softc {int sc_ltr_enabled; int sc_dev; } ;
typedef int lctl ;
typedef int cap ;


 int FUNC_0 (struct iwm_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int,char*,char*,char*) ;
 int FUNC_2 (struct iwm_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;

void
FUNC_5(struct iwm_softc *VAR_9)
{
 uint16_t VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_9->sc_dev, VAR_8, &VAR_12);
 if (VAR_13 != 0)
  return;
 VAR_10 = FUNC_4(VAR_9->sc_dev, VAR_12 + VAR_7,
     sizeof(VAR_10));
 if (VAR_10 & VAR_5) {
  FUNC_2(VAR_9, VAR_0,
      VAR_1);
 } else {
  FUNC_0(VAR_9, VAR_0,
      VAR_1);
 }

 VAR_11 = FUNC_4(VAR_9->sc_dev, VAR_12 + VAR_6,
     sizeof(VAR_11));
 VAR_9->sc_ltr_enabled = (VAR_11 & VAR_4) ? 1 : 0;
 FUNC_1(VAR_9, VAR_3 | VAR_2,
     "L1 %sabled - LTR %sabled\n",
     (VAR_10 & VAR_5) ? "En" : "Dis",
     VAR_9->sc_ltr_enabled ? "En" : "Dis");
}
