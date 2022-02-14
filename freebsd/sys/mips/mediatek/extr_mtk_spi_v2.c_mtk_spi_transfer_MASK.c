
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int tx_data_sz; int rx_data_sz; scalar_t__ rx_data; scalar_t__ tx_data; scalar_t__ tx_cmd; scalar_t__ rx_cmd; } ;
struct mtk_spi_softc {int dummy; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_spi_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_spi_softc*) ;
 int FUNC_2 (struct mtk_spi_softc*) ;
 int FUNC_3 (struct mtk_spi_softc*,int*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, device_t VAR_5, struct spi_command *VAR_6)
{
 struct mtk_spi_softc *VAR_7;
 uint8_t *VAR_8, VAR_9, *VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;

 VAR_7 = FUNC_0(VAR_4);

 FUNC_4(VAR_5, &VAR_11);

 VAR_11 &= ~VAR_3;

 if (VAR_11 != 0)

  return (VAR_0);


        VAR_10 = (uint8_t *)(VAR_6->tx_cmd);


        switch(VAR_10[0]) {
                case 132:
                        VAR_6->tx_cmd_sz = 1;
                        VAR_6->rx_cmd_sz = 3;
                        break;
  case 137:
  case 136:
                case 128:
                case 129:
                        VAR_6->tx_cmd_sz = 1;
                        VAR_6->rx_cmd_sz = 0;
                        break;
                case 131:
                        VAR_6->tx_cmd_sz = 1;
                        VAR_6->rx_cmd_sz = 1;
                        break;
                case 133:
                case 135:
                        VAR_6->rx_cmd_sz = VAR_6->tx_data_sz = 0;
                        break;
                case 130:
                        VAR_6->rx_cmd_sz = 0;
                        break;
                case 134:
                        VAR_6->rx_cmd_sz = VAR_6->rx_data_sz = 0;
                        break;
        }

 FUNC_1(VAR_7);

 if (VAR_6->tx_cmd_sz + VAR_6->rx_cmd_sz) {
  VAR_8 = (uint8_t *)(VAR_6->rx_cmd);
  VAR_10 = (uint8_t *)(VAR_6->tx_cmd);
  VAR_13 = VAR_6->tx_cmd_sz + VAR_6->rx_cmd_sz;

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
                        if(VAR_12 < VAR_6->tx_cmd_sz) {
           VAR_9 = VAR_10[VAR_12];
           VAR_14 = FUNC_3(VAR_7, &VAR_9,
               VAR_2);
    if (VAR_14)
     goto mtk_spi_transfer_fail;
    continue;
                        }
                        VAR_14 = FUNC_3(VAR_7, &VAR_9,
              VAR_1);
   if (VAR_14)
    goto mtk_spi_transfer_fail;
   VAR_8[VAR_12] = VAR_9;
  }
 }





 if (VAR_6->tx_data_sz + VAR_6->rx_data_sz) {
  VAR_15 = (VAR_6->tx_data_sz > 0)?1:0;
  VAR_8 = (uint8_t *)(VAR_15 ? VAR_6->tx_data : VAR_6->rx_data);
  VAR_13 = VAR_15 ? VAR_6->tx_data_sz : VAR_6->rx_data_sz;

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   VAR_9 = VAR_8[VAR_12];
   VAR_14 = FUNC_3(VAR_7, &VAR_9,
       VAR_15 ? VAR_2 : VAR_1);
   if (VAR_14)
    goto mtk_spi_transfer_fail;
   VAR_8[VAR_12] = VAR_9;
  }
 }
mtk_spi_transfer_fail:
 FUNC_2(VAR_7);

 return (0);
}
