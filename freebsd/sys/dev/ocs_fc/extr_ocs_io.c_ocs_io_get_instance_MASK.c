
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_3__* io_pool; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_6__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
typedef int ocs_io_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_3__ ocs_io_pool_t ;


 int * FUNC_0 (int ,int ) ;

ocs_io_t *
FUNC_1(ocs_t *VAR_0, uint32_t VAR_1)
{
 ocs_xport_t *VAR_2 = VAR_0->xport;
 ocs_io_pool_t *VAR_3 = VAR_2->io_pool;
 return FUNC_0(VAR_3->pool, VAR_1);
}
