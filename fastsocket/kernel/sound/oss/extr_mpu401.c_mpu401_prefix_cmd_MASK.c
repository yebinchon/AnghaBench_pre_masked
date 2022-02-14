
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {scalar_t__ uart_mode; } ;


 struct mpu_config* VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1, unsigned char VAR_2)
{
 struct mpu_config *VAR_3 = &VAR_0[VAR_1];

 if (VAR_3->uart_mode)
  return 1;

 if (VAR_2 < 0xf0)
 {
  if (FUNC_0(VAR_1, 0xD0, 0) < 0)
   return 0;
  return 1;
 }
 switch (VAR_2)
 {
  case 0xF0:
   if (FUNC_0(VAR_1, 0xDF, 0) < 0)
    return 0;
   return 1;

  default:
   return 0;
 }
}
