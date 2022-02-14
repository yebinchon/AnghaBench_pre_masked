
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct run_softc {int dummy; } ;
struct ieee80211_key {int wk_flags; int wk_keyix; scalar_t__ wk_pad; } ;
struct run_cmdq {struct ieee80211_key key; struct run_softc* arg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct run_softc*,int ,char*,...) ;
 int FUNC_3 (struct run_softc*,int ) ;
 int FUNC_4 (struct run_softc*,int ,int*) ;
 int FUNC_5 (struct run_softc*,int ,int ,int) ;
 int FUNC_6 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 struct run_cmdq *VAR_5 = VAR_4;
 struct run_softc *VAR_6 = VAR_5->arg1;
 struct ieee80211_key *VAR_7 = &VAR_5->key;
 uint32_t VAR_8;
 uint8_t VAR_9;

 FUNC_3(VAR_6, VAR_1);

 if (VAR_7->wk_flags & VAR_0) {

  FUNC_2(VAR_6, VAR_3, "removing group key\n");
  FUNC_4(VAR_6, VAR_2, &VAR_8);
  VAR_8 &= ~(0xf << (VAR_7->wk_keyix * 4));
  FUNC_6(VAR_6, VAR_2, VAR_8);
 } else {

  FUNC_2(VAR_6, VAR_3,
      "removing key for wcid %x\n", VAR_7->wk_pad);

  VAR_9 = VAR_7->wk_pad;
  FUNC_4(VAR_6, FUNC_0(VAR_9), &VAR_8);
  VAR_8 &= ~0xf;
  FUNC_6(VAR_6, FUNC_0(VAR_9), VAR_8);
  FUNC_5(VAR_6, FUNC_1(VAR_9), 0, 8);
 }

 VAR_7->wk_pad = 0;
}
