
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211vap {int iv_com_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(struct ieee80211vap *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_1(&VAR_6->iv_com_state, VAR_4);

 if (VAR_7 & VAR_2) {
  FUNC_2(&VAR_6->iv_com_state, VAR_4);
  return (VAR_0);
 }

 if (FUNC_0(VAR_7, VAR_3) == VAR_5) {
  FUNC_2(&VAR_6->iv_com_state, VAR_4);
  return (VAR_1);
 }

 return (0);
}
