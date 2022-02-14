
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef int Unit ;
typedef int Int ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static Int
FUNC_0 (const Unit * VAR_2, Int VAR_3)
{
  const Unit *VAR_4 = VAR_2 + VAR_3 - 1;
  Int VAR_5 = VAR_3 * VAR_0;
  uInt const *VAR_6;

  for (; VAR_4 >= VAR_2; VAR_4--)
    {
      VAR_5 -= VAR_0;
      if (*VAR_4 == 0)
 {
   if (VAR_5 != 0)
     continue;

   VAR_5++;
   break;
 }

      VAR_5++;
      if (*VAR_4 < 10)
 break;
      VAR_5++;
      for (VAR_6 = &VAR_1[2]; *VAR_4 >= *VAR_6; VAR_6++)
 VAR_5++;
      break;
    }

  return VAR_5;
}
