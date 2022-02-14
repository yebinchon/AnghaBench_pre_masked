
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hold_frames; } ;
typedef TYPE_2__ ocs_xport_fcfi_t ;
struct TYPE_9__ {TYPE_1__* xport; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_10__ {size_t fcf_indicator; TYPE_3__* ocs; } ;
typedef TYPE_4__ ocs_domain_t ;
struct TYPE_7__ {TYPE_2__* fcfi; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*,size_t) ;

void
FUNC_2(ocs_domain_t *VAR_1)
{
 ocs_t *VAR_2 = VAR_1->ocs;
 ocs_xport_fcfi_t *VAR_3;

 FUNC_0(VAR_1->fcf_indicator < VAR_0);
 VAR_3 = &VAR_2->xport->fcfi[VAR_1->fcf_indicator];
 if (!VAR_3->hold_frames) {
  FUNC_1(VAR_1->ocs, "hold frames set for FCFI %d\n",
         VAR_1->fcf_indicator);
  VAR_3->hold_frames = 1;
 }
}
