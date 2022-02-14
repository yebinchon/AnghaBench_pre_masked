
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; } ;
struct bcm_spi_softc {int sc_flags; scalar_t__ sc_len; int sc_dev; int sc_mtx; scalar_t__ sc_written; scalar_t__ sc_read; struct spi_command* sc_cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_spi_softc*) ;
 int FUNC_1 (struct bcm_spi_softc*) ;
 int FUNC_2 (struct bcm_spi_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct bcm_spi_softc*,int ,int,int) ;
 int FUNC_5 (int ) ;
 struct bcm_spi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_21 ;
 int FUNC_8 (int ,int *,int ,char*,int) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_22, device_t VAR_23, struct spi_command *VAR_24)
{
 struct bcm_spi_softc *VAR_25;
 uint32_t VAR_26, VAR_27, VAR_28;
 int VAR_29;

 VAR_25 = FUNC_6(VAR_22);

 FUNC_3(VAR_24->tx_cmd_sz == VAR_24->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_3(VAR_24->tx_data_sz == VAR_24->rx_data_sz,
     ("TX/RX data sizes should be equal"));



 FUNC_10(VAR_23, &VAR_26);
 if ((VAR_26 & (~VAR_4)) > 2) {
  FUNC_7(VAR_22,
      "Invalid chip select %u requested by %s\n", VAR_26,
      FUNC_5(VAR_23));
  return (VAR_1);
 }

 FUNC_9(VAR_23, &VAR_28);
 if (VAR_28 == 0) {
  FUNC_7(VAR_22,
      "Invalid clock %uHz requested by %s\n", VAR_28,
      FUNC_5(VAR_23));
  return (VAR_1);
 }

 FUNC_11(VAR_23, &VAR_27);
 if (VAR_27 > 3) {
  FUNC_7(VAR_22,
      "Invalid mode %u requested by %s\n", VAR_27,
      FUNC_5(VAR_23));
  return (VAR_1);
 }


 FUNC_0(VAR_25);
 while (VAR_25->sc_flags & VAR_0)
  FUNC_8(VAR_22, &VAR_25->sc_mtx, 0, "bcm_spi", 0);


 VAR_25->sc_flags = VAR_0;


 FUNC_4(VAR_25, VAR_9,
     VAR_10 | VAR_11,
     VAR_10 | VAR_11);


 VAR_25->sc_cmd = VAR_24;
 VAR_25->sc_read = 0;
 VAR_25->sc_written = 0;
 VAR_25->sc_len = VAR_24->tx_cmd_sz + VAR_24->tx_data_sz;
 FUNC_4(VAR_25, VAR_9,
     VAR_13 | VAR_12,
     ((VAR_27 & VAR_5) ? VAR_12 : 0) |
     ((VAR_27 & VAR_6) ? VAR_13 : 0));






 VAR_28 = VAR_8 / VAR_28;
 if (VAR_28 <= 1)
  VAR_28 = 2;
 else if (VAR_28 % 2)
  VAR_28--;
 if (VAR_28 > 0xffff)
  VAR_28 = 0;

 FUNC_2(VAR_25, VAR_7, VAR_28);





 FUNC_4(VAR_25, VAR_9,
     VAR_19 | VAR_20 | VAR_18 | VAR_17,
     (VAR_26 & (~VAR_4)) |
     VAR_20 | VAR_18 | VAR_17);


 VAR_29 = FUNC_8(VAR_22, &VAR_25->sc_mtx, 0, "bcm_spi", VAR_21 * 2);


 FUNC_4(VAR_25, VAR_9, VAR_20 | VAR_18 | VAR_17, 0);


 VAR_25->sc_flags = 0;
 FUNC_12(VAR_22);
 FUNC_1(VAR_25);





 if (VAR_29 == VAR_3) {
  FUNC_7(VAR_25->sc_dev, "SPI error (timeout)\n");
  VAR_29 = VAR_2;
 }

 return (VAR_29);
}
