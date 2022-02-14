
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ti_rx_desc* ti_rx_std_ring; } ;
struct ti_softc {TYPE_1__* ti_ifp; TYPE_2__ ti_rdata; } ;
struct ti_rx_desc {int ti_flags; int ti_idx; scalar_t__ ti_tcp_udp_cksum; scalar_t__ ti_vlan_tag; int ti_type; scalar_t__ ti_len; } ;
struct TYPE_3__ {int if_capenable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct ti_softc *VAR_6, int VAR_7)
{

 struct ti_rx_desc *VAR_8;

 VAR_8 = &VAR_6->ti_rdata.ti_rx_std_ring[VAR_7];
 VAR_8->ti_len = VAR_2 - VAR_0;
 VAR_8->ti_type = VAR_5;
 VAR_8->ti_flags = 0;
 VAR_8->ti_vlan_tag = 0;
 VAR_8->ti_tcp_udp_cksum = 0;
 if (VAR_6->ti_ifp->if_capenable & VAR_1)
  VAR_8->ti_flags |= VAR_4 | VAR_3;
 VAR_8->ti_idx = VAR_7;
}
