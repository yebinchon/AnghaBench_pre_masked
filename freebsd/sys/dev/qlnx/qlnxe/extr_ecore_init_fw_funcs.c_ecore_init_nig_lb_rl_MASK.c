
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct init_nig_lb_rl_req {int mtu; scalar_t__* tc_rate; scalar_t__ lb_rate; scalar_t__ lb_mac_rate; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int VAR_19 ;
 size_t VAR_20 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;

void FUNC_3(struct ecore_hwfn *VAR_21,
        struct ecore_ptt *VAR_22,
        struct init_nig_lb_rl_req* VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26;
 u8 VAR_27;


 VAR_24 = VAR_18 << VAR_13;
 FUNC_2(VAR_21, VAR_22, VAR_12, VAR_24);


 if (VAR_23->lb_mac_rate) {


  FUNC_2(VAR_21, VAR_22, VAR_15, VAR_19);
  VAR_25 = FUNC_0(VAR_23->lb_mac_rate);
  FUNC_2(VAR_21, VAR_22, VAR_16, VAR_25);
  FUNC_2(VAR_21, VAR_22, VAR_17, FUNC_1(VAR_25, VAR_23->mtu));


  VAR_24 |= 1 << VAR_14;
  FUNC_2(VAR_21, VAR_22, VAR_12, VAR_24);
 }


 VAR_24 = VAR_18 << VAR_1;
 FUNC_2(VAR_21, VAR_22, VAR_0, VAR_24);


 if (VAR_23->lb_rate) {


  FUNC_2(VAR_21, VAR_22, VAR_3, VAR_19);
  VAR_25 = FUNC_0(VAR_23->lb_rate);
  FUNC_2(VAR_21, VAR_22, VAR_4, VAR_25);
  FUNC_2(VAR_21, VAR_22, VAR_5, FUNC_1(VAR_25, VAR_23->mtu));


  VAR_24 |= 1 << VAR_2;
  FUNC_2(VAR_21, VAR_22, VAR_0, VAR_24);
 }


 for (VAR_27 = 0, VAR_26 = 0; VAR_27 < VAR_20; VAR_27++, VAR_26 += 4) {


  VAR_24 = VAR_18 << VAR_7;
  FUNC_2(VAR_21, VAR_22, VAR_6 + VAR_26, VAR_24);


  if (!VAR_23->tc_rate[VAR_27])
   continue;


  FUNC_2(VAR_21, VAR_22, VAR_9 + VAR_26, VAR_19);
  VAR_25 = FUNC_0(VAR_23->tc_rate[VAR_27]);
  FUNC_2(VAR_21, VAR_22, VAR_10 + VAR_26, VAR_25);
  FUNC_2(VAR_21, VAR_22, VAR_11 + VAR_26, FUNC_1(VAR_25, VAR_23->mtu));


  VAR_24 |= 1 << VAR_8;
  FUNC_2(VAR_21, VAR_22, VAR_6 + VAR_26, VAR_24);
 }
}
