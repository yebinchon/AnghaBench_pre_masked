
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int tcp_cid_map; int proto; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ecore_hwfn*,int *,int ) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_0, u32 VAR_1)
{
 VAR_1 -= FUNC_3(VAR_0,
          VAR_0->p_rdma_info->proto);

 FUNC_0(&VAR_0->p_rdma_info->lock);
 FUNC_2(VAR_0,
     &VAR_0->p_rdma_info->tcp_cid_map,
     VAR_1);
 FUNC_1(&VAR_0->p_rdma_info->lock);
}
