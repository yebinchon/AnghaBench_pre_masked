
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; int iv_myaddr; } ;
struct ieee80211_frame {int i_addr3; int i_addr1; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static __inline int
FUNC_3(struct ieee80211vap *VAR_1, const struct ieee80211_frame *VAR_2)
{
 FUNC_2(VAR_1->iv_opmode == VAR_0, ("wrong mode"));

 if (!FUNC_1(VAR_2->i_addr1))
  return 0;
 return FUNC_0(VAR_2->i_addr3, VAR_1->iv_myaddr);
}
