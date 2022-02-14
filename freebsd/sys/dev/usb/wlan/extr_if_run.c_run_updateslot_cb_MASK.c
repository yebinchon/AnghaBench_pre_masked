
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct run_softc {int dummy; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*,int ,int*) ;
 int FUNC_2 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1;
 struct run_softc *VAR_3 = VAR_2->ic_softc;
 uint32_t VAR_4;

 FUNC_1(VAR_3, VAR_0, &VAR_4);
 VAR_4 &= ~0xff;
 VAR_4 |= FUNC_0(VAR_2);
 FUNC_2(VAR_3, VAR_0, VAR_4);
}
