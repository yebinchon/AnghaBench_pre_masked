
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 char* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_2 (bfd *VAR_0, char *VAR_1, size_t VAR_2)
{
  size_t VAR_3;
  char *VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    if (VAR_1[VAR_3] == '\0')
      break;

  if ((VAR_4 = FUNC_0 (VAR_0, (bfd_size_type) VAR_3 + 1)) == ((void*)0))
    return ((void*)0);

  FUNC_1 (VAR_4, VAR_1, VAR_3);
  VAR_4[VAR_3] = '\0';
  return VAR_4;
}
