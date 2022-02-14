
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mpi_dma; } ;
struct TYPE_6__ {TYPE_1__ flags; int mpi_dma; } ;
typedef TYPE_2__ qla_host_t ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->mpi_dma);
 VAR_0->flags.mpi_dma = 0;
}
