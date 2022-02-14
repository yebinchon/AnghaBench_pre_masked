
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int cid_map; int tcp_cid_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int *,int) ;
 int FUNC_1 (struct ecore_hwfn*,int *) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_1)
{
 enum _ecore_status_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(
  VAR_1, &VAR_1->p_rdma_info->tcp_cid_map);
 if (VAR_2)
  return VAR_2;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_1,
          &VAR_1->p_rdma_info->cid_map,
          VAR_3);
 }


 VAR_2 = FUNC_1(
  VAR_1, &VAR_1->p_rdma_info->cid_map);

 return VAR_2;
}
