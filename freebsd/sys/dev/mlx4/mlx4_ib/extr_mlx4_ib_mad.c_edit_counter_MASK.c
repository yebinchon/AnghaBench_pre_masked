
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_counter {int rx_frames; int tx_frames; int rx_bytes; int tx_bytes; } ;
struct ib_pma_portcounters_ext {int port_rcv_packets; int port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;
struct ib_pma_portcounters {int port_rcv_packets; int port_xmit_packets; int port_rcv_data; int port_xmit_data; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int) ;


 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_counter *VAR_0, void *VAR_1,
    __be16 VAR_2)
{
 switch (VAR_2) {
 case 129:
 {
  struct ib_pma_portcounters *VAR_3 =
   (struct ib_pma_portcounters *)VAR_1;

  FUNC_0(VAR_3->port_xmit_data,
         (FUNC_1(VAR_0->tx_bytes) >> 2));
  FUNC_0(VAR_3->port_rcv_data,
         (FUNC_1(VAR_0->rx_bytes) >> 2));
  FUNC_0(VAR_3->port_xmit_packets,
         FUNC_1(VAR_0->tx_frames));
  FUNC_0(VAR_3->port_rcv_packets,
         FUNC_1(VAR_0->rx_frames));
  break;
 }
 case 128:
 {
  struct ib_pma_portcounters_ext *VAR_4 =
   (struct ib_pma_portcounters_ext *)VAR_1;

  VAR_4->port_xmit_data =
   FUNC_2(FUNC_1(VAR_0->tx_bytes) >> 2);
  VAR_4->port_rcv_data =
   FUNC_2(FUNC_1(VAR_0->rx_bytes) >> 2);
  VAR_4->port_xmit_packets = VAR_0->tx_frames;
  VAR_4->port_rcv_packets = VAR_0->rx_frames;
  break;
 }
 default:
  break;
 }
}
