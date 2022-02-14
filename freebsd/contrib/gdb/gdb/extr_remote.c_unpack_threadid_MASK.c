
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_1, threadref *VAR_2)
{
  char *VAR_3;
  char *VAR_4 = VAR_1 + VAR_0;
  int VAR_5, VAR_6;

  VAR_3 = (char *) VAR_2;

  while (VAR_1 < VAR_4)
    {
      VAR_5 = FUNC_0 (*VAR_1++);
      VAR_6 = FUNC_0 (*VAR_1++);
      *VAR_3++ = (VAR_5 << 4) | VAR_6;
    }
  return VAR_1;
}
