
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_command {int tx_cmd_sz; int rx_cmd_sz; struct spi_command* rx_cmd; struct spi_command* tx_cmd; } ;
typedef struct spi_command uint8_t ;
typedef int txBuf ;
struct mx25l_softc {int sc_dev; int sc_parent; } ;
typedef int rxBuf ;
typedef int cmd ;


 int FUNC_0 (int ,int ,struct spi_command*) ;
 int FUNC_1 (struct spi_command*,int ,int) ;
 int FUNC_2 (struct mx25l_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mx25l_softc *VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2[1], VAR_3[1];
 struct spi_command VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_2, 0, sizeof(VAR_2));
 FUNC_1(VAR_3, 0, sizeof(VAR_3));

 VAR_4.tx_cmd_sz = VAR_4.rx_cmd_sz = 1;

 VAR_4.tx_cmd = VAR_2;
 VAR_4.rx_cmd = VAR_3;

 VAR_2[0] = VAR_1;

 if ((VAR_5 = FUNC_0(VAR_0->sc_parent, VAR_0->sc_dev, &VAR_4)) == 0)
  VAR_5 = FUNC_2(VAR_0);

 return (VAR_5);
}
