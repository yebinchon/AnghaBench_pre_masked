
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int tx_data_sz; int rx_data_sz; scalar_t__ rx_data; scalar_t__ tx_data; scalar_t__ tx_cmd; scalar_t__ rx_cmd; } ;
struct mtk_spi_softc {scalar_t__ nonflash; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtk_spi_softc*,int ,int) ;
 int VAR_8 ;
 struct mtk_spi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mtk_spi_softc*) ;
 int FUNC_5 (struct mtk_spi_softc*) ;
 int FUNC_6 (struct mtk_spi_softc*,int*,int ) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, device_t VAR_10, struct spi_command *VAR_11)
{
 struct mtk_spi_softc *VAR_12;
 uint8_t *VAR_13, VAR_14, *VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0;
 int VAR_23, VAR_24, VAR_25;

 VAR_12 = FUNC_1(VAR_9);

 FUNC_8(VAR_10, &VAR_16);
 FUNC_7(VAR_10, &VAR_17);
 FUNC_9(VAR_10, &VAR_18);

 VAR_16 &= ~VAR_6;

 if (VAR_16 != 0)

  return (VAR_1);

 VAR_25 = VAR_2;
 switch(VAR_18) {
  case 0:

  case 3:
   VAR_25 |= VAR_7 | VAR_8;
                        break;
  case 1:
   VAR_25 |= VAR_8;
                        break;
  case 2:
   VAR_25 |= VAR_0;
                        break;
 }





 if (VAR_17 != 0) {
  VAR_23 = (FUNC_3() + (VAR_17 - 1)) / VAR_17;
  VAR_24 = FUNC_2(VAR_23) - 2;
  if (VAR_24 < 0)
   VAR_24 = 0;
  else if (VAR_24 > 6)
   VAR_24 = 6;
 } else {
  VAR_24 = 6;
 }

 FUNC_0(VAR_12, VAR_3, VAR_25 | VAR_24);

 if (VAR_12->nonflash == 0) {

  VAR_15 = (uint8_t *)(VAR_11->tx_cmd);


  switch(VAR_15[0]) {
   case 132:
    VAR_11->tx_cmd_sz = 1;
    VAR_11->rx_cmd_sz = 3;
    break;
   case 137:
   case 136:
   case 128:
   case 129:
    VAR_11->tx_cmd_sz = 1;
    VAR_11->rx_cmd_sz = 0;
    break;
   case 131:
    VAR_11->tx_cmd_sz = 1;
    VAR_11->rx_cmd_sz = 1;
    break;
   case 133:
   case 135:
    VAR_11->rx_cmd_sz = VAR_11->tx_data_sz = 0;
    break;
   case 130:
    VAR_11->rx_cmd_sz = 0;
    break;
   case 134:
    VAR_11->rx_cmd_sz = VAR_11->rx_data_sz = 0;
    break;
  }
 }

 FUNC_4(VAR_12);

 if (VAR_11->tx_cmd_sz + VAR_11->rx_cmd_sz) {
  VAR_13 = (uint8_t *)(VAR_11->rx_cmd);
  VAR_15 = (uint8_t *)(VAR_11->tx_cmd);
  VAR_20 = VAR_11->tx_cmd_sz;
  if (VAR_12->nonflash == 0)
   VAR_20 += VAR_11->rx_cmd_sz;

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
                        if(VAR_19 < VAR_11->tx_cmd_sz) {
           VAR_14 = VAR_15[VAR_19];
           VAR_21 = FUNC_6(VAR_12, &VAR_14,
               VAR_5);
           if (VAR_21)
            goto mtk_spi_transfer_fail;
                                continue;
                        }
                        VAR_21 = FUNC_6(VAR_12, &VAR_14,
              VAR_4);
          if (VAR_21)
           goto mtk_spi_transfer_fail;
   VAR_13[VAR_19] = VAR_14;
  }
 }





 if (VAR_11->tx_data_sz + VAR_11->rx_data_sz) {
  VAR_22 = (VAR_11->tx_data_sz > 0)?1:0;
  VAR_13 = (uint8_t *)(VAR_22 ? VAR_11->tx_data : VAR_11->rx_data);
  VAR_20 = VAR_22 ? VAR_11->tx_data_sz : VAR_11->rx_data_sz;

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   VAR_14 = VAR_13[VAR_19];
   VAR_21 = FUNC_6(VAR_12, &VAR_14,
       VAR_22 ? VAR_5 : VAR_4);
   if (VAR_21)
    goto mtk_spi_transfer_fail;
   VAR_13[VAR_19] = VAR_14;
  }
 }
mtk_spi_transfer_fail:
 FUNC_5(VAR_12);

 return (VAR_21);
}
