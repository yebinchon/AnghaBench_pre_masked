
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_command {int* tx_cmd; int* rx_cmd; int rx_cmd_sz; int tx_cmd_sz; } ;
struct mx25l_softc {int sc_dev; int sc_parent; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;
 int VAR_1 ;
 int FUNC_1 (struct spi_command*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mx25l_softc *VAR_2)
{
 uint8_t VAR_3[2], VAR_4[2];
 struct spi_command VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 do {
  VAR_3[0] = VAR_0;
  VAR_5.tx_cmd = VAR_3;
  VAR_5.rx_cmd = VAR_4;
  VAR_5.rx_cmd_sz = 2;
  VAR_5.tx_cmd_sz = 2;
  VAR_6 = FUNC_0(VAR_2->sc_parent, VAR_2->sc_dev, &VAR_5);
 } while (VAR_6 == 0 && (VAR_4[1] & VAR_1));

 return (VAR_6);
}
