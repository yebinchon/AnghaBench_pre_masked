
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 unsigned int FUNC_2 (char*,char**,int) ;

int
FUNC_3 (char *VAR_1)
{
  char *VAR_2, *VAR_3;

  if (!VAR_1[0])
    return -1;

  VAR_3 = "goli";
  VAR_2 = FUNC_1 (VAR_3, VAR_1[0]);
  if (VAR_2)
    {
      if (VAR_1[1] < '0' || VAR_1[1] > '8' || VAR_1[2])
 return -1;
      return (VAR_2 - VAR_3) * 8 + VAR_1[1] - '0';
    }
  if (VAR_1[0] == 's' && VAR_1[1] == 'p' && !VAR_1[2])
    return 14;
  if (VAR_1[0] == 'f' && VAR_1[1] == 'p' && !VAR_1[2])
    return 30;
  if (VAR_1[0] == 'f' || VAR_1[0] == 'r')
    {
      unsigned int VAR_4;

      VAR_4 = FUNC_2 (VAR_1 + 1, &VAR_3, 10);
      if (VAR_2 == VAR_3 || *VAR_3)
        return -1;
      if (VAR_4 >= ((VAR_1[0] == 'f'
        && FUNC_0 (VAR_0))
       ? 64 : 32))
 return -1;
      if (VAR_1[0] == 'f')
 {
          VAR_4 += 32;
          if (VAR_4 >= 64 && (VAR_4 & 1))
     return -1;
        }
      return VAR_4;
    }
  return -1;
}
