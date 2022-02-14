
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int mbx_state; } ;
struct TYPE_4__ {TYPE_1__ sw_mbx; } ;
struct ecore_vf_info {TYPE_2__ vf_mbx; void* ctx; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecore_vf_info* VAR_2 ;
 int VAR_3 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_4,
       u16 VAR_5,
       void *VAR_6)
{
 enum _ecore_status_t VAR_7 = VAR_0;
 struct ecore_vf_info *VAR_8 = FUNC_0(VAR_4, VAR_5, 1);

 if (VAR_8 != VAR_2) {
  VAR_8->ctx = VAR_6;



 } else {
  VAR_7 = VAR_1;
 }
 return VAR_7;
}
