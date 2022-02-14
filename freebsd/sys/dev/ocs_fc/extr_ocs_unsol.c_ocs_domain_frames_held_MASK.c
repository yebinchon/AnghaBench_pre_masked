
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int hold_frames; } ;
typedef TYPE_2__ ocs_xport_fcfi_t ;
struct TYPE_7__ {TYPE_1__* xport; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_8__ {size_t fcf_indicator; TYPE_3__* ocs; } ;
typedef TYPE_4__ ocs_domain_t ;
struct TYPE_5__ {TYPE_2__* fcfi; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static uint8_t
FUNC_1(void *VAR_1)
{
 ocs_domain_t *VAR_2 = (ocs_domain_t *)VAR_1;
 ocs_t *VAR_3 = VAR_2->ocs;
 ocs_xport_fcfi_t *VAR_4;

 FUNC_0(VAR_2 != ((void*)0), 1);
 FUNC_0(VAR_2->fcf_indicator < VAR_0, 1);
 VAR_4 = &VAR_3->xport->fcfi[VAR_2->fcf_indicator];
 return VAR_4->hold_frames;
}
