
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_command {int* tx_cmd; int* rx_cmd; int rx_cmd_sz; int tx_cmd_sz; } ;
struct ec_softc {int dev; } ;
typedef int spi_cmd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct spi_command*) ;
 int FUNC_2 (struct ec_softc*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct ec_softc* VAR_4 ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int ) ;
 int* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct spi_command*,int ,int) ;

int
FUNC_9(uint8_t VAR_5, uint8_t *VAR_6, uint8_t VAR_7,
    uint8_t *VAR_8, uint8_t VAR_9)
{
 struct spi_command VAR_10;
 struct ec_softc *VAR_11;
 uint8_t *VAR_12;
 uint8_t *VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));

 VAR_12 = FUNC_7(VAR_7 + 4, VAR_1, VAR_2 | VAR_3);
 VAR_13 = FUNC_7(VAR_9 + 4, VAR_1, VAR_2 | VAR_3);

 VAR_10.tx_cmd = VAR_12;
 VAR_10.rx_cmd = VAR_13;

 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_11 = VAR_4;

 VAR_12[0] = VAR_0;
 VAR_12[1] = VAR_5;
 VAR_12[2] = VAR_7;

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  VAR_12[VAR_15 + 3] = VAR_6[VAR_15];
 }

 FUNC_5(VAR_12, VAR_7 + 3);

 FUNC_2(VAR_11, 1);
 VAR_10.rx_cmd_sz = VAR_10.tx_cmd_sz = VAR_7 + 4;
 VAR_14 = FUNC_1(FUNC_3(VAR_11->dev), VAR_11->dev, &VAR_10);


 for (VAR_15 = 0; VAR_15 < 1000; VAR_15++) {
  FUNC_0(10);
  VAR_12[0] = 0xff;
  VAR_10.rx_cmd_sz = VAR_10.tx_cmd_sz = 1;
  FUNC_1(FUNC_3(VAR_11->dev), VAR_11->dev, &VAR_10);
  if (VAR_13[0] == 0xec)
   break;
 }


 for (VAR_15 = 0; VAR_15 < (VAR_7 + 4); VAR_15++)
  VAR_12[VAR_15] = 0xff;
 VAR_10.rx_cmd_sz = VAR_10.tx_cmd_sz = VAR_7 + 4 - 1;
 VAR_14 = FUNC_1(FUNC_3(VAR_11->dev), VAR_11->dev, &VAR_10);
 FUNC_2(VAR_11, 0);

 if (VAR_14 != 0) {
  FUNC_4(VAR_11->dev, "spibus_transfer returned %d\n", VAR_14);
  FUNC_6(VAR_12, VAR_1);
  FUNC_6(VAR_13, VAR_1);
  return (-1);
 }

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_8[VAR_15] = VAR_13[VAR_15 + 2];
 }

 FUNC_6(VAR_12, VAR_1);
 FUNC_6(VAR_13, VAR_1);

 return (0);
}
