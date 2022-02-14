
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ word ;



__attribute__((used)) static size_t
FUNC_0 (word const *VAR_0, word const *VAR_1)
{
  word const *VAR_2, *VAR_3;
  char const *VAR_4, *VAR_5;




  for (VAR_2 = VAR_0, VAR_3 = VAR_1; *VAR_2 == *VAR_3; VAR_2++, VAR_3++)
    continue;



  for (VAR_4 = (char const *) VAR_2, VAR_5 = (char const *) VAR_3;
       *VAR_4 == *VAR_5;
       VAR_4++, VAR_5++)
    continue;

  return VAR_4 - (char const *) VAR_0;
}
