
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int,int) ;

uint32_t
FUNC_3(uint32_t *VAR_0, size_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = 0;
 VAR_3 = 0;
 while (VAR_1 -- > 0) {
  uint32_t VAR_4, VAR_5;

  VAR_5 = FUNC_1(VAR_2, 0);
  VAR_4 = VAR_0[VAR_1];
  VAR_2 = FUNC_2(VAR_5, VAR_4, VAR_2);
  VAR_3 = FUNC_2(VAR_5, (uint32_t)VAR_1, VAR_3);
 }
 return (VAR_3 << 5) + FUNC_0(VAR_2);
}
