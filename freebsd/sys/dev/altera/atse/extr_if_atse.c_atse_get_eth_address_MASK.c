
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct atse_softc {int* atse_eth_addr; int atse_unit; int atse_dev; } ;
struct TYPE_2__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct atse_softc *VAR_5)
{
 unsigned long VAR_6;
 uint32_t VAR_7;
 int VAR_8;





 if (VAR_5->atse_eth_addr[0] != 0x00 || VAR_5->atse_eth_addr[1] != 0x00 ||
     VAR_5->atse_eth_addr[2] != 0x00) {
  return (0);
 }

 if ((VAR_3 &
     VAR_0) == 0) {
  goto get_random;
 }

 VAR_7 = VAR_2[0] << 24;
 VAR_7 |= VAR_2[1] << 16;
 VAR_7 |= VAR_2[2] << 8;
 VAR_7 |= VAR_2[3];

 if (VAR_7 != FUNC_5(0x00005afe)) {
  FUNC_3(VAR_5->atse_dev, "Magic '5afe' is not safe: 0x%08x. "
      "Falling back to random numbers for hardware address.\n",
       VAR_7);
  goto get_random;
 }

 VAR_5->atse_eth_addr[0] = VAR_2[4];
 VAR_5->atse_eth_addr[1] = VAR_2[5];
 VAR_5->atse_eth_addr[2] = VAR_2[6];
 VAR_5->atse_eth_addr[3] = VAR_2[7];
 VAR_5->atse_eth_addr[4] = VAR_2[8];
 VAR_5->atse_eth_addr[5] = VAR_2[9];


 if (VAR_5->atse_eth_addr[0] == 0x00 && VAR_5->atse_eth_addr[1] == 0x07 &&
     VAR_5->atse_eth_addr[2] == 0xed && VAR_5->atse_eth_addr[3] == 0xff &&
     VAR_5->atse_eth_addr[4] == 0xed && VAR_5->atse_eth_addr[5] == 0x15) {

  FUNC_3(VAR_5->atse_dev, "Factory programmed Ethernet "
      "hardware address blacklisted.  Falling back to random "
      "address to avoid collisions.\n");
  FUNC_3(VAR_5->atse_dev, "Please re-program your flash.\n");
  goto get_random;
 }

 if (VAR_5->atse_eth_addr[0] == 0x00 && VAR_5->atse_eth_addr[1] == 0x00 &&
     VAR_5->atse_eth_addr[2] == 0x00 && VAR_5->atse_eth_addr[3] == 0x00 &&
     VAR_5->atse_eth_addr[4] == 0x00 && VAR_5->atse_eth_addr[5] == 0x00) {
  FUNC_3(VAR_5->atse_dev, "All zero's Ethernet hardware "
      "address blacklisted.  Falling back to random address.\n");
  FUNC_3(VAR_5->atse_dev, "Please re-program your flash.\n");
  goto get_random;
 }

 if (FUNC_0(VAR_5->atse_eth_addr)) {
  FUNC_3(VAR_5->atse_dev, "Multicast Ethernet hardware "
      "address blacklisted.  Falling back to random address.\n");
  FUNC_3(VAR_5->atse_dev, "Please re-program your flash.\n");
  goto get_random;
 }






 VAR_8 = FUNC_2(VAR_5->atse_dev);
 if (VAR_8 == 0x00) {
  return (0);
 }

 if (VAR_8 > 0x0f) {
  FUNC_3(VAR_5->atse_dev, "We do not support Ethernet "
      "addresses for more than 16 MACs. Falling back to "
      "random hadware address.\n");
  goto get_random;
 }
 if ((VAR_5->atse_eth_addr[0] & ~0x2) != 0 ||
     VAR_5->atse_eth_addr[1] != 0x07 || VAR_5->atse_eth_addr[2] != 0xed ||
     (VAR_5->atse_eth_addr[5] & 0x0f) != 0x0) {
  FUNC_3(VAR_5->atse_dev, "Ethernet address not meeting our "
      "multi-MAC standards. Falling back to random hadware "
      "address.\n");
  goto get_random;
 }
 VAR_5->atse_eth_addr[5] |= (VAR_8 & 0x0f);

 return (0);

get_random:



 FUNC_4(VAR_4->td_ucred, &VAR_6);
 if (VAR_6 == 0) {
  FUNC_1(VAR_5->atse_eth_addr, VAR_1, 1);
  VAR_5->atse_eth_addr[0] &= ~1;
  VAR_5->atse_eth_addr[0] |= 2;
 } else {
  VAR_5->atse_eth_addr[0] = 0x2;
  VAR_5->atse_eth_addr[1] = (VAR_6 >> 24) & 0xff;
  VAR_5->atse_eth_addr[2] = (VAR_6 >> 16) & 0xff;
  VAR_5->atse_eth_addr[3] = (VAR_6 >> 8 ) & 0xff;
  VAR_5->atse_eth_addr[4] = VAR_6 & 0xff;
  VAR_5->atse_eth_addr[5] = VAR_5->atse_unit & 0xff;
 }

 return (0);
}
