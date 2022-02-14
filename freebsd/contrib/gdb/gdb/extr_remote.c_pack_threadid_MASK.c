
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_1, threadref *VAR_2)
{
  char *VAR_3;
  unsigned char *VAR_4;

  VAR_4 = (unsigned char *) VAR_2;
  VAR_3 = VAR_1 + VAR_0;
  while (VAR_1 < VAR_3)
    VAR_1 = FUNC_0 (VAR_1, *VAR_4++);
  return VAR_1;
}
