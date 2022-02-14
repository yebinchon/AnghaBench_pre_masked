
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; scalar_t__ rx_cmd; scalar_t__ tx_cmd; int rx_data_sz; int rx_data; } ;
struct ar5315_spi_softc {int sc_debug; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ar5315_spi_softc*,int ) ;
 int FUNC_1 (struct ar5315_spi_softc*,int ,int) ;
 int FUNC_2 (struct ar5315_spi_softc*,int) ;
 int FUNC_3 (struct ar5315_spi_softc*,int) ;
 int FUNC_4 (int,int ,int ) ;
 struct ar5315_spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_10, device_t VAR_11, struct spi_command *VAR_12)
{
 struct ar5315_spi_softc *VAR_13;
 uint8_t *VAR_14, *VAR_15;
 int VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;

 VAR_13 = FUNC_5(VAR_10);

 if (VAR_13->sc_debug & 0x8000)
  FUNC_6("ar5315_spi_transfer: CMD ");

 FUNC_7(VAR_11, &VAR_22);

 VAR_22 &= ~VAR_9;


 FUNC_2(VAR_13, VAR_22);

 do {
  VAR_18 = FUNC_0(VAR_13, VAR_6);
 } while (VAR_18 & VAR_0);




 VAR_15 = (uint8_t *)VAR_12->tx_cmd;
 VAR_20 = VAR_15[0];
 if(VAR_20 == 0x0b) {
  int VAR_25 = VAR_15[1] << 16 | VAR_15[2] << 8 | VAR_15[3];
  FUNC_4(VAR_25, VAR_12->rx_data, VAR_12->rx_data_sz);
  return (0);
 }
 do {
  VAR_18 = FUNC_0(VAR_13, VAR_6);
 } while (VAR_18 & VAR_0);
 if (VAR_13->sc_debug & 0x8000) {
  FUNC_6("%08x ", VAR_20);
  FUNC_6("tx_cmd_sz=%d rx_cmd_sz=%d ", VAR_12->tx_cmd_sz,
   VAR_12->rx_cmd_sz);
  if(VAR_12->tx_cmd_sz != 1) {
   FUNC_6("%08x ", *((uint32_t *)VAR_12->tx_cmd));
   FUNC_6("%08x ", *((uint32_t *)VAR_12->tx_cmd + 1));
  }
 }
 FUNC_1(VAR_13, VAR_8, VAR_20);


 VAR_18 &= ~(VAR_4 | VAR_1);


 VAR_19 = 1;

 VAR_18 |= (VAR_19 << VAR_5);

 VAR_19 = 24;

 if(VAR_12->rx_cmd_sz < 24)
  VAR_19 = VAR_12->rx_cmd_sz;
 VAR_18 |= (VAR_19 << VAR_2);

 VAR_18 |= VAR_3;

 FUNC_1(VAR_13, VAR_6, VAR_18);

 if(VAR_20 == 0x0b)
  FUNC_1(VAR_13, VAR_7, 0);
 if (VAR_13->sc_debug & 0x8000)
  FUNC_6("\nDATA ");




 VAR_14 = (uint8_t *)VAR_12->rx_cmd;

 VAR_16 = VAR_12->rx_cmd_sz;
 if (VAR_13->sc_debug & 0x8000)
  FUNC_6("t%d r%d ", VAR_17, VAR_16);
 for(VAR_23 = 0; VAR_23 <= (VAR_19 - 1) / 4; ++VAR_23) {
  do {
   VAR_18 = FUNC_0(VAR_13, VAR_6);
  } while (VAR_18 & VAR_0);

  VAR_21 = FUNC_0(VAR_13, VAR_7);
  if (VAR_13->sc_debug & 0x8000)
   FUNC_6("I%08x ", VAR_21);

  for(VAR_24 = 0; VAR_24 < 4; ++VAR_24) {
   VAR_14[VAR_23 * 4 + VAR_24 + 1] = 0xff & (VAR_21 >> (8 * VAR_24));
   if(VAR_23 * 4 + VAR_24 + 2 == VAR_19)
    break;
  }
 }

 FUNC_3(VAR_13, VAR_22);



 if (VAR_13->sc_debug & 0x8000)
  FUNC_6("\n");

 return (0);
}
