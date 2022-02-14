
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct iic_msg {int len; int * member_3; int member_2; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct iic_msg*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, uint8_t VAR_4, uint8_t *VAR_5, int VAR_6)
{
 uint8_t VAR_7[4];
 int VAR_8 = 0;

 struct iic_msg VAR_9[] = {
  { VAR_3, &VAR_0, 0, VAR_7 }
 };


 VAR_9[0].len = VAR_6 + 1;
 VAR_7[0] = VAR_4;
 FUNC_2(VAR_7 + 1, VAR_5, VAR_6);

 for (;;)
 {
  if (FUNC_1(VAR_2, VAR_9, 1) == 0)
   return (0);
  if (++VAR_8 > 5) {
   FUNC_0(VAR_2, "iicbus write failed\n");
   return (-1);
  }
  FUNC_3("ds1631_write", VAR_1);
 }
}
