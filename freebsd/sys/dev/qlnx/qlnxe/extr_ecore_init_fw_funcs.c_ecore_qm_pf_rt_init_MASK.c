
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct init_qm_vport_params {int * first_tx_pq_id; } ;
struct init_qm_pq_params {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ecore_hwfn*,size_t,int,int,int,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,size_t,int) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,size_t,size_t,scalar_t__,size_t,scalar_t__,struct init_qm_pq_params*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,size_t,size_t,size_t,int,int,int,scalar_t__,scalar_t__,scalar_t__,size_t,int,struct init_qm_pq_params*,struct init_qm_vport_params*) ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,size_t,struct init_qm_vport_params*) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,size_t,size_t,int,struct init_qm_vport_params*) ;

int FUNC_7(struct ecore_hwfn *VAR_3,
      struct ecore_ptt *VAR_4,
      u8 VAR_5,
      u8 VAR_6,
      u8 VAR_7,
      bool VAR_8,
      u32 VAR_9,
      u32 VAR_10,
      u32 VAR_11,
      u16 VAR_12,
      u16 VAR_13,
      u16 VAR_14,
      u8 VAR_15,
      u8 VAR_16,
      u16 VAR_17,
      u32 VAR_18,
      u32 VAR_19,
      struct init_qm_pq_params *VAR_20,
      struct init_qm_vport_params *VAR_21)
{
 u32 VAR_22;
 u8 VAR_23, VAR_24;

 VAR_22 = FUNC_0(VAR_9 + VAR_11) * VAR_2;


 for(VAR_24 = 0; VAR_24 < VAR_16; VAR_24++)
  for(VAR_23 = 0; VAR_23 < VAR_0; VAR_23++)
   VAR_21[VAR_24].first_tx_pq_id[VAR_23] = VAR_1;







 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_12, VAR_13, VAR_14, VAR_15, VAR_22, VAR_20, VAR_21);


 if (VAR_17)
  if (FUNC_3(VAR_3, VAR_5, VAR_6, VAR_17, VAR_7, VAR_13 + VAR_14, VAR_20))
  return -1;


 if (FUNC_2(VAR_3, VAR_6, VAR_18))
  return -1;


 if (FUNC_5(VAR_3, VAR_16, VAR_21))
  return -1;


 if (FUNC_6(VAR_3, VAR_15, VAR_16, VAR_19, VAR_21))
  return -1;

 return 0;
}
