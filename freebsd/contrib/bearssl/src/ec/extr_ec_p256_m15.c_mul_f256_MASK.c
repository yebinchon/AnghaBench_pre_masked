
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*,int const*,int const*) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3[40], VAR_4;
 int VAR_5;





 FUNC_1(VAR_3, VAR_1, VAR_2);
 for (VAR_5 = 39; VAR_5 >= 20; VAR_5 --) {
  uint32_t VAR_6;

  VAR_6 = VAR_3[VAR_5];
  VAR_3[VAR_5 - 2] += FUNC_0(VAR_6, 6);
  VAR_3[VAR_5 - 3] += (VAR_6 << 7) & 0x1FFF;
  VAR_3[VAR_5 - 4] -= FUNC_0(VAR_6, 12);
  VAR_3[VAR_5 - 5] -= (VAR_6 << 1) & 0x1FFF;
  VAR_3[VAR_5 - 12] -= FUNC_0(VAR_6, 4);
  VAR_3[VAR_5 - 13] -= (VAR_6 << 9) & 0x1FFF;
  VAR_3[VAR_5 - 19] += FUNC_0(VAR_6, 9);
  VAR_3[VAR_5 - 20] += (VAR_6 << 4) & 0x1FFF;
 }
 VAR_4 = FUNC_2(VAR_3, VAR_3, 20);







 VAR_4 = (VAR_4 << 4) | (VAR_3[19] >> 9);
 VAR_3[19] &= 0x01FF;
 VAR_3[17] += VAR_4 << 3;
 VAR_3[14] -= VAR_4 << 10;
 VAR_3[7] -= VAR_4 << 5;
 VAR_3[0] += VAR_4;
 VAR_4 >>= 31;
 VAR_3[0] -= VAR_4;
 VAR_3[7] += VAR_4 << 5;
 VAR_3[14] += VAR_4 << 10;
 VAR_3[17] -= VAR_4 << 3;
 VAR_3[19] += VAR_4 << 9;

 FUNC_2(VAR_0, VAR_3, 20);
}
