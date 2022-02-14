
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int xrcd_map; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ecore_hwfn*,int *,int ) ;

void FUNC_4(void *VAR_1,
     u16 VAR_2)
{
 struct ecore_hwfn *VAR_3 = (struct ecore_hwfn *)VAR_1;

 FUNC_0(VAR_3, VAR_0, "xrcd_id = %08x\n", VAR_2);


 FUNC_1(&VAR_3->p_rdma_info->lock);
 FUNC_3(VAR_3, &VAR_3->p_rdma_info->xrcd_map, VAR_2);
 FUNC_2(&VAR_3->p_rdma_info->lock);
}
