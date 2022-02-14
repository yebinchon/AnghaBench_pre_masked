
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct spi_command {size_t rx_cmd_sz; scalar_t__ rx_data; scalar_t__ rx_cmd; } ;
struct mv_spi_softc {int sc_read; struct spi_command* sc_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv_spi_softc*,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct mv_spi_softc *VAR_1)
{
 struct spi_command *VAR_2;
 uint32_t VAR_3;
 uint8_t *VAR_4;

 VAR_2 = VAR_1->sc_cmd;
 VAR_4 = (uint8_t *)VAR_2->rx_cmd;
 VAR_3 = VAR_1->sc_read++;
 if (VAR_3 >= VAR_2->rx_cmd_sz) {
  VAR_4 = (uint8_t *)VAR_2->rx_data;
  VAR_3 -= VAR_2->rx_cmd_sz;
 }
 VAR_4[VAR_3] = FUNC_0(VAR_1, VAR_0) & 0xff;
}
