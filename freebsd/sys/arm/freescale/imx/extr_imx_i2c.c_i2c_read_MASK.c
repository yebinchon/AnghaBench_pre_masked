
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_softc*,int) ;
 int FUNC_4 (struct i2c_softc*,int ) ;
 int FUNC_5 (struct i2c_softc*,int ,int) ;
 int FUNC_6 (struct i2c_softc*,int) ;
 int FUNC_7 (struct i2c_softc*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, char *VAR_8, int VAR_9, int *VAR_10, int VAR_11, int VAR_12)
{
 struct i2c_softc *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_2(VAR_7);
 *VAR_10 = 0;

 FUNC_1(VAR_13, 1, "read   0x%02x len %d: ", VAR_13->slave, VAR_9);
 if (VAR_9) {
  if (VAR_9 == 1)
   FUNC_5(VAR_13, VAR_3, VAR_0 |
       VAR_1 | VAR_2);
  else
   FUNC_5(VAR_13, VAR_3, VAR_0 |
       VAR_1);

  FUNC_5(VAR_13, VAR_5, 0x0);
  FUNC_4(VAR_13, VAR_4);
 }

 VAR_14 = 0;
 *VAR_10 = 0;
 while (*VAR_10 < VAR_9) {
  if ((VAR_14 = FUNC_7(VAR_13, 0)) != VAR_6)
   break;
  FUNC_5(VAR_13, VAR_5, 0x0);
  if (VAR_11) {
   if (*VAR_10 == VAR_9 - 2) {

    FUNC_5(VAR_13, VAR_3, VAR_0 |
        VAR_1 | VAR_2);
   } else if (*VAR_10 == VAR_9 - 1) {

    FUNC_5(VAR_13, VAR_3, VAR_0 |
        VAR_2);
    FUNC_6(VAR_13, 0);
   }
  }
  VAR_15 = FUNC_4(VAR_13, VAR_4);
  FUNC_0(VAR_13, 1, "0x%02x ", VAR_15);
  *VAR_8++ = VAR_15;
  (*VAR_10)++;
 }
 FUNC_0(VAR_13, 1, "\n");

 return (FUNC_3(VAR_13, VAR_14));
}
