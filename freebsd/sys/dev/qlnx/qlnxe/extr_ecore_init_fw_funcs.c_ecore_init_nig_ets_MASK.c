
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct init_ets_tc_req {size_t weight; int use_wfq; scalar_t__ use_sp; } ;
struct init_ets_req {int mtu; struct init_ets_tc_req* tc_req; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,size_t,size_t) ;

void FUNC_2(struct ecore_hwfn *VAR_17,
      struct ecore_ptt *VAR_18,
      struct init_ets_req* VAR_19,
      bool VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25;
 u8 VAR_26 = 0, VAR_27 = 0;
 u8 VAR_28, VAR_29, VAR_30;

 VAR_29 = VAR_20 ? VAR_16 : VAR_15;
 VAR_30 = VAR_20 ? VAR_1 : VAR_14;
 VAR_21 = 0xffffffff;
 VAR_22 = VAR_20 ? VAR_6 : VAR_12;
 VAR_23 = VAR_20 ? VAR_7 - VAR_6 :
          VAR_13 - VAR_12;
 VAR_24 = VAR_20 ? VAR_4 : VAR_10;
 VAR_25 = VAR_20 ? VAR_5 - VAR_4 :
         VAR_11 - VAR_10;

 for (VAR_28 = 0; VAR_28 < VAR_29; VAR_28++) {
  struct init_ets_tc_req *VAR_31 = &VAR_19->tc_req[VAR_28];


  if (VAR_31->use_sp)
   VAR_26 |= (1 << VAR_28);

  if (!VAR_31->use_wfq)
   continue;


  VAR_27 |= (1 << VAR_28);


  if (VAR_31->weight < VAR_21)
   VAR_21 = VAR_31->weight;
 }


 FUNC_1(VAR_17, VAR_18, VAR_20 ? VAR_2 : VAR_8, (VAR_26 << VAR_30));


 FUNC_1(VAR_17, VAR_18, VAR_20 ? VAR_3 : VAR_9, (VAR_27 << VAR_30));


 for (VAR_28 = 0; VAR_28 < VAR_29; VAR_28++, VAR_30++) {
  struct init_ets_tc_req *VAR_32 = &VAR_19->tc_req[VAR_28];
  u32 VAR_33;

  if (!VAR_32->use_wfq)
   continue;


  VAR_33 = (VAR_0 * VAR_32->weight) / VAR_21;


  FUNC_1(VAR_17, VAR_18, VAR_22 + VAR_23 * VAR_30, VAR_33);


  FUNC_1(VAR_17, VAR_18, VAR_24 + VAR_25 * VAR_30, FUNC_0(VAR_33, VAR_19->mtu));
 }
}
