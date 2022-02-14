
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,char,int ) ;
 scalar_t__ FUNC_2 (int ,char,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, const char *VAR_4, int VAR_5,
    int *VAR_6, int VAR_7 )
{
 uint8_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_4[0];

 if (FUNC_1(VAR_3, VAR_8, VAR_2)) {
  FUNC_0(VAR_3, "I2C write slave offset failed.\n");
  goto i2c_tx_error;
 }

 for (VAR_9 = 1; VAR_9 < VAR_5; VAR_9++) {

  VAR_8 = VAR_4[VAR_9];
  if (FUNC_2(VAR_3, VAR_8, VAR_2)) {
   FUNC_0(VAR_3, "I2C write data byte %d failed.\n",
       VAR_9);
   goto i2c_tx_error;
  }
 }
 *VAR_6 = VAR_5;
 return (VAR_1);

i2c_tx_error:
 return (VAR_0);
}
