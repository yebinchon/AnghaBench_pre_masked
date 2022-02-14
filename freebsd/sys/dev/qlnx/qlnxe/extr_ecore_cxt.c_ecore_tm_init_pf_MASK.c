
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int tm_iids ;
struct ecore_tm_iids {int per_vf_cids; int pf_cids; int per_vf_tids; int* pf_tids; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_2__* p_dev; struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {int vf_count; } ;
typedef int cfg_word ;
struct TYPE_4__ {TYPE_1__* p_iov_info; } ;
struct TYPE_3__ {int first_vf_in_pf; } ;


 scalar_t__ FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (struct ecore_tm_iids*,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int,int) ;
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
 int FUNC_6 (struct ecore_cxt_mngr*,struct ecore_tm_iids*) ;

__attribute__((used)) static void FUNC_7(struct ecore_hwfn *VAR_11)
{
 struct ecore_cxt_mngr *VAR_12 = VAR_11->p_cxt_mngr;
 u32 VAR_13 = 0, VAR_14, VAR_15;
 struct ecore_tm_iids VAR_16;
 u64 VAR_17;
 u8 VAR_18;

 FUNC_2(&VAR_16, sizeof(VAR_16));
 FUNC_6(VAR_12, &VAR_16);




 for (VAR_18 = 0; VAR_18 < VAR_12->vf_count; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.per_vf_cids);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, VAR_11->rel_pf_id);
  FUNC_3(VAR_17, VAR_1, 0);

  VAR_15 = VAR_7 +
    (sizeof(VAR_17) / sizeof(u32)) *
    (VAR_11->p_dev->p_iov_info->first_vf_in_pf + VAR_18);
  FUNC_5(VAR_11, VAR_15, VAR_17);
 }

 VAR_17 = 0;
 FUNC_3(VAR_17, VAR_2, VAR_16.pf_cids);
 FUNC_3(VAR_17, VAR_4, 0);
 FUNC_3(VAR_17, VAR_3, 0);
 FUNC_3(VAR_17, VAR_1, 0);

 VAR_15 = VAR_7 +
   (sizeof(VAR_17) / sizeof(u32)) *
   (FUNC_1(VAR_11->p_dev) + VAR_11->rel_pf_id);
 FUNC_5(VAR_11, VAR_15, VAR_17);


 FUNC_4(VAR_11, VAR_9,
       VAR_16.pf_cids ? 0x1 : 0x0);



 VAR_14 = VAR_16.per_vf_cids;


 for (VAR_18 = 0; VAR_18 < VAR_12->vf_count; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.per_vf_tids);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, VAR_11->rel_pf_id);
  FUNC_3(VAR_17, VAR_5, VAR_14);
  FUNC_3(VAR_17, VAR_6, (u64)0);

  VAR_15 = VAR_8 +
    (sizeof(VAR_17) / sizeof(u32)) *
    (VAR_11->p_dev->p_iov_info->first_vf_in_pf + VAR_18);

  FUNC_5(VAR_11, VAR_15, VAR_17);
 }

 VAR_14 = VAR_16.pf_cids;
 for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.pf_tids[VAR_18]);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, 0);
  FUNC_3(VAR_17, VAR_5, VAR_14);
  FUNC_3(VAR_17, VAR_6, (u64)0);

  VAR_15 = VAR_8 +
    (sizeof(VAR_17) / sizeof(u32)) *
    (FUNC_1(VAR_11->p_dev) +
    VAR_11->rel_pf_id * VAR_0 + VAR_18);

  FUNC_5(VAR_11, VAR_15, VAR_17);
  VAR_13 |= (VAR_16.pf_tids[VAR_18] ? (1 << VAR_18) : 0);

  VAR_14 += VAR_16.pf_tids[VAR_18];
 }

 if (FUNC_0(VAR_11))
  VAR_13 = 0;

 FUNC_4(VAR_11, VAR_10, VAR_13);


}
