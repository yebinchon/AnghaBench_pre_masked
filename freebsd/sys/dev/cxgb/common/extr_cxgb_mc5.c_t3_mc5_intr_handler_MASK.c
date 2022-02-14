
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int del_act_empty; int unknown_cmd; int nfa_srch_err; int active_rgn_full; int dispq_parity_err; int reqq_parity_err; int parity_err; } ;
struct mc5 {TYPE_1__ stats; scalar_t__ parity_enabled; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(struct mc5 *VAR_9)
{
 adapter_t *VAR_10 = VAR_9->adapter;
 u32 VAR_11 = FUNC_2(VAR_10, VAR_0);

 if ((VAR_11 & VAR_5) && VAR_9->parity_enabled) {
  FUNC_0(VAR_10, "MC5 parity error\n");
  VAR_9->stats.parity_err++;
 }

 if (VAR_11 & VAR_6) {
  FUNC_0(VAR_10, "MC5 request queue parity error\n");
  VAR_9->stats.reqq_parity_err++;
 }

 if (VAR_11 & VAR_3) {
  FUNC_0(VAR_10, "MC5 dispatch queue parity error\n");
  VAR_9->stats.dispq_parity_err++;
 }

 if (VAR_11 & VAR_1)
  VAR_9->stats.active_rgn_full++;
 if (VAR_11 & VAR_4)
  VAR_9->stats.nfa_srch_err++;
 if (VAR_11 & VAR_7)
  VAR_9->stats.unknown_cmd++;
 if (VAR_11 & VAR_2)
  VAR_9->stats.del_act_empty++;
 if (VAR_11 & VAR_8)
  FUNC_1(VAR_10);

 FUNC_3(VAR_10, VAR_0, VAR_11);
}
