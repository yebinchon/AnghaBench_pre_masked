
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct spi_command {size_t rx_cmd_sz; scalar_t__ rx_data; scalar_t__ rx_cmd; } ;
struct bcm_spi_softc {scalar_t__ sc_read; scalar_t__ sc_len; struct spi_command* sc_cmd; } ;


 size_t FUNC_0 (struct bcm_spi_softc*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct bcm_spi_softc *VAR_3)
{
 struct spi_command *VAR_4;
 uint32_t VAR_5, VAR_6;
 uint8_t *VAR_7;

 VAR_4 = VAR_3->sc_cmd;
 VAR_5 = FUNC_0(VAR_3, VAR_0) & VAR_1;
 while (VAR_3->sc_read < VAR_3->sc_len && VAR_5 == VAR_1) {
  VAR_7 = (uint8_t *)VAR_4->rx_cmd;
  VAR_6 = VAR_3->sc_read++;
  if (VAR_6 >= VAR_4->rx_cmd_sz) {
   VAR_7 = (uint8_t *)VAR_4->rx_data;
   VAR_6 -= VAR_4->rx_cmd_sz;
  }
  VAR_7[VAR_6] = FUNC_0(VAR_3, VAR_2) & 0xff;
  VAR_5 = FUNC_0(VAR_3, VAR_0) & VAR_1;
 }
}
