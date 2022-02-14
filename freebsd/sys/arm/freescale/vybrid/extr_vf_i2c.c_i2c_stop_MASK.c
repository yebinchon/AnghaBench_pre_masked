
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_softc*,int ,int) ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_softc*,char*) ;
 scalar_t__ FUNC_6 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct i2c_softc *VAR_7;

 VAR_7 = FUNC_2(VAR_6);

 FUNC_5(VAR_7, "i2c stop\n");

 FUNC_3(&VAR_7->mutex);

 FUNC_1(VAR_7, VAR_0, VAR_3 | VAR_1);

 FUNC_0(100);


 if (FUNC_6(VAR_7) == VAR_4) {
  FUNC_1(VAR_7, VAR_0, VAR_2);
  FUNC_0(1000);
  FUNC_1(VAR_7, VAR_0, VAR_3);
 }
 FUNC_4(&VAR_7->mutex);

 return (VAR_5);
}
