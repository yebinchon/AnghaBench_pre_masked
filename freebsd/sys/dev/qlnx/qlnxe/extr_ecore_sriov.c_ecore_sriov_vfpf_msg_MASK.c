
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct regpair {int lo; scalar_t__ hi; } ;
struct TYPE_2__ {int pending_req; int b_pending_msg; } ;
struct ecore_vf_info {int relative_vf_id; TYPE_1__ vf_mbx; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ) ;
 struct ecore_vf_info* FUNC_1 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
       u16 VAR_2,
       struct regpair *VAR_3)
{
 struct ecore_vf_info *VAR_4 = FUNC_1(VAR_1,
           VAR_2);

 if (!VAR_4)
  return VAR_0;




 VAR_4->vf_mbx.pending_req = (((u64)VAR_3->hi) << 32) |
       VAR_3->lo;

 VAR_4->vf_mbx.b_pending_msg = 1;

 return FUNC_0(VAR_1, VAR_4->relative_vf_id);
}
