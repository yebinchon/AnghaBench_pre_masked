
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
struct spi_command {int tx_cmd_sz; int rx_cmd_sz; int* tx_cmd; int* rx_cmd; void* rx_data_sz; void* tx_data_sz; int rx_data; int tx_data; } ;
struct mx25l_softc {int sc_flags; int sc_erasesize; int sc_dev; int sc_parent; int sc_dummybuf; } ;
typedef int off_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,struct spi_command*) ;
 int FUNC_2 (struct mx25l_softc*,int) ;
 int FUNC_3 (struct mx25l_softc*,int) ;
 int FUNC_4 (struct mx25l_softc*) ;

__attribute__((used)) static int
FUNC_5(struct mx25l_softc *VAR_4, off_t VAR_5, caddr_t VAR_6, off_t VAR_7)
{
 uint8_t VAR_8[8], VAR_9[8];
 struct spi_command VAR_10;
 off_t VAR_11;
 int VAR_12 = 0;

 if (VAR_4->sc_flags & VAR_3) {
  VAR_10.tx_cmd_sz = 5;
  VAR_10.rx_cmd_sz = 5;
 } else {
  VAR_10.tx_cmd_sz = 4;
  VAR_10.rx_cmd_sz = 4;
 }





 if (VAR_7 % VAR_4->sc_erasesize != 0 || VAR_5 % VAR_4->sc_erasesize != 0)
  return (VAR_1);





 while (VAR_7 != 0) {

  if (((VAR_5) % VAR_4->sc_erasesize) == 0) {
   VAR_12 = FUNC_2(VAR_4, VAR_5);
   if (VAR_12)
    break;
  }

  VAR_8[0] = VAR_0;
  if (VAR_4->sc_flags & VAR_3) {
   VAR_8[1] = (VAR_5 >> 24) & 0xff;
   VAR_8[2] = (VAR_5 >> 16) & 0xff;
   VAR_8[3] = (VAR_5 >> 8) & 0xff;
   VAR_8[4] = VAR_5 & 0xff;
  } else {
   VAR_8[1] = (VAR_5 >> 16) & 0xff;
   VAR_8[2] = (VAR_5 >> 8) & 0xff;
   VAR_8[3] = VAR_5 & 0xff;
  }

  VAR_11 = FUNC_0(VAR_2, VAR_7);
  VAR_10.tx_cmd = VAR_8;
  VAR_10.rx_cmd = VAR_9;
  VAR_10.tx_data = VAR_6;
  VAR_10.rx_data = VAR_4->sc_dummybuf;
  VAR_10.tx_data_sz = (uint32_t)VAR_11;
  VAR_10.rx_data_sz = (uint32_t)VAR_11;





  if ((VAR_12 = FUNC_4(VAR_4)) != 0)
   break;
  if ((VAR_12 = FUNC_3(VAR_4, 1)) != 0)
   break;

  VAR_12 = FUNC_1(VAR_4->sc_parent, VAR_4->sc_dev, &VAR_10);
  if (VAR_12 != 0)
   break;
  VAR_12 = FUNC_4(VAR_4);
  if (VAR_12)
   break;

  VAR_6 += VAR_11;
  VAR_5 += VAR_11;
  VAR_7 -= VAR_11;
 }

 return (VAR_12);
}
