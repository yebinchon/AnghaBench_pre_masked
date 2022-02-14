
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int tx_data_sz; int rx_data_sz; scalar_t__ rx_data; scalar_t__ tx_data; scalar_t__ rx_cmd; scalar_t__ tx_cmd; } ;
struct chipc_spi_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct chipc_spi_softc*) ;
 int FUNC_3 (struct chipc_spi_softc*,int ,int ) ;
 scalar_t__ FUNC_4 (struct chipc_spi_softc*,int ,int *) ;
 struct chipc_spi_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, device_t VAR_4, struct spi_command *VAR_5)
{
 struct chipc_spi_softc *VAR_6;
 uint8_t *VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_3);
 FUNC_1(VAR_5->tx_cmd_sz == VAR_5->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_1(VAR_5->tx_data_sz == VAR_5->rx_data_sz,
     ("TX/RX data sizes should be equal"));

 if (VAR_5->tx_cmd_sz == 0) {
  FUNC_0(VAR_4, "size of command is ZERO");
  return (VAR_2);
 }

 FUNC_2(VAR_6);
 FUNC_3(VAR_6, VAR_0, 0);
 FUNC_2(VAR_6);




 VAR_8 = (uint8_t *)VAR_5->tx_cmd;
 VAR_7 = (uint8_t *)VAR_5->rx_cmd;
 for (VAR_9 = 0; VAR_9 < VAR_5->tx_cmd_sz; VAR_9++)
   if (FUNC_4(VAR_6, VAR_8[VAR_9], &(VAR_7[VAR_9])))
    return (VAR_2);




 VAR_8 = (uint8_t *)VAR_5->tx_data;
 VAR_7 = (uint8_t *)VAR_5->rx_data;
 for (VAR_9 = 0; VAR_9 < VAR_5->tx_data_sz; VAR_9++)
  if (FUNC_4(VAR_6, VAR_8[VAR_9], &(VAR_7[VAR_9])))
   return (VAR_2);




 FUNC_2(VAR_6);
 FUNC_3(VAR_6, VAR_1, 0);
 FUNC_2(VAR_6);

 return (0);
}
