
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* req_virt; } ;
struct ecore_vf_info {TYPE_1__ vf_mbx; } ;
struct ecore_hwfn {int dummy; } ;


 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int,int) ;

void FUNC_1(struct ecore_hwfn *VAR_0,
       u16 VAR_1,
       void **VAR_2,
       u16 *VAR_3)
{
 struct ecore_vf_info *VAR_4 =
  FUNC_0(VAR_0, VAR_1, 1);

 if (!VAR_4)
  return;

 if (VAR_2)
  *VAR_2 = VAR_4->vf_mbx.req_virt;

 if (VAR_3)
  *VAR_3 = sizeof(*VAR_4->vf_mbx.req_virt);
}
