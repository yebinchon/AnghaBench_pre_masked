
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ti_i2c_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ti_i2c_softc*) ;
 int FUNC_1 (struct ti_i2c_softc*) ;
 struct ti_i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ti_i2c_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, u_char VAR_2, u_char VAR_3, u_char *VAR_4)
{
 struct ti_i2c_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 FUNC_0(VAR_5);
 VAR_6 = FUNC_3(VAR_5, VAR_2);
 FUNC_1(VAR_5);
 if (VAR_6)
  return (VAR_6);

 return (VAR_0);
}
