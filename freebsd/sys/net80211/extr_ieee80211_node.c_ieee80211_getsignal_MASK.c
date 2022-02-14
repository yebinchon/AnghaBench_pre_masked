
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_opmode; int * iv_bss; TYPE_1__* iv_ic; } ;
typedef int int8_t ;
struct TYPE_2__ {int (* ic_node_getsignal ) (int *,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(struct ieee80211vap *VAR_1, int8_t *VAR_2, int8_t *VAR_3)
{

 if (VAR_1->iv_bss == ((void*)0))
  return;
 VAR_1->iv_ic->ic_node_getsignal(VAR_1->iv_bss, VAR_2, VAR_3);

 if (VAR_1->iv_opmode != VAR_0)
  *VAR_2 = FUNC_0(VAR_1);
}
