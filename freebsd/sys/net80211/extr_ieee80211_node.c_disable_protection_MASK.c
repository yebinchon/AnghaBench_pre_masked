
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_nonerpsta; int ic_flags_ext; int ic_caps; int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_5)
{
 FUNC_0(VAR_5->ic_nonerpsta == 0 &&
     (VAR_5->ic_flags_ext & VAR_1) == 0,
    ("%d non ERP stations, flags 0x%x", VAR_5->ic_nonerpsta,
    VAR_5->ic_flags_ext));

 VAR_5->ic_flags &= ~VAR_4;

 if (VAR_5->ic_caps & VAR_0) {
  VAR_5->ic_flags |= VAR_2;
  VAR_5->ic_flags &= ~VAR_3;
 }
 FUNC_1(VAR_5);
}
