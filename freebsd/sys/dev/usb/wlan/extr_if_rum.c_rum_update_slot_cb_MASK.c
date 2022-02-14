
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sec_param {int dummy; } sec_param ;
typedef int uint8_t ;
struct ieee80211com {int dummy; } ;
struct rum_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_0 ;
 int FUNC_2 (struct rum_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rum_softc *VAR_1, union sec_param *VAR_2, uint8_t VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_1->sc_ic;
 uint8_t VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_1, VAR_0, VAR_5, 0xff);

 FUNC_0("setting slot time to %uus\n", VAR_5);
}
