
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_spi_softc {int sc_numcs; int sc_flags; int sc_cs; scalar_t__ sc_len; int sc_fifolvl; scalar_t__ sc_written; scalar_t__ sc_read; struct spi_command* sc_cmd; int sc_mtx; } ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_2 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct ti_spi_softc*) ;
 int FUNC_4 (struct ti_spi_softc*,int ) ;
 int FUNC_5 (struct ti_spi_softc*) ;
 int FUNC_6 (struct ti_spi_softc*,int ,int) ;
 int FUNC_7 (int ) ;
 struct ti_spi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 (int ,int *,int ,char*,int ) ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (struct ti_spi_softc*) ;
 int FUNC_16 (struct ti_spi_softc*,int,int) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_21, device_t VAR_22, struct spi_command *VAR_23)
{
 int VAR_24;
 struct ti_spi_softc *VAR_25;
 uint32_t VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_25 = FUNC_8(VAR_21);

 FUNC_0(VAR_23->tx_cmd_sz == VAR_23->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_0(VAR_23->tx_data_sz == VAR_23->rx_data_sz,
     ("TX/RX data sizes should be equal"));


 FUNC_12(VAR_22, &VAR_27);
 FUNC_11(VAR_22, &VAR_26);
 FUNC_13(VAR_22, &VAR_28);

 VAR_27 &= ~VAR_18;

 if (VAR_27 > VAR_25->sc_numcs) {
  FUNC_9(VAR_21, "Invalid chip select %d requested by %s\n",
      VAR_27, FUNC_7(VAR_22));
  return (VAR_0);
 }

 if (VAR_28 > 3)
 {
     FUNC_9(VAR_21, "Invalid mode %d requested by %s\n", VAR_28,
      FUNC_7(VAR_22));
     return (VAR_0);
 }

 FUNC_3(VAR_25);


 while (VAR_25->sc_flags & VAR_19)
  FUNC_10(VAR_21, &VAR_25->sc_mtx, 0, "ti_spi", 0);


 VAR_25->sc_flags = VAR_19;


 VAR_25->sc_cs = VAR_27;
 VAR_25->sc_cmd = VAR_23;
 VAR_25->sc_read = 0;
 VAR_25->sc_written = 0;
 VAR_25->sc_len = VAR_23->tx_cmd_sz + VAR_23->tx_data_sz;
 VAR_25->sc_fifolvl = FUNC_14(VAR_25->sc_len, VAR_20);
 if (VAR_25->sc_fifolvl < 2 || VAR_25->sc_len > 0xffff)
  VAR_25->sc_fifolvl = 1;

 VAR_25->sc_fifolvl = 1;


 FUNC_16(VAR_25, VAR_25->sc_cs, VAR_26);


 FUNC_6(VAR_25, VAR_17, 0);


 VAR_29 = FUNC_4(VAR_25, FUNC_1(VAR_25->sc_cs));
 VAR_29 &= ~(VAR_6 | VAR_7 | VAR_11 |
     VAR_10 | VAR_12 | VAR_9 |
     VAR_4 | VAR_3 | VAR_1 |
     VAR_2 | VAR_5);
 VAR_29 |= VAR_3 | VAR_5 | VAR_13;
 VAR_29 |= VAR_28;
 FUNC_6(VAR_25, FUNC_1(VAR_25->sc_cs), VAR_29);
 VAR_29 = FUNC_4(VAR_25, FUNC_2(VAR_25->sc_cs));
 FUNC_6(VAR_25, FUNC_2(VAR_25->sc_cs), VAR_29 | VAR_14);


 VAR_29 = FUNC_4(VAR_25, FUNC_1(VAR_25->sc_cs));
 FUNC_6(VAR_25, FUNC_1(VAR_25->sc_cs), VAR_29 |= VAR_8);

 VAR_24 = 0;
 if (VAR_25->sc_fifolvl == 1)
  VAR_24 = FUNC_15(VAR_25);


 VAR_29 = FUNC_4(VAR_25, FUNC_1(VAR_25->sc_cs));
 VAR_29 &= ~VAR_8;
 FUNC_6(VAR_25, FUNC_1(VAR_25->sc_cs), VAR_29);


 VAR_29 = FUNC_4(VAR_25, VAR_15);
 VAR_29 &= ~0xf;
 FUNC_6(VAR_25, VAR_15, VAR_29);
 FUNC_6(VAR_25, VAR_16, 0xf);


 VAR_29 = FUNC_4(VAR_25, FUNC_2(VAR_25->sc_cs));
 VAR_29 &= ~VAR_14;
 FUNC_6(VAR_25, FUNC_2(VAR_25->sc_cs), VAR_29);


 VAR_29 = FUNC_4(VAR_25, FUNC_1(VAR_25->sc_cs));
 VAR_29 &= ~(VAR_6 | VAR_7);
 FUNC_6(VAR_25, FUNC_1(VAR_25->sc_cs), VAR_29);


 VAR_25->sc_flags = 0;
 FUNC_17(VAR_21);
 FUNC_5(VAR_25);

 return (VAR_24);
}
