
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ipw_softc {int dummy; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (struct ipw_softc*,scalar_t__,int const) ;
 int FUNC_1 (struct ipw_softc*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ipw_softc *VAR_2, bus_size_t VAR_3, const uint8_t *VAR_4,
    bus_size_t VAR_5)
{
 for (; VAR_5 > 0; VAR_3++, VAR_4++, VAR_5--) {
  FUNC_1(VAR_2, VAR_0, VAR_3 & ~3);
  FUNC_0(VAR_2, VAR_1 + (VAR_3 & 3), *VAR_4);
 }
}
