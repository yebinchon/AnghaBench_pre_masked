
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_command {int tx_cmd_sz; int rx_cmd_sz; struct spi_command** rx_cmd; struct spi_command** tx_cmd; } ;
typedef struct spi_command uint8_t ;
typedef int txBuf ;
struct at45d_mfg_info {int ext_id; int jedec_id; } ;
typedef int rxBuf ;
typedef int device_t ;
typedef int cmd ;


 struct spi_command VAR_0 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;
 int FUNC_1 (struct spi_command*) ;
 int FUNC_2 (struct spi_command*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct spi_command*,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, struct at45d_mfg_info *VAR_2)
{
 uint8_t VAR_3[8], VAR_4[8];
 struct spi_command VAR_5;
 int VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(VAR_4, 0, sizeof(VAR_4));
 FUNC_4(VAR_3, 0, sizeof(VAR_3));

 VAR_4[0] = VAR_0;
 VAR_5.tx_cmd = &VAR_4;
 VAR_5.rx_cmd = &VAR_3;
 VAR_5.tx_cmd_sz = VAR_5.rx_cmd_sz = 7;
 VAR_6 = FUNC_0(FUNC_3(VAR_1), VAR_1, &VAR_5);
 if (VAR_6)
  return (VAR_6);

 VAR_2->jedec_id = FUNC_2(VAR_3 + 1);
 VAR_2->ext_id = FUNC_1(VAR_3 + 5);

 return (0);
}
