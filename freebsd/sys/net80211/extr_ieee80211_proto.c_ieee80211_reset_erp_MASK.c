
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_opmode; int ic_caps; int ic_flags; int ic_curchan; scalar_t__ ic_longslotsta; scalar_t__ ic_nonerpsta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ieee80211com*,int) ;

void
FUNC_4(struct ieee80211com *VAR_6)
{
 VAR_6->ic_flags &= ~VAR_4;
 VAR_6->ic_nonerpsta = 0;
 VAR_6->ic_longslotsta = 0;





 FUNC_3(VAR_6,
  FUNC_0(VAR_6->ic_curchan) ||
  FUNC_2(VAR_6->ic_curchan) ||
  (FUNC_1(VAR_6->ic_curchan) &&
  VAR_6->ic_opmode == VAR_5 &&
  (VAR_6->ic_caps & VAR_1)));



 if (FUNC_0(VAR_6->ic_curchan) ||
     (VAR_6->ic_caps & VAR_0)) {
  VAR_6->ic_flags |= VAR_2;
  VAR_6->ic_flags &= ~VAR_3;
 } else {
  VAR_6->ic_flags &= ~VAR_2;
  VAR_6->ic_flags |= VAR_3;
 }
}
