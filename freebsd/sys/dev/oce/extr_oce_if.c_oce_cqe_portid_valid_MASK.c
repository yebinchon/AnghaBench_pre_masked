
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct oce_nic_rx_cqe_v1 {TYPE_2__ u0; } ;
struct oce_nic_rx_cqe {int dummy; } ;
struct TYPE_9__ {int port_id; scalar_t__ be3_native; } ;
typedef TYPE_3__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(POCE_SOFTC VAR_0, struct oce_nic_rx_cqe *VAR_1)
{
 struct oce_nic_rx_cqe_v1 *VAR_2;
 int VAR_3 = 0;

 if (VAR_0->be3_native && (FUNC_0(VAR_0) || FUNC_1(VAR_0))) {
  VAR_2 = (struct oce_nic_rx_cqe_v1 *)VAR_1;
  VAR_3 = VAR_2->u0.s.port;
  if (VAR_0->port_id != VAR_3)
   return 0;
 } else
  ;

 return 1;

}
