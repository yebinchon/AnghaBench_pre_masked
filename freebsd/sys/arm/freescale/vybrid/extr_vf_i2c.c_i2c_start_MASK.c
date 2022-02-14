
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct i2c_softc*,int ) ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 struct i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_softc*,char*) ;
 int FUNC_7 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_11, u_char VAR_12, int VAR_13)
{
 struct i2c_softc *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_11);

 FUNC_6(VAR_14, "i2c start\n");

 FUNC_4(&VAR_14->mutex);

 FUNC_2(VAR_14, VAR_0, VAR_12);

 if (FUNC_1(VAR_14, VAR_3) & VAR_8) {
  FUNC_5(&VAR_14->mutex);
  FUNC_6(VAR_14, "cant i2c start: IIC_EBUSBSY\n");
  return (VAR_9);
 }


 VAR_16 = (VAR_5 | VAR_6 | VAR_4);
 FUNC_2(VAR_14, VAR_1, VAR_16);

 FUNC_0(100);

 VAR_16 |= (VAR_7);
 FUNC_2(VAR_14, VAR_1, VAR_16);


 FUNC_2(VAR_14, VAR_2, VAR_12);

 VAR_15 = FUNC_7(VAR_14);

 FUNC_5(&VAR_14->mutex);
 if (VAR_15) {
  FUNC_6(VAR_14, "cant i2c start: iif error\n");
  return (VAR_15);
 }

 return (VAR_10);
}
