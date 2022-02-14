
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,void const*,size_t) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;

void
FUNC_3(uint32_t *VAR_0,
 const void *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = VAR_3 - (VAR_3 >> 5);
 VAR_5 = (uint32_t)VAR_2 << 3;
 if (VAR_5 > VAR_4) {
  VAR_2 = (VAR_4 + 7) >> 3;
  VAR_6 = (int)((VAR_5 - VAR_4) & 7);
 } else {
  VAR_6 = 0;
 }
 FUNC_2(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_6);
 VAR_0[0] = VAR_3;
}
