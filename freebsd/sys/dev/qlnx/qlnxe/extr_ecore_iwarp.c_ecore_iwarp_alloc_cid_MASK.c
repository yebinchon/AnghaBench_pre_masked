
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int lock; int cid_map; int proto; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ecore_hwfn*,int *,int ) ;
 int FUNC_4 (struct ecore_hwfn*,int ,int ) ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (struct ecore_hwfn*,int *,int *) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_7(struct ecore_hwfn *VAR_2, u32 *VAR_3)
{
 enum _ecore_status_t VAR_4;

 FUNC_1(&VAR_2->p_rdma_info->lock);

 VAR_4 = FUNC_6(VAR_2,
          &VAR_2->p_rdma_info->cid_map,
          VAR_3);

 FUNC_2(&VAR_2->p_rdma_info->lock);
 *VAR_3 += FUNC_5(VAR_2,
           VAR_2->p_rdma_info->proto);
 if (VAR_4 != VAR_1) {
  FUNC_0(VAR_2, 0, "Failed in allocating iwarp cid\n");
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_0, *VAR_3);

 if (VAR_4 != VAR_1) {
  FUNC_1(&VAR_2->p_rdma_info->lock);
  *VAR_3 -= FUNC_5(VAR_2,
          VAR_2->p_rdma_info->proto);

  FUNC_3(VAR_2,
          &VAR_2->p_rdma_info->cid_map,
          *VAR_3);

  FUNC_2(&VAR_2->p_rdma_info->lock);
 }

 return VAR_4;
}
