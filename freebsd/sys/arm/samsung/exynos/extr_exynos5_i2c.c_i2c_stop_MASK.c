
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i2c_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 int FUNC_3 (struct i2c_softc*) ;
 struct i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 struct i2c_softc *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5);

 FUNC_0("i2c stop\n");

 FUNC_5(&VAR_6->mutex);

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 int VAR_9 = (VAR_7 >> VAR_1) & VAR_0;

 VAR_7 = (VAR_4);
 VAR_7 |= (VAR_9 << VAR_1);
 FUNC_2(VAR_6, VAR_2, VAR_7);

 FUNC_3(VAR_6);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_0("cant i2c stop: nibb error\n");
  return (VAR_8);
 }

 FUNC_6(&VAR_6->mutex);
 return (VAR_3);
}
