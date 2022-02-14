
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_command {int rx_cmd_sz; int tx_cmd_sz; struct spi_command* rx_cmd; struct spi_command* tx_cmd; } ;
typedef struct spi_command uint8_t ;
typedef int txBuf ;
typedef int rxBuf ;
typedef int device_t ;
typedef int cmd ;


 int FUNC_0 (int ,int ,struct spi_command*) ;
 struct spi_command VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct spi_command*,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t *VAR_2)
{
 uint8_t VAR_3[8], VAR_4[8];
 struct spi_command VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_3, 0, sizeof(VAR_3));

 VAR_4[0] = VAR_0;
 VAR_5.tx_cmd = VAR_4;
 VAR_5.rx_cmd = VAR_3;
 VAR_5.rx_cmd_sz = VAR_5.tx_cmd_sz = 2;
 VAR_6 = FUNC_0(FUNC_1(VAR_1), VAR_1, &VAR_5);
 *VAR_2 = VAR_3[1];
 return (VAR_6);
}
