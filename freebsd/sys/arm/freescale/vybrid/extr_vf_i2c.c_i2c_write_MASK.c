
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_softc*,int ,int ) ;
 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_softc*,char*) ;
 int FUNC_5 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, const char *VAR_3, int VAR_4, int *VAR_5, int VAR_6)
{
 struct i2c_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2);

 FUNC_4(VAR_7, "i2c write\n");

 *VAR_5 = 0;

 FUNC_2(&VAR_7->mutex);
 while (*VAR_5 < VAR_4) {

  FUNC_0(VAR_7, VAR_0, *VAR_3++);

  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8) {
   FUNC_3(&VAR_7->mutex);
   return (VAR_8);
  }

  (*VAR_5)++;
 }
 FUNC_3(&VAR_7->mutex);

 return (VAR_1);
}
