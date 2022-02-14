
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int rx_fifo_overflows; int rx_phy_err; int rx_long_err; int rx_short_err; int rx_crc_err; int rx_packets; int rx_bytes; int tx_collision; int tx_skip; int tx_packets; int tx_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct rt_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct rt_softc *VAR_12)
{

 VAR_12->tx_bytes += FUNC_0(VAR_12, VAR_0 + VAR_9);
 VAR_12->tx_packets += FUNC_0(VAR_12, VAR_0 + VAR_10);
 VAR_12->tx_skip += FUNC_0(VAR_12, VAR_0 + VAR_11);
 VAR_12->tx_collision+= FUNC_0(VAR_12, VAR_0 + VAR_8);

 VAR_12->rx_bytes += FUNC_0(VAR_12, VAR_0 + VAR_3);
 VAR_12->rx_packets += FUNC_0(VAR_12, VAR_0 + VAR_4);
 VAR_12->rx_crc_err += FUNC_0(VAR_12, VAR_0 + VAR_1);
 VAR_12->rx_short_err+= FUNC_0(VAR_12, VAR_0 + VAR_7);
 VAR_12->rx_long_err += FUNC_0(VAR_12, VAR_0 + VAR_5);
 VAR_12->rx_phy_err += FUNC_0(VAR_12, VAR_0 + VAR_2);
 VAR_12->rx_fifo_overflows+= FUNC_0(VAR_12, VAR_0 + VAR_6);
}
