
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct i2c_softc*,int ) ;
 int VAR_11 ;
 int FUNC_3 (struct i2c_softc*,int ,int) ;
 struct i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct i2c_softc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i2c_softc*) ;
 int FUNC_9 (struct i2c_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_12, u_char VAR_13, int VAR_14)
{
 struct i2c_softc *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_15 = FUNC_4(VAR_12);

 FUNC_1("i2c start\n");

 FUNC_6(&VAR_15->mutex);






 if (VAR_13 & 1) {
  VAR_13 &= ~(1);
  VAR_13 <<= 1;
  VAR_13 |= 1;
 } else {
  VAR_13 <<= 1;
 }

 VAR_16 = FUNC_9(VAR_15);
 if (VAR_16) {
  FUNC_7(&VAR_15->mutex);
  FUNC_1("cant i2c start: IIC_EBUSERR\n");
  return (VAR_7);
 }

 VAR_17 = FUNC_2(VAR_15, VAR_1);
 VAR_17 |= (VAR_10 | VAR_0);
 FUNC_3(VAR_15, VAR_1, VAR_17);

 FUNC_3(VAR_15, VAR_2, VAR_13);
 FUNC_0(50);

 VAR_17 = (VAR_11);
 VAR_17 |= VAR_6;
 VAR_17 |= (VAR_3 << VAR_4);
 FUNC_3(VAR_15, VAR_5, VAR_17);

 VAR_16 = FUNC_8(VAR_15);
 if (VAR_16) {
  FUNC_1("cant i2c start: iif error\n");

  FUNC_7(&VAR_15->mutex);
  return (VAR_16);
 }

 if (!FUNC_5(VAR_15)) {
  FUNC_1("cant i2c start: no ack\n");

  FUNC_7(&VAR_15->mutex);
  return (VAR_8);
 }

 FUNC_7(&VAR_15->mutex);
 return (VAR_9);
}
