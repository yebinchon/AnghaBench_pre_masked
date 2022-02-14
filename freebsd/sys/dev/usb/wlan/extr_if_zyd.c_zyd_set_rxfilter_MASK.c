
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_opmode; } ;
struct zyd_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct zyd_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct zyd_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 uint32_t VAR_7;

 switch (VAR_6->ic_opmode) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 130:
 case 131:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 default:

  return (VAR_0);
 }
 return FUNC_0(VAR_5, VAR_4, VAR_7);
}
