
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct init_ets_tc_req {scalar_t__ weight; int use_wfq; scalar_t__ use_sp; } ;
struct init_ets_req {int mtu; struct init_ets_tc_req* tc_req; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;

void FUNC_2(struct ecore_hwfn *VAR_8,
      struct ecore_ptt *VAR_9,
      struct init_ets_req* VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13 = 0xffffffff;
 u8 VAR_14, VAR_15 = 0, VAR_16 = 0;

 VAR_11 = VAR_7 - VAR_6;
 VAR_12 = VAR_5 - VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  struct init_ets_tc_req *VAR_17 = &VAR_10->tc_req[VAR_14];


  if (VAR_17->use_sp)
   VAR_15 |= (1 << VAR_14);

  if (!VAR_17->use_wfq)
   continue;


  VAR_16 |= (1 << VAR_14);


  if (VAR_17->weight < VAR_13)
   VAR_13 = VAR_17->weight;
 }


 FUNC_1(VAR_8, VAR_9, VAR_2, VAR_15);


 FUNC_1(VAR_8, VAR_9, VAR_3, VAR_16);


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  struct init_ets_tc_req *VAR_18 = &VAR_10->tc_req[VAR_14];
  u32 VAR_19;

  if (!VAR_18->use_wfq)
   continue;


  VAR_19 = (VAR_1 * VAR_18->weight) / VAR_13;


  FUNC_1(VAR_8, VAR_9, VAR_6 + VAR_14 * VAR_11, VAR_19);


  FUNC_1(VAR_8, VAR_9, VAR_4 + VAR_14 * VAR_12, FUNC_0(VAR_19, VAR_10->mtu));
 }
}
