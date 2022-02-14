
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, u_int VAR_1, u_int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 uint8_t VAR_5;

 while (((VAR_5 = FUNC_2(VAR_0, 0)) & (VAR_1 | VAR_2)) != VAR_1) {
  if (VAR_4 >= VAR_3) {
   if (VAR_3 != 0)
    FUNC_1(VAR_0, "Wait status %02x\n", VAR_5);
   return (-1);
  }
  FUNC_0(1000);
  VAR_4++;
 }
 return (VAR_4);
}
