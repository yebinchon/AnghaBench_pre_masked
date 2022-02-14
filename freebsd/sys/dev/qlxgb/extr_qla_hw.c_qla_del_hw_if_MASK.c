
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lro; } ;
struct TYPE_9__ {int num_sds_rings; TYPE_1__ flags; } ;
struct TYPE_10__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(qla_host_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_sds_rings; VAR_1++)
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 VAR_0->hw.flags.lro = 0;
}
