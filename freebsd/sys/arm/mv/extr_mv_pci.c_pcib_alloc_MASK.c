
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {int sc_io_size; int* sc_io_map; int sc_mem_size; int* sc_mem_map; scalar_t__ sc_mem_base; scalar_t__ sc_io_base; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int,int) ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static bus_addr_t
FUNC_2(struct mv_pcib_softc *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, *VAR_7, VAR_8, VAR_9;
 bus_addr_t VAR_10 = 0;
 bus_addr_t VAR_11;

 if (VAR_3 & 1) {
  VAR_11 = VAR_2->sc_io_base;
  VAR_8 = VAR_0;
  VAR_5 = VAR_2->sc_io_size / VAR_8;
  VAR_7 = VAR_2->sc_io_map;
  VAR_3 &= ~0x3;
 } else {
  VAR_11 = VAR_2->sc_mem_base;
  VAR_8 = VAR_1;
  VAR_5 = VAR_2->sc_mem_size / VAR_8;
  VAR_7 = VAR_2->sc_mem_map;
  VAR_3 &= ~0xF;
 }

 VAR_9 = ~VAR_3 + 1;
 VAR_4 = VAR_9 / VAR_8;

 for (VAR_6 = 0; VAR_6 + VAR_4 <= VAR_5; VAR_6 += VAR_4)
  if (FUNC_0(VAR_7, VAR_6, VAR_4)) {
   FUNC_1(VAR_7, VAR_6, VAR_4);
   VAR_10 = VAR_11 + (VAR_6 * VAR_8);
   return (VAR_10);
  }

 return (VAR_10);
}
