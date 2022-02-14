
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rxbuf_hdr {int rxh_rssi; } ;
struct bwi_mac {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct bwi_mac *VAR_0, const struct bwi_rxbuf_hdr *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->rxh_rssi;
 if (VAR_2 > 127)
  VAR_2 -= 256;
 return VAR_2;
}
