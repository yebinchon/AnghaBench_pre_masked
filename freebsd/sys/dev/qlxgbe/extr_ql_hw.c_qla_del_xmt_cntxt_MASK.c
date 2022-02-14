
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ init_tx_cnxt; } ;
struct TYPE_7__ {scalar_t__ num_tx_rings; TYPE_1__ flags; } ;
struct TYPE_8__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2 = 0;

 if (!VAR_0->hw.flags.init_tx_cnxt)
  return (VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_tx_rings; VAR_1++) {
  if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) != 0)
   break;
 }
 VAR_0->hw.flags.init_tx_cnxt = 0;

 return (VAR_2);
}
