
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iic_msg {int member_1; int member_2; int * member_3; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct iic_msg*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, uint32_t VAR_5, uint8_t VAR_6, uint16_t *VAR_7)
{
 uint8_t VAR_8[4];
 int VAR_9, VAR_10 = 0;

 struct iic_msg VAR_11[2] = {
     { VAR_5, VAR_2 | VAR_0, 1, VAR_6 },
     { VAR_5, VAR_1, 2, VAR_8 },
 };

 for (;;)
 {
  VAR_9 = FUNC_1(VAR_4, VAR_11, 2);
  if (VAR_9 != 0)
   goto retry;

  *VAR_7 = *((uint16_t*)VAR_8);
  return (0);
 retry:
  if (++VAR_10 > 5) {
   FUNC_0(VAR_4, "iicbus read failed\n");
   return (-1);
  }
  FUNC_2("ad7417_read_2", VAR_3);
 }
}
