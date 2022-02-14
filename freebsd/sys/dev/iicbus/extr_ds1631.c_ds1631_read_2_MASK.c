
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iic_msg {int member_2; int * member_3; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct iic_msg*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t VAR_4, uint8_t VAR_5, uint16_t *VAR_6)
{
 uint8_t VAR_7[4];
 int VAR_8, VAR_9 = 0;

 struct iic_msg VAR_10[2] = {
  { VAR_4, &VAR_1, 1, VAR_5 },
  { VAR_4, &VAR_0, 2, VAR_7 },
 };

 for (;;)
 {
  VAR_8 = FUNC_1(VAR_3, VAR_10, 2);
  if (VAR_8 != 0)
   goto retry;

  *VAR_6 = *((uint16_t*)VAR_7);
  return (0);
 retry:
  if (++VAR_9 > 5) {
   FUNC_0(VAR_3, "iicbus read failed\n");
   return (-1);
  }
  FUNC_2("ds1631_read_2", VAR_2);
 }
}
