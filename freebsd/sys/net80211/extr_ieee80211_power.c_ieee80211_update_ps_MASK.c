
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211vap *VAR_2, int VAR_3)
{

 FUNC_0(VAR_2->iv_opmode == VAR_0 ||
  VAR_2->iv_opmode == VAR_1,
  ("operating mode %u", VAR_2->iv_opmode));
}
