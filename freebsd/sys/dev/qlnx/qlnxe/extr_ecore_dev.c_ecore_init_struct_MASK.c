
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int lock; } ;
struct ecore_hwfn {size_t my_id; int b_active; TYPE_1__ dmae_info; struct ecore_dev* p_dev; } ;
struct ecore_dev {int cache_shift; struct ecore_hwfn* hwfns; int ilt_page_size; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct ecore_hwfn* VAR_4 ;
 scalar_t__ FUNC_0 (struct ecore_hwfn*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

enum _ecore_status_t FUNC_3(struct ecore_dev *VAR_5)
{
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct ecore_hwfn *VAR_7 = &VAR_5->hwfns[VAR_6];

  VAR_7->p_dev = VAR_5;
  VAR_7->my_id = VAR_6;
  VAR_7->b_active = 0;





  FUNC_2(&VAR_7->dmae_info.lock);
 }


 VAR_5->hwfns[0].b_active = 1;


 VAR_5->cache_shift = 7;

 VAR_5->ilt_page_size = VAR_0;

 return VAR_2;
}
