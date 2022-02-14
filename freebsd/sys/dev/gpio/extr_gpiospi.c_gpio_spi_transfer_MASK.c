
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spibus_ivar {scalar_t__ mode; int cs; } ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int tx_data_sz; int rx_data_sz; scalar_t__ rx_data; scalar_t__ tx_data; scalar_t__ rx_cmd; scalar_t__ tx_cmd; } ;
struct gpio_spi_softc {int sc_sclk; int sc_dev; int sc_busdev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int,char*) ;
 struct spibus_ivar* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gpio_spi_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct gpio_spi_softc*,int ) ;
 int FUNC_5 (struct gpio_spi_softc*,int ) ;
 int FUNC_6 (struct gpio_spi_softc*,int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, struct spi_command *VAR_4)
{
 struct gpio_spi_softc *VAR_5;
 uint8_t *VAR_6, *VAR_7;
 struct spibus_ivar *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 VAR_5 = FUNC_3(VAR_2);

 FUNC_1(VAR_4->tx_cmd_sz == VAR_4->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_1(VAR_4->tx_data_sz == VAR_4->rx_data_sz,
     ("TX/RX data sizes should be equal"));

 FUNC_4(VAR_5, VAR_8->cs);


 if ((VAR_8->mode == VAR_1) ||
     (VAR_8->mode == VAR_0)) {
  FUNC_0(VAR_5->sc_busdev, VAR_5->sc_dev,
      VAR_5->sc_sclk, 1);
 } else {
  FUNC_0(VAR_5->sc_busdev, VAR_5->sc_dev,
      VAR_5->sc_sclk, 0);
 }




 VAR_7 = (uint8_t *)VAR_4->tx_cmd;
 VAR_6 = (uint8_t *)VAR_4->rx_cmd;

 for (VAR_9 = 0; VAR_9 < VAR_4->tx_cmd_sz; VAR_9++)
  VAR_6[VAR_9] = FUNC_6(VAR_5, VAR_8->cs, VAR_8->mode, VAR_7[VAR_9]);




 VAR_7 = (uint8_t *)VAR_4->tx_data;
 VAR_6 = (uint8_t *)VAR_4->rx_data;
 for (VAR_9 = 0; VAR_9 < VAR_4->tx_data_sz; VAR_9++)
  VAR_6[VAR_9] = FUNC_6(VAR_5, VAR_8->cs, VAR_8->mode, VAR_7[VAR_9]);


 if ((VAR_8->mode == VAR_1) ||
     (VAR_8->mode == VAR_0)) {
  FUNC_0(VAR_5->sc_busdev, VAR_5->sc_dev,
      VAR_5->sc_sclk, 1);
 } else {
  FUNC_0(VAR_5->sc_busdev, VAR_5->sc_dev,
      VAR_5->sc_sclk, 0);
 }

 FUNC_5(VAR_5, VAR_8->cs);

 return (0);
}
