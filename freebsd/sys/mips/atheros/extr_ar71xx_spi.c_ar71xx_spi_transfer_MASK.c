
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int tx_data_sz; int rx_data_sz; scalar_t__ rx_data; scalar_t__ tx_data; scalar_t__ rx_cmd; scalar_t__ tx_cmd; } ;
struct ar71xx_spi_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ar71xx_spi_softc*,int ) ;
 int FUNC_2 (struct ar71xx_spi_softc*,int ) ;
 int FUNC_3 (struct ar71xx_spi_softc*,int ,int ) ;
 struct ar71xx_spi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, struct spi_command *VAR_3)
{
 struct ar71xx_spi_softc *VAR_4;
 uint32_t VAR_5;
 uint8_t *VAR_6, *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_4(VAR_1);

 FUNC_5(VAR_2, &VAR_5);

 VAR_5 &= ~VAR_0;

 FUNC_1(VAR_4, VAR_5);

 FUNC_0(VAR_3->tx_cmd_sz == VAR_3->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_0(VAR_3->tx_data_sz == VAR_3->rx_data_sz,
     ("TX/RX data sizes should be equal"));




 VAR_7 = (uint8_t *)VAR_3->tx_cmd;
 VAR_6 = (uint8_t *)VAR_3->rx_cmd;
 for (VAR_8 = 0; VAR_8 < VAR_3->tx_cmd_sz; VAR_8++)
  VAR_6[VAR_8] = FUNC_3(VAR_4, VAR_5, VAR_7[VAR_8]);




 VAR_7 = (uint8_t *)VAR_3->tx_data;
 VAR_6 = (uint8_t *)VAR_3->rx_data;
 for (VAR_8 = 0; VAR_8 < VAR_3->tx_data_sz; VAR_8++)
  VAR_6[VAR_8] = FUNC_3(VAR_4, VAR_5, VAR_7[VAR_8]);

 FUNC_2(VAR_4, VAR_5);

 return (0);
}
