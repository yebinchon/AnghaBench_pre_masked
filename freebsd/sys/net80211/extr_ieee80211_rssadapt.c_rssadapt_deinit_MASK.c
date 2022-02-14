
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_rs; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_2)
{
 FUNC_0(VAR_2->iv_rs, VAR_0);
 FUNC_1(VAR_1 > 0, ("imbalanced attach/detach"));
 VAR_1--;
}
