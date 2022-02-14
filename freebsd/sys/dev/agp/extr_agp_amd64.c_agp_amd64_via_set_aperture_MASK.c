
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = ((VAR_3 - 1) >> 20) ^ 0xff;
 if ((((VAR_4 ^ 0xff) << 20) | ((1 << 20) - 1)) + 1 != VAR_3)
  return (VAR_1);
 FUNC_0(0, 1, 0, VAR_0, VAR_4, 1);

 return (0);
}
