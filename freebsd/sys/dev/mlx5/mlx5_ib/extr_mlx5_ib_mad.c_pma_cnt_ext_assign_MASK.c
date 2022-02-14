
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_pma_portcounters_ext {void* port_multicast_rcv_packets; void* port_multicast_xmit_packets; void* port_unicast_rcv_packets; void* port_unicast_xmit_packets; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;
struct TYPE_8__ {int packets; int octets; } ;
struct TYPE_7__ {int packets; int octets; } ;
struct TYPE_6__ {int packets; int octets; } ;
struct TYPE_5__ {int packets; int octets; } ;


 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct ib_pma_portcounters_ext *VAR_5,
          void *VAR_6)
{




 VAR_5->port_xmit_data =
  FUNC_2((FUNC_0(VAR_0, VAR_6, VAR_4.octets) + FUNC_0(VAR_0, VAR_6, VAR_3.octets)) >> 2);

 VAR_5->port_rcv_data =
  FUNC_2((FUNC_0(VAR_0, VAR_6, VAR_2.octets) + FUNC_0(VAR_0, VAR_6, VAR_1.octets)) >> 2);

 VAR_5->port_xmit_packets =
  FUNC_2((FUNC_0(VAR_0, VAR_6, VAR_4.packets) + FUNC_0(VAR_0, VAR_6, VAR_3.packets)));

 VAR_5->port_rcv_packets =
  FUNC_2((FUNC_0(VAR_0, VAR_6, VAR_2.packets) + FUNC_0(VAR_0, VAR_6, VAR_1.packets)));

 VAR_5->port_unicast_xmit_packets =
  FUNC_0(VAR_0,
         VAR_6, VAR_4.packets);
 VAR_5->port_unicast_rcv_packets =
  FUNC_0(VAR_0,
         VAR_6, VAR_2.packets);
 VAR_5->port_multicast_xmit_packets =
  FUNC_0(VAR_0,
         VAR_6, VAR_3.packets);
 VAR_5->port_multicast_rcv_packets =
  FUNC_0(VAR_0,
         VAR_6, VAR_1.packets);
}
