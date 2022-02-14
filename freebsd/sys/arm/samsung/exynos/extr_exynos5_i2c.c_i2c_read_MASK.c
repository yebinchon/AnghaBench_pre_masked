
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (struct i2c_softc*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 int FUNC_3 (struct i2c_softc*) ;
 struct i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, char *VAR_10, int VAR_11,
    int *VAR_12, int VAR_13, int VAR_14)
{
 struct i2c_softc *VAR_15;
 int VAR_16;
 int VAR_17;
 uint8_t VAR_18;

 VAR_15 = FUNC_4(VAR_9);

 FUNC_0("i2c read\n");

 VAR_17 = (VAR_8);
 VAR_17 |= (VAR_3 << VAR_4);
 VAR_17 |= VAR_6;
 FUNC_2(VAR_15, VAR_5, VAR_17);

 *VAR_12 = 0;
 FUNC_5(&VAR_15->mutex);


 FUNC_3(VAR_15);
 VAR_16 = FUNC_7(VAR_15);
 if (VAR_16) {
  FUNC_0("cant i2c read: iif error\n");
  FUNC_6(&VAR_15->mutex);
  return (VAR_16);
 }
 FUNC_1(VAR_15, VAR_2);

 FUNC_0("Read ");
 while (*VAR_12 < VAR_11) {


  if (*VAR_12 == (VAR_11 - 1)) {
   VAR_17 = FUNC_1(VAR_15, VAR_1);
   VAR_17 &= ~(VAR_0);
   FUNC_2(VAR_15, VAR_1, VAR_17);
  }

  FUNC_3(VAR_15);

  VAR_16 = FUNC_7(VAR_15);
  if (VAR_16) {
   FUNC_0("cant i2c read: iif error\n");
   FUNC_6(&VAR_15->mutex);
   return (VAR_16);
  }

  VAR_18 = FUNC_1(VAR_15, VAR_2);
  FUNC_0("0x%02x ", VAR_18);
  *VAR_10++ = VAR_18;
  (*VAR_12)++;
 }
 FUNC_0("\n");

 FUNC_6(&VAR_15->mutex);
 return (VAR_7);
}
