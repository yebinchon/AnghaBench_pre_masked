
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vlan_tag_present; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct oce_nic_rx_cqe_v1 {TYPE_2__ u0; } ;
struct TYPE_9__ {int vlan_tag_present; } ;
struct TYPE_10__ {TYPE_3__ s; } ;
struct oce_nic_rx_cqe {TYPE_4__ u0; } ;
struct TYPE_11__ {scalar_t__ be3_native; } ;
typedef TYPE_5__* POCE_SOFTC ;



__attribute__((used)) static int
FUNC_0(POCE_SOFTC VAR_0, struct oce_nic_rx_cqe *VAR_1)
{
 struct oce_nic_rx_cqe_v1 *VAR_2;
 int VAR_3 = 0;

 if (VAR_0->be3_native) {
  VAR_2 = (struct oce_nic_rx_cqe_v1 *)VAR_1;
  VAR_3 = VAR_2->u0.s.vlan_tag_present;
 } else
  VAR_3 = VAR_1->u0.s.vlan_tag_present;

 return VAR_3;

}
