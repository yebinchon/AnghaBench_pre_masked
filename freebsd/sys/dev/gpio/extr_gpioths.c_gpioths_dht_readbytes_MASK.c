
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint32_t ;
struct gpioths_softc {int fails; int temp; int hum; } ;
typedef int device_t ;
typedef int crc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gpioths_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7, device_t VAR_8)
{
 struct gpioths_softc *VAR_9;
 uint32_t VAR_10[VAR_0];
 uint32_t VAR_11[VAR_0];
 uint32_t VAR_12, VAR_13, VAR_14;
 uint8_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_9 = FUNC_2(VAR_8);

 VAR_12 = FUNC_4(VAR_7,VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_8, "gpioths_dht_initread error = %d\n", VAR_12);
  goto error;
 }

 VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_5, ((void*)0));
 if (VAR_12) {
  FUNC_3(VAR_8, "err(START) = %d\n", VAR_12);
  goto error;
 }


 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_4,
            &VAR_10[VAR_17]);
  if (VAR_12) {
   FUNC_3(VAR_8, "err(CAL, %d) = %d\n", VAR_17, VAR_12);
   goto error;
  }
  VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_5,
     &VAR_11[VAR_17]);
  if (VAR_12) {
   FUNC_3(VAR_8, "err(INTERVAL, %d) = %d\n", VAR_17, VAR_12);
   goto error;
  }
 }

 VAR_12 = FUNC_1(VAR_7, VAR_8, 0, VAR_6);
 if (VAR_12 != 0) {
  FUNC_3(VAR_8, "err(FINAL_SETFLAGS, OUT) = %d\n", VAR_12);
  goto error;
 }
 FUNC_0(1);


 VAR_13 = 0;
 for (VAR_17 = 1; VAR_17 < VAR_0; VAR_17++)
  VAR_13 += VAR_10[VAR_17];

 VAR_13 = VAR_13 / (VAR_0 - 1);


 VAR_14 = 0;
 VAR_18 = 1;
 VAR_19 = sizeof(VAR_14) * 8;
 for (VAR_17 = VAR_18; VAR_17 < VAR_19 + VAR_18; VAR_17++) {
  VAR_14 <<= 1;
  if (VAR_11[VAR_17] > VAR_13)
   VAR_14 += 1;
 }


 VAR_15 = 0;
 VAR_18 = sizeof(VAR_14) * 8 + 1;
 VAR_19 = sizeof(VAR_15) * 8;
 for (VAR_17 = VAR_18; VAR_17 < VAR_19 + VAR_18; VAR_17++) {
  VAR_15 <<= 1;
  if (VAR_11[VAR_17] > VAR_13)
   VAR_15 += 1;
 }

 VAR_16 = 0;
 for (VAR_17 = 0; VAR_17 < sizeof(VAR_14); VAR_17++)
  VAR_16 += (VAR_14 >> (8*VAR_17)) & VAR_2;
 if (VAR_16 != VAR_15) {
  VAR_12 = -1;
  goto error;
 }

 VAR_9->fails = 0;
 VAR_9->temp = (VAR_14 >> VAR_3) & VAR_2;
 VAR_9->hum = (VAR_14 >> VAR_1) & VAR_2;







 return (0);
error:
 VAR_9->fails++;
 return (VAR_12);
}
