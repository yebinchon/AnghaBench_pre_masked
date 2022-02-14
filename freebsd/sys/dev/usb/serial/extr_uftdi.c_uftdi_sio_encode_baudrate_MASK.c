
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uftdi_softc {int dummy; } ;
struct uftdi_param_config {size_t baud_lobits; scalar_t__ baud_hibits; } ;
typedef int speed_t ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(struct uftdi_softc *VAR_1, speed_t VAR_2,
 struct uftdi_param_config *VAR_3)
{
 u_int VAR_4;
 const speed_t VAR_5[] = {
  300, 600, 1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200
 };





 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_5); ++VAR_4) {
  if (VAR_2 == VAR_5[VAR_4]) {
   VAR_3->baud_lobits = VAR_4;
   VAR_3->baud_hibits = 0;
   return (0);
  }
 }
 return (VAR_0);
}
