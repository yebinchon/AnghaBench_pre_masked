
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct gem_softc {int dummy; } ;
typedef int bus_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,struct gem_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct gem_softc *VAR_1, u_int VAR_2, bus_addr_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 for (VAR_6 = VAR_0; VAR_6--; FUNC_0(100)) {
  VAR_7 = FUNC_1(VAR_2, 4, VAR_1, VAR_3);
  if ((VAR_7 & VAR_4) == 0 && (VAR_7 & VAR_5) == VAR_5)
   return (1);
 }
 return (0);
}
