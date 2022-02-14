
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char location; char* isocc; int country; int regdomain; } ;
struct ieee80211com {scalar_t__ ic_nchans; TYPE_1__ ic_regdomain; int ic_channels; } ;
struct mwl_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwl_softc*,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mwl_softc *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;






 FUNC_1(VAR_5->ic_channels, 0, sizeof(VAR_5->ic_channels));
 VAR_5->ic_nchans = 0;
 FUNC_0(VAR_4, VAR_2, &VAR_5->ic_nchans, VAR_5->ic_channels);

 VAR_5->ic_regdomain.regdomain = VAR_3;
 VAR_5->ic_regdomain.country = VAR_0;
 VAR_5->ic_regdomain.location = 'I';
 VAR_5->ic_regdomain.isocc[0] = ' ';
 VAR_5->ic_regdomain.isocc[1] = ' ';
 return (VAR_5->ic_nchans == 0 ? VAR_1 : 0);
}
