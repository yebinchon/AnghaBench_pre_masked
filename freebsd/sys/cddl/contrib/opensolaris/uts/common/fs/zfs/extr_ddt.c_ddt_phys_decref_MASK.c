
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ ddp_refcnt; } ;
typedef TYPE_1__ ddt_phys_t ;


 int FUNC_0 (int) ;

void
FUNC_1(ddt_phys_t *VAR_0)
{
 FUNC_0((int64_t)VAR_0->ddp_refcnt > 0);
 VAR_0->ddp_refcnt--;
}
