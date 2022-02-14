
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {int ni_flags; int ni_chw; int ni_htstbc; int ni_htopmode; int ni_ht2ndchan; int ni_htctlchan; int ni_htrates; int ni_htparam; int ni_htcap; int ni_capinfo; int ni_rates; struct ieee80211vap* ni_vap; } ;
struct TYPE_6__ {int stbc; int OpMode; int AddChan; int ControlChan; } ;
struct TYPE_7__ {int HTCapabilitiesInfo; TYPE_1__ AddHtInfo; int HTRateBitMap; int MacHTParamInfo; int CapInfo; int LegacyRateBitMap; } ;
typedef TYPE_2__ MWL_HAL_PEERINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static MWL_HAL_PEERINFO *
FUNC_3(MWL_HAL_PEERINFO *VAR_6, const struct ieee80211_node *VAR_7)
{
 const struct ieee80211vap *VAR_8 = VAR_7->ni_vap;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->LegacyRateBitMap = FUNC_1(&VAR_7->ni_rates);
 VAR_6->CapInfo = VAR_7->ni_capinfo;
 if (VAR_7->ni_flags & VAR_5) {

  VAR_6->HTCapabilitiesInfo = VAR_7->ni_htcap;

         VAR_6->MacHTParamInfo = VAR_7->ni_htparam;
  VAR_6->HTRateBitMap = FUNC_0(&VAR_7->ni_htrates);
  VAR_6->AddHtInfo.ControlChan = VAR_7->ni_htctlchan;
  VAR_6->AddHtInfo.AddChan = VAR_7->ni_ht2ndchan;
  VAR_6->AddHtInfo.OpMode = VAR_7->ni_htopmode;
  VAR_6->AddHtInfo.stbc = VAR_7->ni_htstbc;


  if ((VAR_8->iv_flags_ht & VAR_1) == 0)
   VAR_6->HTCapabilitiesInfo &= ~VAR_4;
  if ((VAR_8->iv_flags_ht & VAR_0) == 0)
   VAR_6->HTCapabilitiesInfo &= ~VAR_3;
  if (VAR_7->ni_chw != 40)
   VAR_6->HTCapabilitiesInfo &= ~VAR_2;
 }
 return VAR_6;
}
