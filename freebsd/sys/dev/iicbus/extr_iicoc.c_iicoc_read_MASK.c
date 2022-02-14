
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, char *VAR_5, int VAR_6, int *VAR_7, int VAR_8,
    int VAR_9)
{
 int VAR_10, VAR_11;
 uint8_t VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  VAR_12 = (VAR_11 == VAR_6 - 1) ? VAR_2 : VAR_3;
  VAR_10 = FUNC_1(VAR_4, VAR_12);
  if (VAR_10 < 0) {
   FUNC_0(VAR_4,
       "I2C read data byte %d failed.\n", VAR_11);
   goto i2c_rx_error;
  }
  VAR_5[VAR_11] = (uint8_t)VAR_10;
 }

 *VAR_7 = VAR_6;
 return (VAR_1);

i2c_rx_error:
 return (VAR_0);
}
