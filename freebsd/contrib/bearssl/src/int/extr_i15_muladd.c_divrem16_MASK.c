
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint32_t *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 VAR_4 = 0;
 VAR_1 <<= 16;
 for (VAR_3 = 16; VAR_3 >= 0; VAR_3 --) {
  uint32_t VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_0);
  VAR_4 |= VAR_5 << VAR_3;
  VAR_0 -= (-VAR_5) & VAR_1;
  VAR_1 >>= 1;
 }
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_0;
 }
 return VAR_4;
}
