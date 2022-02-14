
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int active; int ref_cnt; int lock; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->p_rdma_info->lock);
 VAR_3->p_rdma_info->active = 0;
 FUNC_3(&VAR_3->p_rdma_info->lock);


 VAR_4 = VAR_3->p_rdma_info->ref_cnt;

 while (VAR_3->p_rdma_info->ref_cnt) {
  FUNC_1(VAR_0);
  if (--VAR_4 == 0) {
   FUNC_0(VAR_3, 0,
      "Timeout on refcnt=%d\n",
      VAR_3->p_rdma_info->ref_cnt);
   return VAR_2;
  }
 }
 return VAR_1;
}
