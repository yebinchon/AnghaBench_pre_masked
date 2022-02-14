
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct ti_spi_softc {int sc_fifolvl; int sc_cs; scalar_t__ sc_written; scalar_t__ sc_len; struct spi_command* sc_cmd; } ;
struct spi_command {size_t tx_cmd_sz; scalar_t__ tx_data; scalar_t__ tx_cmd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ti_spi_softc*,int ) ;
 int FUNC_4 (struct ti_spi_softc*,int ,int ) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(struct ti_spi_softc *VAR_1)
{
 int VAR_2, VAR_3;
 struct spi_command *VAR_4;
 uint32_t VAR_5;
 uint8_t *VAR_6;

 VAR_4 = VAR_1->sc_cmd;
 VAR_2 = FUNC_5(VAR_1->sc_len - VAR_1->sc_written, VAR_1->sc_fifolvl);
 while (VAR_2-- > 0) {
  VAR_6 = (uint8_t *)VAR_4->tx_cmd;
  VAR_5 = VAR_1->sc_written++;
  if (VAR_5 >= VAR_4->tx_cmd_sz) {
   VAR_6 = (uint8_t *)VAR_4->tx_data;
   VAR_5 -= VAR_4->tx_cmd_sz;
  }
  if (VAR_1->sc_fifolvl == 1) {

   VAR_3 = 1000;
   while (--VAR_3 > 0 && (FUNC_3(VAR_1,
       FUNC_1(VAR_1->sc_cs)) & VAR_0) == 0) {
    FUNC_0(100);
   }
   if (VAR_3 == 0)
    return (-1);
  }
  FUNC_4(VAR_1, FUNC_2(VAR_1->sc_cs), VAR_6[VAR_5]);
 }

 return (0);
}
