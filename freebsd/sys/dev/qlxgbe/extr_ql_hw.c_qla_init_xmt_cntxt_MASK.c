
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int init_tx_cnxt; } ;
struct TYPE_8__ {scalar_t__ num_tx_rings; TYPE_1__ flags; } ;
struct TYPE_9__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_0)
{
 uint32_t VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_tx_rings; VAR_1++) {
  if (FUNC_1(VAR_0, VAR_1) != 0) {
   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    if (FUNC_0(VAR_0, VAR_2))
     break;
   }
   return (-1);
  }
 }
 VAR_0->hw.flags.init_tx_cnxt = 1;
 return (0);
}
