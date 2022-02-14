
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int* tx_cmd; int* rx_cmd; int tx_data_sz; int rx_data_sz; void* rx_data; void* tx_data; } ;
struct mx25l_softc {int sc_flags; int sc_dev; int sc_parent; TYPE_1__* sc_disk; } ;
typedef int off_t ;
typedef void* caddr_t ;
struct TYPE_2__ {int d_sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;

__attribute__((used)) static int
FUNC_1(struct mx25l_softc *VAR_3, off_t VAR_4, caddr_t VAR_5, off_t VAR_6)
{
 uint8_t VAR_7[8], VAR_8[8];
 struct spi_command VAR_9;
 int VAR_10 = 0;






 if (VAR_6 % VAR_3->sc_disk->d_sectorsize != 0 ||
     VAR_4 % VAR_3->sc_disk->d_sectorsize != 0)
  return (VAR_1);

 VAR_7[0] = VAR_0;
 if (VAR_3->sc_flags & VAR_2) {
  VAR_9.tx_cmd_sz = 6;
  VAR_9.rx_cmd_sz = 6;

  VAR_7[1] = (VAR_4 >> 24) & 0xff;
  VAR_7[2] = (VAR_4 >> 16) & 0xff;
  VAR_7[3] = (VAR_4 >> 8) & 0xff;
  VAR_7[4] = VAR_4 & 0xff;

  VAR_7[5] = 0;
 } else {
  VAR_9.tx_cmd_sz = 5;
  VAR_9.rx_cmd_sz = 5;

  VAR_7[1] = (VAR_4 >> 16) & 0xff;
  VAR_7[2] = (VAR_4 >> 8) & 0xff;
  VAR_7[3] = VAR_4 & 0xff;

  VAR_7[4] = 0;
 }

 VAR_9.tx_cmd = VAR_7;
 VAR_9.rx_cmd = VAR_8;
 VAR_9.tx_data = VAR_5;
 VAR_9.rx_data = VAR_5;
 VAR_9.tx_data_sz = VAR_6;
 VAR_9.rx_data_sz = VAR_6;

 VAR_10 = FUNC_0(VAR_3->sc_parent, VAR_3->sc_dev, &VAR_9);
 return (VAR_10);
}
