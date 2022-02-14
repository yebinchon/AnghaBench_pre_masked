
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_ptt_pool {int lock; int free_list; TYPE_3__* ptts; } ;
struct ecore_hwfn {struct ecore_ptt_pool* p_ptt_pool; int my_id; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {scalar_t__ control; } ;
struct TYPE_5__ {TYPE_1__ pretend; int offset; } ;
struct TYPE_6__ {int idx; int list_entry; int hwfn_id; TYPE_2__ pxp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ecore_ptt_pool* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_6)
{
 struct ecore_ptt_pool *VAR_7 = FUNC_0(VAR_6->p_dev,
         VAR_3,
         sizeof(*VAR_7));
 int VAR_8;

 if (!VAR_7)
  return VAR_1;

 FUNC_1(&VAR_7->free_list);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7->ptts[VAR_8].idx = VAR_8;
  VAR_7->ptts[VAR_8].pxp.offset = VAR_0;
  VAR_7->ptts[VAR_8].pxp.pretend.control = 0;
  VAR_7->ptts[VAR_8].hwfn_id = VAR_6->my_id;




  if (VAR_8 >= VAR_5)
   FUNC_2(&VAR_7->ptts[VAR_8].list_entry,
         &VAR_7->free_list);
 }

 VAR_6->p_ptt_pool = VAR_7;






 FUNC_4(&VAR_7->lock);
 return VAR_2;
}
