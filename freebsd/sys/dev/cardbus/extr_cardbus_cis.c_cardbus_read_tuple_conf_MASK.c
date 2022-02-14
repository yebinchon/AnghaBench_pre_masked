
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, device_t VAR_1, uint32_t VAR_2,
    uint32_t *VAR_3, int *VAR_4, int *VAR_5, uint8_t *VAR_6)
{
 int VAR_7, VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_10 = VAR_2 + *VAR_3;

 VAR_9 = FUNC_0(VAR_1, VAR_10 & ~0x3, 4);
 VAR_9 >>= 8 * (VAR_10 & 0x3);
 *VAR_5 = 0;
 for (VAR_7 = VAR_10, VAR_8 = -2; VAR_8 < *VAR_5; VAR_8++, VAR_7++) {
  if ((VAR_7 & 0x3) == 0)
   VAR_9 = FUNC_0(VAR_1, VAR_7, 4);
  if (VAR_8 == -2)
   *VAR_4 = 0xff & VAR_9;
  else if (VAR_8 == -1)
   *VAR_5 = 0xff & VAR_9;
  else
   VAR_6[VAR_8] = 0xff & VAR_9;
  VAR_9 >>= 8;
 }
 *VAR_3 += *VAR_5 + 2;
 return (0);
}
