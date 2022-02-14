
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (char *VAR_2, char **VAR_3, unsigned int *VAR_4)
{
  char *VAR_5 = *VAR_3;
  unsigned int VAR_6;
  unsigned int VAR_7;

  if (!FUNC_0 (*VAR_5))
    return VAR_0;

  VAR_7 = FUNC_1 (*VAR_5++);
  if (VAR_7 == 0)
    VAR_7 = 16;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    VAR_2[VAR_6] = VAR_5[VAR_6];
  VAR_2[VAR_6] = 0;
  *VAR_3 = VAR_5 + VAR_6;
  *VAR_4 = VAR_7;
  return VAR_1;
}
