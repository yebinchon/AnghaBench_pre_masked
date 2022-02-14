
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ulong_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t const) ;

ulong_t
FUNC_1(const ulong_t *VAR_2, ulong_t VAR_3)
{
 ulong_t VAR_4 = VAR_3 & VAR_0;
 ulong_t VAR_5 = VAR_3 >> VAR_1;
 ulong_t VAR_6, VAR_7 = 0;

 if (VAR_3 == 0)
  return (0);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_7 += FUNC_0(VAR_2[VAR_6]);

 return (VAR_7 + FUNC_0(VAR_2[VAR_5] & ((1UL << VAR_4) - 1)));
}
