
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ecore_hwfn {TYPE_3__* p_ll2_info; int p_dev; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_7__ {int mutex; TYPE_1__ tx_queue; TYPE_2__ rx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ecore_hwfn *VAR_2)
{



 if (!VAR_2->p_ll2_info)
  return;
 FUNC_0(VAR_2->p_dev, VAR_2->p_ll2_info);
 VAR_2->p_ll2_info = VAR_1;
}
