
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_softc {int sc_ah; int sc_btcoex_mci; } ;
typedef scalar_t__ ATH_BT_COEX_EVENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_softc*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_5, ATH_BT_COEX_EVENT VAR_6,
    void *VAR_7)
{

 if (! VAR_5->sc_btcoex_mci)
  return;






 if (FUNC_1(VAR_5->sc_ah,
     VAR_3, ((void*)0)) != 0) {
  uint32_t VAR_8 = 0;

  if (FUNC_1(VAR_5->sc_ah,
      VAR_2, ((void*)0)) != 0) {
   FUNC_0(VAR_5, VAR_1,
       "(MCI) Flush BT profile\n");






   FUNC_1(VAR_5->sc_ah,
       VAR_3, &VAR_8);
   FUNC_1(VAR_5->sc_ah,
       VAR_4, ((void*)0));
  }
 }
 if (VAR_6 == VAR_0) {
  FUNC_0(VAR_5, VAR_1, "(MCI) BT_NOOP\n");
  return;
 }
}
