
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atse_softc {int* atse_eth_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atse_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_1(struct atse_softc *VAR_15, int VAR_16)
{
 uint32_t VAR_17, VAR_18;

 VAR_17 = (VAR_15->atse_eth_addr[3] << 24) | (VAR_15->atse_eth_addr[2] << 16) |
     (VAR_15->atse_eth_addr[1] << 8) | VAR_15->atse_eth_addr[0];
 VAR_18 = (VAR_15->atse_eth_addr[5] << 8) | VAR_15->atse_eth_addr[4];

 if (VAR_16 & VAR_0) {
  FUNC_0(VAR_15, VAR_5, VAR_17);
  FUNC_0(VAR_15, VAR_6, VAR_18);
 }
 if (VAR_16 & VAR_1) {
  FUNC_0(VAR_15, VAR_7, VAR_17);
  FUNC_0(VAR_15, VAR_8, VAR_18);
 }
 if (VAR_16 & VAR_2) {
  FUNC_0(VAR_15, VAR_9, VAR_17);
  FUNC_0(VAR_15, VAR_10, VAR_18);
 }
 if (VAR_16 & VAR_3) {
  FUNC_0(VAR_15, VAR_11, VAR_17);
  FUNC_0(VAR_15, VAR_12, VAR_18);
 }
 if (VAR_16 & VAR_4) {
  FUNC_0(VAR_15, VAR_13, VAR_17);
  FUNC_0(VAR_15, VAR_14, VAR_18);
 }

 return (0);
}
