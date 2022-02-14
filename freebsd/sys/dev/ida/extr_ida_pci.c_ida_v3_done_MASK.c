
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ida_softc*,int ) ;

__attribute__((used)) static bus_addr_t
FUNC_1(struct ida_softc *VAR_1)
{
 bus_addr_t VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2 == -1) {
  return (0);
 }
 return (VAR_2);
}
