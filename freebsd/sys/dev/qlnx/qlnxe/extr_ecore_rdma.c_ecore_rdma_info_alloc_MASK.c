
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_info {int lock; } ;
struct ecore_hwfn {struct ecore_rdma_info* p_rdma_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int *) ;
 int FUNC_2 (int *) ;
 struct ecore_rdma_info* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_3)
{
 struct ecore_rdma_info *VAR_4;

 VAR_4 = FUNC_3(VAR_3->p_dev, VAR_2, sizeof(*VAR_4));
 if (!VAR_4) {
  FUNC_0(VAR_3, 0,
     "ecore rdma alloc failed: cannot allocate memory (rdma info).\n");
  return VAR_0;
 }
 VAR_3->p_rdma_info = VAR_4;







 FUNC_2(&VAR_4->lock);

 return VAR_1;
}
