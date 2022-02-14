
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_com_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(struct ieee80211vap *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(250);
 FUNC_2(&VAR_2->iv_com_state, VAR_0);
 while (FUNC_0(FUNC_1(&VAR_2->iv_com_state), VAR_1) != 0)
  FUNC_4("comref", VAR_3);
}
