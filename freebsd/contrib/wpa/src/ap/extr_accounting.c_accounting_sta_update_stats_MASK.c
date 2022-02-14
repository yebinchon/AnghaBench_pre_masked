
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {scalar_t__ last_rx_bytes_lo; scalar_t__ last_tx_bytes_lo; int last_tx_bytes_hi; int last_rx_bytes_hi; int addr; } ;
struct hostapd_data {int dummy; } ;
struct hostap_sta_driver_data {scalar_t__ rx_bytes; scalar_t__ tx_bytes; int bytes_64bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct hostap_sta_driver_data*,int ) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,scalar_t__,int ,scalar_t__,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_2,
           struct sta_info *VAR_3,
           struct hostap_sta_driver_data *VAR_4)
{
 if (FUNC_0(VAR_2, VAR_4, VAR_3->addr))
  return -1;

 if (!VAR_4->bytes_64bit) {

  if (VAR_3->last_rx_bytes_lo > VAR_4->rx_bytes)
   VAR_3->last_rx_bytes_hi++;
  VAR_3->last_rx_bytes_lo = VAR_4->rx_bytes;

  if (VAR_3->last_tx_bytes_lo > VAR_4->tx_bytes)
   VAR_3->last_tx_bytes_hi++;
  VAR_3->last_tx_bytes_lo = VAR_4->tx_bytes;
 }

 FUNC_1(VAR_2, VAR_3->addr, VAR_1,
         VAR_0,
         "updated TX/RX stats: rx_bytes=%llu [%u:%u] tx_bytes=%llu [%u:%u] bytes_64bit=%d",
         VAR_4->rx_bytes, VAR_3->last_rx_bytes_hi,
         VAR_3->last_rx_bytes_lo,
         VAR_4->tx_bytes, VAR_3->last_tx_bytes_hi,
         VAR_3->last_tx_bytes_lo,
         VAR_4->bytes_64bit);

 return 0;
}
