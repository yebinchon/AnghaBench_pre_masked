
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {int sf_state; int sc_dev; TYPE_1__* cfg; } ;
struct iwm_sf_cfg_cmd {int state; } ;
struct ieee80211_node {int dummy; } ;
typedef int sf_cmd ;
typedef enum iwm_sf_state { ____Placeholder_iwm_sf_state } iwm_sf_state ;
struct TYPE_2__ {scalar_t__ disable_dummy_notification; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwm_softc*,struct iwm_sf_cfg_cmd*,struct ieee80211_node*) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int,struct iwm_sf_cfg_cmd*) ;

__attribute__((used)) static int
FUNC_4(struct iwm_softc *VAR_4, struct ieee80211_node *VAR_5,
 enum iwm_sf_state VAR_6)
{
 struct iwm_sf_cfg_cmd VAR_7 = {
  .state = FUNC_1(VAR_6),
 };
 int VAR_8 = 0;
 if (VAR_6 != 130 && VAR_4->sf_state == VAR_6)
  return 0;

 switch (VAR_6) {
 case 128:
  FUNC_2(VAR_4, &VAR_7, ((void*)0));
  break;
 case 130:
  FUNC_2(VAR_4, &VAR_7, VAR_5);
  break;
 case 129:
  FUNC_2(VAR_4, &VAR_7, ((void*)0));
  break;
 default:
  FUNC_0(VAR_4->sc_dev,
      "Invalid state: %d. not sending Smart Fifo cmd\n",
      VAR_6);
  return VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_2, VAR_1,
       sizeof(VAR_7), &VAR_7);
 if (!VAR_8)
  VAR_4->sf_state = VAR_6;

 return VAR_8;
}
