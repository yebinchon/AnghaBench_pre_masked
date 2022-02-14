
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags; int iv_flags_ext; scalar_t__ iv_bgscanidle; scalar_t__ iv_bgscanintvl; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; scalar_t__ ic_lastdata; scalar_t__ ic_lastscan; int ic_curchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static __inline int
FUNC_2(struct ieee80211vap *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_4->iv_ic;

 return ((VAR_4->iv_flags & VAR_1) &&
     (VAR_5->ic_flags & VAR_2) == 0 &&



     FUNC_1(VAR_3, VAR_5->ic_lastscan + VAR_4->iv_bgscanintvl) &&
     ((VAR_4->iv_flags_ext & VAR_0) ||
      FUNC_1(VAR_3, VAR_5->ic_lastdata + VAR_4->iv_bgscanidle)));
}
