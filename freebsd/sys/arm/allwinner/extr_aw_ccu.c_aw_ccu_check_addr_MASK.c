
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ccu_softc {int bsh; } ;
typedef int bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct aw_ccu_softc *VAR_3, bus_addr_t VAR_4,
    bus_space_handle_t *VAR_5, bus_size_t *VAR_6)
{
 if (VAR_4 >= VAR_0 && VAR_4 < (VAR_0 + VAR_1)) {
  *VAR_6 = VAR_4 - VAR_0;
  *VAR_5 = VAR_3->bsh;
  return (0);
 }
 return (VAR_2);
}
