
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int lock; int xrcd_map; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ecore_hwfn*,int *,scalar_t__*) ;

enum _ecore_status_t FUNC_5(void *VAR_2,
        u16 *VAR_3)
{
 struct ecore_hwfn *VAR_4 = (struct ecore_hwfn *)VAR_2;
 u32 VAR_5;
 enum _ecore_status_t VAR_6;

 FUNC_1(VAR_4, VAR_0, "Alloc XRCD\n");


 FUNC_2(&VAR_4->p_rdma_info->lock);
 VAR_6 = FUNC_4(VAR_4,
          &VAR_4->p_rdma_info->xrcd_map,
          &VAR_5);
 FUNC_3(&VAR_4->p_rdma_info->lock);
 if (VAR_6 != VAR_1)
  FUNC_0(VAR_4, 0, "Failed in allocating xrcd id\n");

 *VAR_3 = (u16)VAR_5;

 FUNC_1(VAR_4, VAR_0, "Alloc XRCD - done, rc = %d\n", VAR_6);
 return VAR_6;
}
