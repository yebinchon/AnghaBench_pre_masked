
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_softc {int sc_dodfs; int sc_ah; } ;
typedef int pe ;
struct TYPE_5__ {int pe_enabled; int pe_extchannel; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char,int) ;

int
FUNC_7(struct ath_softc *VAR_3, struct ieee80211_channel *VAR_4)
{

 HAL_PHYERR_PARAM VAR_5;



 if (FUNC_3(VAR_3->sc_ah,
     VAR_1, 0, ((void*)0)) != VAR_2)
  return (0);


 if (! FUNC_0(VAR_4))
  return (0);


 FUNC_6(&VAR_5, '\0', sizeof(VAR_5));
 if (! FUNC_4(VAR_3->sc_ah, &VAR_5))
  return (0);


 VAR_3->sc_dodfs = 1;


 VAR_5.pe_enabled = 1;


 if (FUNC_1(VAR_4))
  VAR_5.pe_extchannel = 1;
 else
  VAR_5.pe_extchannel = 0;

 FUNC_2(VAR_3->sc_ah, &VAR_5);






 (void) FUNC_5(VAR_3->sc_ah, VAR_0, 2, 0, ((void*)0));

 return (1);



}
