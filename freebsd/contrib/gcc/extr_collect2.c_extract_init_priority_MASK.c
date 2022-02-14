
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_1)
{
  int VAR_2 = 0, VAR_3;

  while (VAR_1[VAR_2] == '_')
    ++VAR_2;
  VAR_2 += 10;


  VAR_3 = FUNC_0 (VAR_1 + VAR_2);
  return VAR_3 ? VAR_3 : VAR_0;
}
