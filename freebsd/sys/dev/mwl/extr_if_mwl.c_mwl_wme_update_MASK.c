
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int dummy; } ;
struct ieee80211com {struct mwl_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwl_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211com *VAR_5)
{
 struct mwl_softc *VAR_6 = VAR_5->ic_softc;

 return !FUNC_0(VAR_6, VAR_1) ||
     !FUNC_0(VAR_6, VAR_2) ||
     !FUNC_0(VAR_6, VAR_3) ||
     !FUNC_0(VAR_6, VAR_4) ? VAR_0 : 0;
}
