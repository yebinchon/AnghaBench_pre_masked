
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct aw_spi_softc {int mod_freq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_0(struct aw_spi_softc *VAR_2, uint64_t VAR_3, uint32_t *VAR_4)
{
 uint64_t VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_0 >> VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = VAR_2->mod_freq / (1 << VAR_7);
  if ((VAR_3 - VAR_5) < (VAR_3 - VAR_6)) {
   VAR_6 = VAR_5;
   VAR_9 = VAR_7;
  }
 }

 *VAR_4 = (VAR_9 << VAR_1);
 return (VAR_6);
}
