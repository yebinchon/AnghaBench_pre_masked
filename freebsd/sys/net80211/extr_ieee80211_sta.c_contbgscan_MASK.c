
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ext; scalar_t__ iv_state; scalar_t__ iv_bgscanidle; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags_ext; int ic_flags; scalar_t__ ic_lastdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static __inline int
FUNC_1(struct ieee80211vap *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_5->iv_ic;

 return ((VAR_6->ic_flags_ext & VAR_0) &&
     (VAR_6->ic_flags & VAR_2) == 0 &&
     !(VAR_5->iv_flags_ext & VAR_1) &&
     VAR_5->iv_state == VAR_3 &&
     FUNC_0(VAR_4, VAR_6->ic_lastdata + VAR_5->iv_bgscanidle));
}
