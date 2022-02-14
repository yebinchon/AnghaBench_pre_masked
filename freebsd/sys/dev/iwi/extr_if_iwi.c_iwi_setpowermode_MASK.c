
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwi_softc {int dummy; } ;
struct ieee80211vap {int iv_flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwi_softc*,int ,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct iwi_softc *VAR_4, struct ieee80211vap *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5->iv_flags & VAR_0) {

  VAR_6 = FUNC_1(VAR_3);
 } else
  VAR_6 = FUNC_1(VAR_2);

 FUNC_0(("Setting power mode to %u\n", FUNC_3(VAR_6)));
 return FUNC_2(VAR_4, VAR_1, &VAR_6, sizeof VAR_6);
}
