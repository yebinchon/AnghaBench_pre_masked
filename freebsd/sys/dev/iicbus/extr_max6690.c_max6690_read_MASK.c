
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct iic_msg {int member_1; int member_2; int* member_3; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct iic_msg*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, uint32_t VAR_6, uint8_t VAR_7, uint8_t *VAR_8)
{
 uint8_t VAR_9[4];
 uint8_t VAR_10[1], VAR_11;
 int VAR_12, VAR_13 = 0;


 VAR_11 = VAR_3;

 struct iic_msg VAR_14[4] = {
     { VAR_6, VAR_2 | VAR_0, 1, VAR_11 },
     { VAR_6, VAR_1, 1, VAR_10 },
     { VAR_6, VAR_2 | VAR_0, 1, VAR_7 },
     { VAR_6, VAR_1, 1, VAR_9 },
 };

 for (;;)
 {
  VAR_12 = FUNC_1(VAR_5, VAR_14, 4);
  if (VAR_12 != 0)
   goto retry;
  if (VAR_10[0] & 0x80)
   goto retry;

  if (VAR_9[0] == 0xff)
   goto retry;

  *VAR_8 = *((uint8_t*)VAR_9);
  return (0);

 retry:
  if (++VAR_13 > 5) {
   FUNC_0(VAR_5, "iicbus read failed\n");
   return (-1);
  }
  FUNC_2("max6690_read", VAR_4);
 }
}
