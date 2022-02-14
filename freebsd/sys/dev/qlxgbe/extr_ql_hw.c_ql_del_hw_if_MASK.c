
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {scalar_t__ init_intr_cnxt; } ;
struct TYPE_11__ {scalar_t__ num_sds_rings; scalar_t__ enable_soft_lro; TYPE_2__ flags; } ;
struct TYPE_13__ {TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(qla_host_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 (void)FUNC_5(VAR_1);

 FUNC_1(VAR_1);

 if(FUNC_2(VAR_1))
  goto ql_del_hw_if_exit;

 if (VAR_1->hw.flags.init_intr_cnxt) {
  for (VAR_2 = 0; VAR_2 < VAR_1->hw.num_sds_rings; ) {

   if ((VAR_2 + VAR_0) < VAR_1->hw.num_sds_rings)
    VAR_3 = VAR_0;
   else
    VAR_3 = VAR_1->hw.num_sds_rings - VAR_2;

   if (FUNC_0(VAR_1, VAR_2, VAR_3, 0))
    break;

   VAR_2 += VAR_3;
  }

  VAR_1->hw.flags.init_intr_cnxt = 0;
 }

ql_del_hw_if_exit:
 if (VAR_1->hw.enable_soft_lro) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
 }

 return;
}
