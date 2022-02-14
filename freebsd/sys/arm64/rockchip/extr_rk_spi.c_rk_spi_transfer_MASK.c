
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_command {int tx_data_sz; int tx_data; int rx_data; int tx_cmd_sz; int tx_cmd; int rx_cmd; } ;
struct rk_spi_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct rk_spi_softc*) ;
 int FUNC_1 (struct rk_spi_softc*) ;
 struct rk_spi_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct rk_spi_softc*,int) ;
 int FUNC_4 (struct rk_spi_softc*,int ,int ) ;
 int FUNC_5 (struct rk_spi_softc*,int ,int) ;
 int FUNC_6 (struct rk_spi_softc*,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_0, device_t VAR_1, struct spi_command *VAR_2)
{
 struct rk_spi_softc *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_3 = FUNC_2(VAR_0);

 FUNC_8(VAR_1, &VAR_4);
 FUNC_7(VAR_1, &VAR_6);
 FUNC_9(VAR_1, &VAR_5);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3, VAR_5, VAR_6);
 FUNC_3(VAR_3, 1);
 VAR_7 = FUNC_5(VAR_3, VAR_4, 1);
 if (VAR_7 != 0) {
  FUNC_3(VAR_3, 0);
  FUNC_1(VAR_3);
  return (VAR_7);
 }


 VAR_7 = 0;
 if (VAR_2->tx_cmd_sz > 0)
  VAR_7 = FUNC_6(VAR_3, VAR_2->rx_cmd, VAR_2->tx_cmd,
      VAR_2->tx_cmd_sz);
 if (VAR_2->tx_data_sz > 0 && VAR_7 == 0)
  VAR_7 = FUNC_6(VAR_3, VAR_2->rx_data, VAR_2->tx_data,
      VAR_2->tx_data_sz);

 FUNC_5(VAR_3, VAR_4, 0);
 FUNC_3(VAR_3, 0);
 FUNC_1(VAR_3);

 return (VAR_7);
}
