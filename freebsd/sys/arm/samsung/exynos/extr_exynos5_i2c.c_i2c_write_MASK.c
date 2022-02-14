
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_softc*,int ,int ) ;
 int FUNC_3 (struct i2c_softc*) ;
 struct i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct i2c_softc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3, const char *VAR_4, int VAR_5, int *VAR_6, int VAR_7)
{
 struct i2c_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_3);

 FUNC_1("i2c write\n");

 *VAR_6 = 0;

 FUNC_6(&VAR_8->mutex);

 FUNC_1("writing ");
 while (*VAR_6 < VAR_5) {
  uint8_t VAR_10 = *VAR_4++;
  FUNC_1("0x%02x ", VAR_10);

  FUNC_2(VAR_8, VAR_0, VAR_10);
  FUNC_0(50);

  FUNC_3(VAR_8);

  VAR_9 = FUNC_8(VAR_8);
  if (VAR_9) {
   FUNC_1("cant i2c write: iif error\n");
   FUNC_7(&VAR_8->mutex);
   return (VAR_9);
  }

  if (!FUNC_5(VAR_8)) {
   FUNC_1("cant i2c write: no ack\n");
   FUNC_7(&VAR_8->mutex);
   return (VAR_1);
  }

  (*VAR_6)++;
 }
 FUNC_1("\n");

 FUNC_7(&VAR_8->mutex);
 return (VAR_2);
}
