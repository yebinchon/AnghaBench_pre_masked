
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ u_char ;
struct iicbus_softc {scalar_t__ bus_freq; } ;
typedef int device_t ;


 struct iicbus_softc* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u_int
FUNC_1(device_t VAR_1, u_char VAR_2)
{
 struct iicbus_softc *VAR_3 = FUNC_0(VAR_1);






 if (VAR_3->bus_freq == 0 || VAR_2 == VAR_0)
  return (100000);
 return (VAR_3->bus_freq);
}
