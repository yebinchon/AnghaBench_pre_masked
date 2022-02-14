
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char,int *) ;
 size_t VAR_2 ;

__attribute__((used)) static size_t
FUNC_1 (size_t VAR_3, size_t VAR_4)
{
  FILE *VAR_5 = VAR_1;
  size_t VAR_6;
  size_t VAR_7 = VAR_2;

  if (!VAR_0)
    for (VAR_6 = VAR_3 + VAR_7 - VAR_3 % VAR_7; VAR_6 <= VAR_4; VAR_6 += VAR_7)
      {
 FUNC_0 ('\t', VAR_5);
 VAR_3 = VAR_6;
      }
  while (VAR_3++ < VAR_4)
    FUNC_0 (' ', VAR_5);
  return VAR_4;
}
