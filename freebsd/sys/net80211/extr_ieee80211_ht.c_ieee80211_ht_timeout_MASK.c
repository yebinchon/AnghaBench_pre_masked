
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags_ht; scalar_t__ ic_lastnonht; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,char*) ;
 int FUNC_2 (struct ieee80211com*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_4(struct ieee80211com *VAR_6)
{
 FUNC_0(VAR_6);

 if ((VAR_6->ic_flags_ht & VAR_0) &&
     FUNC_3(VAR_4, VAR_6->ic_lastnonht + VAR_2)) {




  VAR_6->ic_flags_ht &= ~VAR_0;
  FUNC_2(VAR_6);
 }
}
