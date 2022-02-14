
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int cid_map; int tcp_cid_map; int proto; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ecore_hwfn*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_1, u32 VAR_2)
{
 VAR_2 -= FUNC_3(VAR_1,
          VAR_1->p_rdma_info->proto);

 FUNC_0(&VAR_1->p_rdma_info->lock);

 if (VAR_2 < VAR_0) {
  FUNC_2(VAR_1,
          &VAR_1->p_rdma_info->tcp_cid_map,
          VAR_2);
 } else {
  FUNC_2(VAR_1,
          &VAR_1->p_rdma_info->cid_map,
          VAR_2);
 }

 FUNC_1(&VAR_1->p_rdma_info->lock);
}
