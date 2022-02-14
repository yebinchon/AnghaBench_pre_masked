
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_command {int rx_cmd_sz; int tx_cmd_sz; struct spi_command* rx_cmd; struct spi_command* tx_cmd; } ;
typedef struct spi_command uint8_t ;
typedef int txBuf ;
struct mx25l_softc {int sc_dev; int sc_parent; } ;
typedef int rxBuf ;
typedef int cmd ;


 struct spi_command VAR_0 ;
 struct spi_command VAR_1 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;
 int FUNC_1 (struct spi_command*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mx25l_softc *VAR_2, int VAR_3)
{
 uint8_t VAR_4[1], VAR_5[1];
 struct spi_command VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_5, 0, sizeof(VAR_5));

 VAR_4[0] = VAR_3 ? VAR_1 : VAR_0;
 VAR_6.tx_cmd = VAR_4;
 VAR_6.rx_cmd = VAR_5;
 VAR_6.rx_cmd_sz = 1;
 VAR_6.tx_cmd_sz = 1;
 VAR_7 = FUNC_0(VAR_2->sc_parent, VAR_2->sc_dev, &VAR_6);
 return (VAR_7);
}
