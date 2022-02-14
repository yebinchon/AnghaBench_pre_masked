
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_rxbuf_hdr {int rxh_flags1; scalar_t__ rxh_rssi; } ;
struct bwi_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct bwi_mac *VAR_1, const struct bwi_rxbuf_hdr *VAR_2)
{
 uint16_t VAR_3;
 int VAR_4;

 VAR_4 = (((int)VAR_2->rxh_rssi - 11) * 103) / 64;

 VAR_3 = FUNC_0(VAR_2->rxh_flags1);
 if (VAR_3 & VAR_0)
  VAR_4 -= 109;
 else
  VAR_4 -= 83;
 return VAR_4;
}
