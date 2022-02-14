
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
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_softc*,int) ;
 int FUNC_4 (struct i2c_softc*,int ,int ) ;
 int FUNC_5 (struct i2c_softc*,int ) ;
 int FUNC_6 (struct i2c_softc*,int ,int) ;
 int FUNC_7 (struct i2c_softc*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6, u_char VAR_7, int VAR_8)
{
 struct i2c_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6);

 if ((FUNC_5(VAR_9, VAR_4) & VAR_1) == 0) {
  return (VAR_5);
 }





 FUNC_4(VAR_9, VAR_2, VAR_0);
 FUNC_0(1);
 FUNC_6(VAR_9, VAR_4, 0x0);
 FUNC_6(VAR_9, VAR_3, VAR_7);
 VAR_9->slave = VAR_7;
 FUNC_1(VAR_9, 2, "rstart 0x%02x\n", VAR_9->slave);
 VAR_10 = FUNC_7(VAR_9, 1);
 return (FUNC_3(VAR_9, VAR_10));
}
