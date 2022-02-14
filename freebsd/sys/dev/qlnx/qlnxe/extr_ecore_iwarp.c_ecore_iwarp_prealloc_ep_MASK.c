
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_iwarp_ep {int list_entry; int tcp_cid; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int iw_lock; int ep_free_list; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ecore_hwfn*,int *) ;
 int FUNC_4 (struct ecore_hwfn*,int *) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_iwarp_ep**) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_iwarp_ep*,int) ;
 int FUNC_7 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_2, bool VAR_3)
{
 struct ecore_iwarp_ep *VAR_4;
 int VAR_5 = VAR_1;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_3)
  VAR_7 = VAR_0;
 else
  VAR_7 = 1;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = FUNC_5(VAR_2, &VAR_4);
  if (VAR_5 != VAR_1)
   return VAR_5;




  if (VAR_3) {
   VAR_5 = FUNC_3(VAR_2, &VAR_6);
   if (VAR_5 != VAR_1)
    goto err;
   FUNC_7(VAR_2, VAR_6);
  } else {




   FUNC_4(VAR_2, &VAR_6);
  }

  VAR_4->tcp_cid = VAR_6;

  FUNC_1(&VAR_2->p_rdma_info->iwarp.iw_lock);
  FUNC_0(&VAR_4->list_entry,
        &VAR_2->p_rdma_info->iwarp.ep_free_list);
  FUNC_2(&VAR_2->p_rdma_info->iwarp.iw_lock);
 }

 return VAR_5;

err:
 FUNC_6(VAR_2, VAR_4, 0);

 return VAR_5;
}
