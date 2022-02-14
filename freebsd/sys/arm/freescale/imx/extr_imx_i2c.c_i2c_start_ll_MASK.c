
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int slave; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_softc*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_softc*,int) ;
 int FUNC_4 (struct i2c_softc*,int ) ;
 int FUNC_5 (struct i2c_softc*,int ,int) ;
 int FUNC_6 (struct i2c_softc*,int) ;
 int FUNC_7 (struct i2c_softc*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, u_char VAR_10, int VAR_11)
{
 struct i2c_softc *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_9);

 FUNC_5(VAR_12, VAR_4, VAR_0);
 FUNC_0(10);
 if (FUNC_4(VAR_12, VAR_6) & VAR_3) {
  return (FUNC_3(VAR_12, VAR_7));
 }
 FUNC_5(VAR_12, VAR_4, VAR_0 | VAR_1 | VAR_2);
 if ((VAR_13 = FUNC_6(VAR_12, 1)) != VAR_8)
  return (FUNC_3(VAR_12, VAR_13));
 FUNC_5(VAR_12, VAR_6, 0);
 FUNC_5(VAR_12, VAR_5, VAR_10);
 VAR_12->slave = VAR_10;
 FUNC_1(VAR_12, 2, "start  0x%02x\n", VAR_12->slave);
 VAR_13 = FUNC_7(VAR_12, 1);
 return (FUNC_3(VAR_12, VAR_13));
}
