
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; } ;
struct mv_spi_softc {int sc_flags; int sc_written; scalar_t__ sc_len; scalar_t__ sc_read; struct spi_command* sc_cmd; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct mv_spi_softc*) ;
 int FUNC_3 (struct mv_spi_softc*,int ) ;
 int FUNC_4 (struct mv_spi_softc*) ;
 int FUNC_5 (struct mv_spi_softc*,int ,int) ;
 int VAR_19 ;
 int FUNC_6 (int ) ;
 struct mv_spi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int ) ;
 int FUNC_9 (int ,int *,int ,char*,int ) ;
 scalar_t__ FUNC_10 (int,int*,int*) ;
 int FUNC_11 (struct mv_spi_softc*) ;
 int FUNC_12 (struct mv_spi_softc*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_20, device_t VAR_21, struct spi_command *VAR_22)
{
 struct mv_spi_softc *VAR_23;
 uint32_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31;

 FUNC_1(VAR_22->tx_cmd_sz == VAR_22->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_1(VAR_22->tx_data_sz == VAR_22->rx_data_sz,
     ("TX/RX data sizes should be equal"));


 FUNC_14(VAR_21, &VAR_25);
 VAR_25 &= ~VAR_19;
 FUNC_15(VAR_21, &VAR_26);
 if (VAR_26 > 3) {
  FUNC_8(VAR_20,
      "Invalid mode %u requested by %s\n", VAR_26,
      FUNC_6(VAR_21));
  return (VAR_0);
 }
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24 == 0 || FUNC_10(VAR_24, &VAR_28, &VAR_29) != 0) {
  FUNC_8(VAR_20,
      "Invalid clock %uHz requested by %s\n", VAR_24,
      FUNC_6(VAR_21));
  return (VAR_0);
 }

 VAR_23 = FUNC_7(VAR_20);
 FUNC_2(VAR_23);


 while (VAR_23->sc_flags & VAR_2)
  FUNC_9(VAR_20, &VAR_23->sc_mtx, 0, "mv_spi", 0);


 VAR_23->sc_flags = VAR_2;


 VAR_23->sc_cmd = VAR_22;
 VAR_23->sc_read = 0;
 VAR_23->sc_written = 0;
 VAR_23->sc_len = VAR_22->tx_cmd_sz + VAR_22->tx_data_sz;


 VAR_27 = FUNC_3(VAR_23, VAR_3);
 VAR_27 &= ~(VAR_10 | VAR_4);
 VAR_27 |= VAR_26 << VAR_11;
 VAR_27 |= VAR_28 & VAR_9;
 VAR_27 |= (VAR_29 & VAR_7) <<
     VAR_8;
 VAR_27 |= (VAR_29 & VAR_5) <<
     VAR_6;
 FUNC_5(VAR_23, VAR_12, VAR_27);


 VAR_27 = (VAR_25 & VAR_14) << VAR_15;
 FUNC_5(VAR_23, VAR_12, VAR_27);
 VAR_27 = FUNC_3(VAR_23, VAR_12);
 FUNC_5(VAR_23, VAR_12, VAR_27 | VAR_13);

 while ((VAR_30 = VAR_23->sc_len - VAR_23->sc_written) > 0) {

  FUNC_5(VAR_23, VAR_18, 0);





  FUNC_12(VAR_23);
  VAR_31 = 1000;
  while (--VAR_31 > 0) {
   VAR_27 = FUNC_3(VAR_23, VAR_12);
   if (VAR_27 & VAR_16)
    break;
   FUNC_0(1);
  }
  if (VAR_31 == 0)
   break;
  FUNC_11(VAR_23);
 }


 VAR_27 = FUNC_3(VAR_23, VAR_12);
 FUNC_5(VAR_23, VAR_12, VAR_27 & ~VAR_13);
 FUNC_5(VAR_23, VAR_17, 0);
 FUNC_5(VAR_23, VAR_18, 0);


 VAR_23->sc_flags = 0;
 FUNC_16(VAR_20);
 FUNC_4(VAR_23);





 return ((VAR_31 == 0) ? VAR_1 : 0);
}
