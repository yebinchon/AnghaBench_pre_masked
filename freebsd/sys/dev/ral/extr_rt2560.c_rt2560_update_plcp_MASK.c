
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags; } ;
struct rt2560_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct rt2560_softc*,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct rt2560_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct rt2560_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;


 FUNC_1(VAR_5, VAR_2, 0x00700400);

 if (!(VAR_6->ic_flags & VAR_0)) {

  FUNC_1(VAR_5, VAR_3, 0x00380401);
  FUNC_1(VAR_5, VAR_4, 0x00150402);
  FUNC_1(VAR_5, VAR_1, 0x000b8403);
 } else {

  FUNC_1(VAR_5, VAR_3, 0x00380409);
  FUNC_1(VAR_5, VAR_4, 0x0015040a);
  FUNC_1(VAR_5, VAR_1, 0x000b840b);
 }

 FUNC_0(VAR_5, "updating PLCP for %s preamble\n",
     (VAR_6->ic_flags & VAR_0) ? "short" : "long");
}
