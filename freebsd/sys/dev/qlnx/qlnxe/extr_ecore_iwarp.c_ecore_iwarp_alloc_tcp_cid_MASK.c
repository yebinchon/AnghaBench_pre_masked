
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int max_count; } ;
struct TYPE_3__ {TYPE_2__ tcp_cid_map; int proto; int lock; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,TYPE_2__*,int *) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_3, u32 *VAR_4)
{
 enum _ecore_status_t VAR_5;

 FUNC_1(&VAR_3->p_rdma_info->lock);

 VAR_5 = FUNC_4(VAR_3,
          &VAR_3->p_rdma_info->tcp_cid_map,
          VAR_4);

 FUNC_2(&VAR_3->p_rdma_info->lock);

 *VAR_4 += FUNC_3(VAR_3,
           VAR_3->p_rdma_info->proto);
 if (VAR_5 != VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "can't allocate iwarp tcp cid max-count=%d\n",
      VAR_3->p_rdma_info->tcp_cid_map.max_count);

  *VAR_4 = VAR_0;
 }

 return VAR_5;
}
