
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_params {scalar_t__* ets_pri_tc_tbl; int * ets_tc_tsa_tbl; int * ets_tc_bw_tbl; scalar_t__ max_ets_tc; scalar_t__ ets_enabled; scalar_t__ ets_cbs; scalar_t__ ets_willing; } ;
struct dcbx_ets_feature {int flags; int* pri_tc_tbl; void** tc_tsa_tbl; void** tc_bw_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,void*,void*,void*,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(struct ecore_hwfn *VAR_7,
   struct dcbx_ets_feature *VAR_8,
   struct ecore_dcbx_params *VAR_9)
{
 u8 *VAR_10, *VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (VAR_9->ets_willing)
  VAR_8->flags |= VAR_4;
 else
  VAR_8->flags &= ~VAR_4;

 if (VAR_9->ets_cbs)
  VAR_8->flags |= VAR_0;
 else
  VAR_8->flags &= ~VAR_0;

 if (VAR_9->ets_enabled)
  VAR_8->flags |= VAR_1;
 else
  VAR_8->flags &= ~VAR_1;

 VAR_8->flags &= ~VAR_2;
 VAR_8->flags |= (u32)VAR_9->max_ets_tc << VAR_3;

 VAR_10 = (u8 *)&VAR_8->tc_bw_tbl[0];
 VAR_11 = (u8 *)&VAR_8->tc_tsa_tbl[0];
 VAR_8->pri_tc_tbl[0] = 0;
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_10[VAR_13] = VAR_9->ets_tc_bw_tbl[VAR_13];
  VAR_11[VAR_13] = VAR_9->ets_tc_tsa_tbl[VAR_13];



  VAR_12 = (((u32)VAR_9->ets_pri_tc_tbl[VAR_13]) << ((7 - VAR_13) * 4));
  VAR_8->pri_tc_tbl[0] |= VAR_12;
 }
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  VAR_8->tc_bw_tbl[VAR_13] = FUNC_1(VAR_8->tc_bw_tbl[VAR_13]);
  VAR_8->tc_tsa_tbl[VAR_13] = FUNC_1(VAR_8->tc_tsa_tbl[VAR_13]);
 }

 FUNC_0(VAR_7, VAR_6,
     "flags = 0x%x pri_tc = 0x%x tc_bwl[] = {0x%x, 0x%x} tc_tsa = {0x%x, 0x%x}\n",
     VAR_8->flags, VAR_8->pri_tc_tbl[0], VAR_8->tc_bw_tbl[0],
     VAR_8->tc_bw_tbl[1], VAR_8->tc_tsa_tbl[0],
     VAR_8->tc_tsa_tbl[1]);
}
