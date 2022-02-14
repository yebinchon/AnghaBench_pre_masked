
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int arp_filter; int dhcp_client_filt; int dhcp_server_filt; int net_bios_filt; int bcast_filt; int ipv6_nbr_filt; int ipv6_ra_filt; int ipv6_ras_filt; int mcast_filt; scalar_t__ mgmt_enable; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct oce_async_evt_grp5_os2bmc {TYPE_2__ u; } ;
struct TYPE_7__ {int bmc_filt_mask; int flags; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int FUNC_0 (struct oce_async_evt_grp5_os2bmc*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(POCE_SOFTC VAR_1,
      struct oce_async_evt_grp5_os2bmc *VAR_2)
{
 FUNC_0(VAR_2, sizeof(struct oce_async_evt_grp5_os2bmc));
 if (VAR_2->u.s.mgmt_enable)
  VAR_1->flags |= VAR_0;
 else
  return;

 VAR_1->bmc_filt_mask = VAR_2->u.s.arp_filter;
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.dhcp_client_filt << 1);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.dhcp_server_filt << 2);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.net_bios_filt << 3);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.bcast_filt << 4);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.ipv6_nbr_filt << 5);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.ipv6_ra_filt << 6);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.ipv6_ras_filt << 7);
 VAR_1->bmc_filt_mask |= (VAR_2->u.s.mcast_filt << 8);
}
