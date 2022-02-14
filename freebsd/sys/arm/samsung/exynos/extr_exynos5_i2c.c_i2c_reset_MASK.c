
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, u_char VAR_2, u_char VAR_3, u_char *VAR_4)
{
 struct i2c_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_1);

 FUNC_0("i2c reset\n");

 FUNC_2(&VAR_5->mutex);



 FUNC_3(&VAR_5->mutex);

 return (VAR_0);
}
