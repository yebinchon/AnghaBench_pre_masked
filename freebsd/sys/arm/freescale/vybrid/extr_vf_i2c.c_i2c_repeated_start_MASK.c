
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
 int FUNC_1 (struct i2c_softc*,int ) ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 struct i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_softc*,char*) ;
 int FUNC_7 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, u_char VAR_10, int VAR_11)
{
 struct i2c_softc *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_9);

 FUNC_6(VAR_12, "i2c repeated start\n");

 FUNC_4(&VAR_12->mutex);

 FUNC_2(VAR_12, VAR_0, VAR_10);

 if ((FUNC_1(VAR_12, VAR_3) & VAR_6) == 0) {
  FUNC_5(&VAR_12->mutex);
  return (VAR_7);
 }


 FUNC_0(10);

 VAR_14 = FUNC_1(VAR_12, VAR_1);
 VAR_14 |= (VAR_5 | VAR_4);
 FUNC_2(VAR_12, VAR_1, VAR_14);

 FUNC_0(10);


 FUNC_2(VAR_12, VAR_2, VAR_10);

 VAR_13 = FUNC_7(VAR_12);

 FUNC_5(&VAR_12->mutex);

 if (VAR_13)
  return (VAR_13);

 return (VAR_8);
}
