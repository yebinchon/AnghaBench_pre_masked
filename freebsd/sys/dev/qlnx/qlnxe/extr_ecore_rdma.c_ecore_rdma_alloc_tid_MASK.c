
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int lock; int tid_map; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,int *,int *) ;

enum _ecore_status_t FUNC_6(void *VAR_3,
       u32 *VAR_4)
{
 struct ecore_hwfn *VAR_5 = (struct ecore_hwfn *)VAR_3;
 enum _ecore_status_t VAR_6;

 FUNC_1(VAR_5, VAR_1, "Allocate TID\n");

 FUNC_2(&VAR_5->p_rdma_info->lock);
 VAR_6 = FUNC_5(VAR_5,
          &VAR_5->p_rdma_info->tid_map,
          VAR_4);
 FUNC_3(&VAR_5->p_rdma_info->lock);
 if (VAR_6 != VAR_2) {
  FUNC_0(VAR_5, 0, "Failed in allocating tid\n");
  goto out;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_0, *VAR_4);
out:
 FUNC_1(VAR_5, VAR_1, "Allocate TID - done, rc = %d\n", VAR_6);
 return VAR_6;
}
