
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int b_pending_msg; } ;
struct ecore_vf_info {int abs_vf_id; scalar_t__ state; TYPE_2__ vf_mbx; int b_init; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* pf_iov_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {unsigned long long* pending_flr; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 struct ecore_vf_info* FUNC_6 (struct ecore_hwfn*,int,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_vf_info*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_ptt*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_9(struct ecore_hwfn *VAR_5,
     struct ecore_ptt *VAR_6,
     u16 VAR_7,
     u32 *VAR_8)
{
 struct ecore_vf_info *VAR_9;
 enum _ecore_status_t VAR_10 = VAR_1;

 VAR_9 = FUNC_6(VAR_5, VAR_7, 0);
 if (!VAR_9)
  return VAR_1;

 if (VAR_5->pf_iov_info->pending_flr[VAR_7 / 64] &
     (1ULL << (VAR_7 % 64))) {
  u16 VAR_11 = VAR_9->abs_vf_id;



  FUNC_1(VAR_5, VAR_0,
      "VF[%d] - Handling FLR\n", VAR_11);

  FUNC_7(VAR_5, VAR_9);


  if (!VAR_9->b_init)
   goto cleanup;


  VAR_10 = FUNC_8(VAR_5, VAR_9, VAR_6);
  if (VAR_10 != VAR_1)
   goto cleanup;

  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_11, 1);
  if (VAR_10) {

   FUNC_0(VAR_5, "Failed handle FLR of VF[%d]\n",
          VAR_11);
   return VAR_10;
  }




  FUNC_2(VAR_5,
         VAR_2 +
         FUNC_3(VAR_11), 1);




  VAR_9->state = VAR_4;

  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_9);
  if (VAR_10) {

   FUNC_0(VAR_5, "Failed to re-enable VF[%d] acces\n",
          VAR_11);
   return VAR_10;
  }
cleanup:

  if (VAR_9->state == VAR_3)
   VAR_9->state = VAR_4;
  VAR_8[VAR_11 / 32] |= (1 << (VAR_11 % 32));
  VAR_5->pf_iov_info->pending_flr[VAR_7 / 64] &=
    ~(1ULL << (VAR_7 % 64));
  VAR_9->vf_mbx.b_pending_msg = 0;
 }

 return VAR_10;
}
