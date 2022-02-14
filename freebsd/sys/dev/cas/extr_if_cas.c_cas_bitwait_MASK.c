
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cas_softc {int dummy; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct cas_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct cas_softc *VAR_1, bus_addr_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 for (VAR_5 = VAR_0; VAR_5--; FUNC_1(100)) {
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_6 & VAR_3) == 0 && (VAR_6 & VAR_4) == VAR_4)
   return (1);
 }
 return (0);
}
