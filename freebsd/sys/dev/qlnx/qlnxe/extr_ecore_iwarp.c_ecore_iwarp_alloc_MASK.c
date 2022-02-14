
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int ep_free_list; int qp_lock; int iw_lock; } ;
struct TYPE_4__ {TYPE_1__ iwarp; int tcp_cid_map; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ecore_hwfn*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ecore_hwfn*,int) ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,int *,int ,char*) ;

enum _ecore_status_t
FUNC_7(struct ecore_hwfn *VAR_3)
{
 enum _ecore_status_t VAR_4;





 FUNC_3(&VAR_3->p_rdma_info->iwarp.iw_lock);
 FUNC_3(&VAR_3->p_rdma_info->iwarp.qp_lock);





 VAR_4 = FUNC_6(VAR_3, &VAR_3->p_rdma_info->tcp_cid_map,
       VAR_0,
       "TCP_CID");
 if (VAR_4 != VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "Failed to allocate tcp cid, rc = %d\n",
      VAR_4);
  return VAR_4;
 }

 FUNC_1(&VAR_3->p_rdma_info->iwarp.ep_free_list);

 VAR_4 = FUNC_4(VAR_3, 1);
 if (VAR_4 != VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "ecore_iwarp_prealloc_ep failed, rc = %d\n",
      VAR_4);
  return VAR_4;
 }
 FUNC_0(VAR_3, VAR_1,
      "ecore_iwarp_prealloc_ep success, rc = %d\n",
      VAR_4);

 return FUNC_5(VAR_3);
}
