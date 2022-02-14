
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct aw_spi_softc {int mod_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint64_t
FUNC_0(struct aw_spi_softc *VAR_3, uint64_t VAR_4, uint32_t *VAR_5)
{
 uint64_t VAR_6, VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = ((VAR_0) >> VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_6 = VAR_3->mod_freq / (2 * VAR_8 + 1);
  if ((VAR_4 - VAR_6) < (VAR_4 - VAR_7)) {
   VAR_7 = VAR_6;
   VAR_10 = VAR_8;
  }
 }

 *VAR_5 = VAR_2 | (VAR_10 << VAR_1);
 return (VAR_7);
}
