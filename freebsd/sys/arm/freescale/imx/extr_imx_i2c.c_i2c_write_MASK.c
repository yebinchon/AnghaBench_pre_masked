
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int slave; } ;
typedef int device_t ;


 int FUNC_0 (struct i2c_softc*,int,char*,...) ;
 int FUNC_1 (struct i2c_softc*,int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_softc*,int) ;
 int FUNC_4 (struct i2c_softc*,int ,int) ;
 int FUNC_5 (struct i2c_softc*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, const char *VAR_4, int VAR_5, int *VAR_6, int VAR_7)
{
 struct i2c_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_3);

 VAR_9 = 0;
 *VAR_6 = 0;
 FUNC_1(VAR_8, 1, "write  0x%02x len %d: ", VAR_8->slave, VAR_5);
 while (*VAR_6 < VAR_5) {
  FUNC_0(VAR_8, 1, "0x%02x ", *VAR_4);
  FUNC_4(VAR_8, VAR_1, 0x0);
  FUNC_4(VAR_8, VAR_0, *VAR_4++);
  if ((VAR_9 = FUNC_5(VAR_8, 1)) != VAR_2)
   break;
  (*VAR_6)++;
 }
 FUNC_0(VAR_8, 1, "\n");
 return (FUNC_3(VAR_8, VAR_9));
}
