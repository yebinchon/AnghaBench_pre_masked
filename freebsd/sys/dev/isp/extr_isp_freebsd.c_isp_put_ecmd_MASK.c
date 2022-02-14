
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* ecmd_free; } ;
struct TYPE_7__ {TYPE_1__ isp_osinfo; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_3__ isp_ecmd_t ;



void
FUNC_0(ispsoftc_t *VAR_0, isp_ecmd_t *VAR_1)
{
 VAR_1->next = VAR_0->isp_osinfo.ecmd_free;
 VAR_0->isp_osinfo.ecmd_free = VAR_1;
}
