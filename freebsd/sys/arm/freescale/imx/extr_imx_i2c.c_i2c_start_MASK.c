
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct i2c_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_softc*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct i2c_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, u_char VAR_2, int VAR_3)
{
 struct i2c_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if ((VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3)) != 0) {
  FUNC_3(VAR_4, VAR_0, 0x0);
  if ((VAR_5 = FUNC_1(VAR_4)) != 0)
   return (VAR_5);
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 }
 return (VAR_5);
}
