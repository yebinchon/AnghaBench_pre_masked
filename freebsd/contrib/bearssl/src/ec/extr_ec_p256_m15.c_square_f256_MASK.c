
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int const*) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 uint32_t VAR_2[40], VAR_3;
 int VAR_4;




 FUNC_2(VAR_2, VAR_1);
 for (VAR_4 = 39; VAR_4 >= 20; VAR_4 --) {
  uint32_t VAR_5;

  VAR_5 = VAR_2[VAR_4];
  VAR_2[VAR_4 - 2] += FUNC_0(VAR_5, 6);
  VAR_2[VAR_4 - 3] += (VAR_5 << 7) & 0x1FFF;
  VAR_2[VAR_4 - 4] -= FUNC_0(VAR_5, 12);
  VAR_2[VAR_4 - 5] -= (VAR_5 << 1) & 0x1FFF;
  VAR_2[VAR_4 - 12] -= FUNC_0(VAR_5, 4);
  VAR_2[VAR_4 - 13] -= (VAR_5 << 9) & 0x1FFF;
  VAR_2[VAR_4 - 19] += FUNC_0(VAR_5, 9);
  VAR_2[VAR_4 - 20] += (VAR_5 << 4) & 0x1FFF;
 }
 VAR_3 = FUNC_1(VAR_2, VAR_2, 20);







 VAR_3 = (VAR_3 << 4) | (VAR_2[19] >> 9);
 VAR_2[19] &= 0x01FF;
 VAR_2[17] += VAR_3 << 3;
 VAR_2[14] -= VAR_3 << 10;
 VAR_2[7] -= VAR_3 << 5;
 VAR_2[0] += VAR_3;
 VAR_3 >>= 31;
 VAR_2[0] -= VAR_3;
 VAR_2[7] += VAR_3 << 5;
 VAR_2[14] += VAR_3 << 10;
 VAR_2[17] -= VAR_3 << 3;
 VAR_2[19] += VAR_3 << 9;

 FUNC_1(VAR_0, VAR_2, 20);
}
