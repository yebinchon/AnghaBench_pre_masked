
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int base_lid; } ;
struct TYPE_7__ {TYPE_1__ port_info; } ;
typedef TYPE_2__ osm_physp_t ;
typedef int osm_log_t ;
struct TYPE_8__ {int base_lid; } ;
typedef TYPE_3__ ib_port_info_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(osm_log_t * VAR_2, ib_port_info_t * VAR_3,
         osm_physp_t * VAR_4)
{
 if (FUNC_1(FUNC_2(VAR_3->base_lid) > VAR_0)) {
  FUNC_0(VAR_2, VAR_1, "ERR 0F04: "
   "Got invalid base LID %u from the network. "
   "Corrected to %u\n", FUNC_2(VAR_3->base_lid),
   FUNC_2(VAR_4->port_info.base_lid));
  VAR_3->base_lid = VAR_4->port_info.base_lid;
 }
}
