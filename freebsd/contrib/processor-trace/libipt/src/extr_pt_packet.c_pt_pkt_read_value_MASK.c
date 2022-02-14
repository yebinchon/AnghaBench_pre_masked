
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(const uint8_t *VAR_0, int VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 for (VAR_2 = 0, VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  uint64_t VAR_4 = *VAR_0++;

  VAR_4 <<= (VAR_3 * 8);
  VAR_2 |= VAR_4;
 }

 return VAR_2;
}
