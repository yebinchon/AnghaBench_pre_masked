
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_flags_ext; int iv_bmissthreshold; int iv_swbmiss_period; int iv_swbmiss; scalar_t__ iv_swbmiss_count; TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,struct ieee80211vap*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_2)
{

 if (VAR_2->iv_flags_ext & VAR_0) {





  VAR_2->iv_swbmiss_period = FUNC_0(
      2 * VAR_2->iv_bmissthreshold * VAR_2->iv_bss->ni_intval);
  VAR_2->iv_swbmiss_count = 0;
  FUNC_1(&VAR_2->iv_swbmiss, VAR_2->iv_swbmiss_period,
      VAR_1, VAR_2);
 }
}
