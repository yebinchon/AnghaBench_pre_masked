
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


 int FUNC_1 (struct i2c_softc*,int ,int) ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_softc*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, u_char VAR_5, u_char VAR_6, u_char *VAR_7)
{
 struct i2c_softc *VAR_8;

 VAR_8 = FUNC_2(VAR_4);

 FUNC_5(VAR_8, "i2c reset\n");

 switch (VAR_5) {
 case 131:
 case 129:
 case 128:
 case 130:
 default:
  break;
 }

 FUNC_3(&VAR_8->mutex);
 FUNC_1(VAR_8, VAR_0, VAR_2);

 FUNC_0(1000);

 FUNC_1(VAR_8, VAR_1, 20);
 FUNC_1(VAR_8, VAR_0, 0x0);

 FUNC_0(1000);

 FUNC_4(&VAR_8->mutex);

 return (VAR_3);
}
