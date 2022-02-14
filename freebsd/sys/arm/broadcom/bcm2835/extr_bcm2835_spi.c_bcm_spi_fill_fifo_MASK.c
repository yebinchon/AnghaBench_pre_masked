
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct spi_command {size_t tx_cmd_sz; scalar_t__ tx_data; scalar_t__ tx_cmd; } ;
struct bcm_spi_softc {scalar_t__ sc_written; scalar_t__ sc_len; struct spi_command* sc_cmd; } ;


 size_t FUNC_0 (struct bcm_spi_softc*,int ) ;
 int FUNC_1 (struct bcm_spi_softc*,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct bcm_spi_softc *VAR_4)
{
 struct spi_command *VAR_5;
 uint32_t VAR_6, VAR_7;
 uint8_t *VAR_8;

 VAR_5 = VAR_4->sc_cmd;
 VAR_6 = FUNC_0(VAR_4, VAR_0) & (VAR_1 | VAR_2);
 while (VAR_4->sc_written < VAR_4->sc_len &&
     VAR_6 == (VAR_1 | VAR_2)) {
  VAR_8 = (uint8_t *)VAR_5->tx_cmd;
  VAR_7 = VAR_4->sc_written++;
  if (VAR_7 >= VAR_5->tx_cmd_sz) {
   VAR_8 = (uint8_t *)VAR_5->tx_data;
   VAR_7 -= VAR_5->tx_cmd_sz;
  }
  FUNC_1(VAR_4, VAR_3, VAR_8[VAR_7]);
  VAR_6 = FUNC_0(VAR_4, VAR_0) & (VAR_1 | VAR_2);
 }
}
