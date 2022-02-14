
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int
FUNC_0(int VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{

 for (; VAR_1 < VAR_2; VAR_1++)
  VAR_0 += VAR_1[0];
 while (VAR_0 > 0xff)
  VAR_0 = (VAR_0 & 0xff) + (VAR_0 >> 8);
 return VAR_0;
}
