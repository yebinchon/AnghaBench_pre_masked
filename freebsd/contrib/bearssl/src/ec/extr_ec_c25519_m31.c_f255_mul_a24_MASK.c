
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 int VAR_2;
 uint64_t VAR_3;
 uint32_t VAR_4;







 VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2 ++) {
  VAR_3 = FUNC_1(VAR_1[VAR_2], 121665) + (uint64_t)VAR_4;
  VAR_0[VAR_2] = (uint32_t)VAR_3 & 0x3FFFFFFF;
  VAR_4 = (uint32_t)(VAR_3 >> 30);
 }
 VAR_3 = FUNC_1(VAR_1[8], 121665) + (uint64_t)VAR_4;
 VAR_0[8] = (uint32_t)VAR_3 & 0x7FFF;
 VAR_4 = FUNC_0((uint32_t)(VAR_3 >> 15), 19);

 for (VAR_2 = 0; VAR_2 < 9; VAR_2 ++) {
  uint32_t VAR_5;

  VAR_5 = VAR_0[VAR_2] + VAR_4;
  VAR_0[VAR_2] = VAR_5 & 0x3FFFFFFF;
  VAR_4 = VAR_5 >> 30;
 }
}
