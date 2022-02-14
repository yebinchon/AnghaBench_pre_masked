
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_queue_start_common_params {int dummy; } ;
struct ecore_queue_cid_vf_params {int vf_legacy; int vf_qid; int vfid; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ecore_queue_cid* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,int ,int *,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ) ;
 struct ecore_queue_cid* FUNC_4 (struct ecore_hwfn*,int ,int ,struct ecore_queue_start_common_params*,int,struct ecore_queue_cid_vf_params*) ;

struct ecore_queue_cid *
FUNC_5(struct ecore_hwfn *VAR_5, u16 VAR_6,
         struct ecore_queue_start_common_params *VAR_7,
         bool VAR_8,
         struct ecore_queue_cid_vf_params *VAR_9)
{
 struct ecore_queue_cid *VAR_10;
 u8 VAR_11 = VAR_0;
 bool VAR_12 = 0;
 u32 VAR_13 = 0;





 if (VAR_9) {
  VAR_11 = VAR_9->vfid;

  if (VAR_9->vf_legacy &
      VAR_1) {
   VAR_12 = 1;
   VAR_13 = VAR_9->vf_qid;
  }
 }





 if (FUNC_1(VAR_5->p_dev) && !VAR_12) {
  if (FUNC_2(VAR_5, VAR_4,
        &VAR_13, VAR_11) != VAR_2) {
   FUNC_0(VAR_5, 1, "Failed to acquire cid\n");
   return VAR_3;
  }
 }

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_13,
     VAR_7, VAR_8, VAR_9);
 if ((VAR_10 == VAR_3) && FUNC_1(VAR_5->p_dev) && !VAR_12)
  FUNC_3(VAR_5, VAR_13, VAR_11);

 return VAR_10;
}
