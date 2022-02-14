
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
typedef int ocs_io_t ;
struct TYPE_4__ {int io_pool; } ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static inline ocs_io_t *
FUNC_1(ocs_t *VAR_0)
{
 return FUNC_0(VAR_0->xport->io_pool);
}
