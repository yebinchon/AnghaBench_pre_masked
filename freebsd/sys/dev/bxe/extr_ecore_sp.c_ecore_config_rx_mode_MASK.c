
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_rx_mode_ramrod_params {TYPE_1__* rx_mode_obj; int ramrod_flags; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int (* config_rx_mode ) (struct bxe_softc*,struct ecore_rx_mode_ramrod_params*) ;int (* wait_comp ) (struct bxe_softc*,struct ecore_rx_mode_ramrod_params*) ;} ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,struct ecore_rx_mode_ramrod_params*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_rx_mode_ramrod_params*) ;

int FUNC_3(struct bxe_softc *VAR_1,
    struct ecore_rx_mode_ramrod_params *VAR_2)
{
 int VAR_3;


 VAR_3 = VAR_2->rx_mode_obj->config_rx_mode(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;


 if (FUNC_0(VAR_0, &VAR_2->ramrod_flags)) {
  VAR_3 = VAR_2->rx_mode_obj->wait_comp(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
