
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; } ;
struct intelspi_softc {int sc_flags; scalar_t__ sc_len; int sc_dev; scalar_t__ sc_written; scalar_t__ sc_read; struct spi_command* sc_cmd; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intelspi_softc*) ;
 int FUNC_1 (struct intelspi_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct intelspi_softc*) ;
 int FUNC_3 (struct intelspi_softc*,int ,int) ;
 int FUNC_4 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct intelspi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_10 ;
 int FUNC_7 (struct intelspi_softc*,int ) ;
 int FUNC_8 (struct intelspi_softc*) ;
 int FUNC_9 (int ,int *,int ,char*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_11, device_t VAR_12, struct spi_command *VAR_13)
{
 struct intelspi_softc *VAR_14;
 int VAR_15;
 uint32_t VAR_16;

 VAR_14 = FUNC_5(VAR_11);
 VAR_15 = 0;

 FUNC_4(VAR_13->tx_cmd_sz == VAR_13->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_4(VAR_13->tx_data_sz == VAR_13->rx_data_sz,
     ("TX/RX data sizes should be equal"));

 FUNC_0(VAR_14);


 while (VAR_14->sc_flags & VAR_5) {
  VAR_15 = FUNC_9(VAR_11, &VAR_14->sc_mtx, 0, "intelspi", 0);
  if (VAR_15 == VAR_2) {
   FUNC_2(VAR_14);
   return (VAR_15);
  }
 }


 VAR_14->sc_flags = VAR_5;


 VAR_14->sc_cmd = VAR_13;
 VAR_14->sc_read = 0;
 VAR_14->sc_written = 0;
 VAR_14->sc_len = VAR_13->tx_cmd_sz + VAR_13->tx_data_sz;


 FUNC_7(VAR_14, VAR_1);

 if (!FUNC_8(VAR_14)) {

  VAR_16 = FUNC_1(VAR_14, VAR_6);
  VAR_16 |= (VAR_8 | VAR_7 | VAR_9);
  FUNC_3(VAR_14, VAR_6, VAR_16);


  VAR_15 = FUNC_9(VAR_11, &VAR_14->sc_mtx, 0, "intelspi", VAR_10 * 2);
 }


 FUNC_7(VAR_14, VAR_0);


 VAR_14->sc_cmd = ((void*)0);
 VAR_14->sc_read = 0;
 VAR_14->sc_written = 0;
 VAR_14->sc_len = 0;


 VAR_16 = FUNC_1(VAR_14, VAR_6);
 VAR_16 &= ~(VAR_8 | VAR_7 | VAR_9);
 FUNC_3(VAR_14, VAR_6, VAR_16);


 VAR_14->sc_flags = 0;
 FUNC_10(VAR_11);
 FUNC_2(VAR_14);





 if (VAR_15 == VAR_4) {
  FUNC_6(VAR_14->sc_dev, "transfer timeout\n");
  VAR_15 = VAR_3;
 }

 return (VAR_15);
}
