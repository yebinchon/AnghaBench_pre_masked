
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_1)
{
 uint32_t VAR_2;
 int VAR_3, VAR_4;


 for (VAR_4 = 127; VAR_4 >= 0; VAR_4--) {
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3 < 0)
   continue;
  VAR_2 = (VAR_3 << 16) | (VAR_4 << 4) | 1;
  FUNC_1(VAR_1, VAR_0, VAR_2);
 }
}
