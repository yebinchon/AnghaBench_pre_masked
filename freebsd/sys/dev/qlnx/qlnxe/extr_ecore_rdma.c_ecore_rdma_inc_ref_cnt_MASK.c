
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int lock; int ref_cnt; scalar_t__ active; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_2)
{
 enum _ecore_status_t VAR_3 = VAR_0;

 FUNC_1(&VAR_2->p_rdma_info->lock);
 if (VAR_2->p_rdma_info->active) {
  VAR_2->p_rdma_info->ref_cnt++;
  VAR_3 = VAR_1;
 } else {
  FUNC_0(VAR_2, "Ref cnt requested for inactive rdma\n");
 }
 FUNC_2(&VAR_2->p_rdma_info->lock);
 return VAR_3;
}
