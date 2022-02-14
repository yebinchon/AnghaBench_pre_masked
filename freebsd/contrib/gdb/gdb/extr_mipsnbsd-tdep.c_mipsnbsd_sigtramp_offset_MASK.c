
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w ;
typedef int ret ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char*,char const*,int) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 char* VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static LONGEST
FUNC_2 (CORE_ADDR VAR_6)
{
  const char *VAR_7 = VAR_3 == VAR_0
   ? VAR_4 : VAR_5;
  unsigned char VAR_8[VAR_2], VAR_9[4];
  LONGEST VAR_10;
  int VAR_11;

  if (FUNC_1 (VAR_6, (char *) VAR_9, sizeof (VAR_9)) != 0)
    return -1;

  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
    {
      if (FUNC_0 (VAR_9, VAR_7 + (VAR_11 * 4), 4) == 0)
 break;
    }
  if (VAR_11 == VAR_1)
    return -1;

  VAR_10 = VAR_11 * 4;
  VAR_6 -= VAR_10;

  if (FUNC_1 (VAR_6, (char *) VAR_8, sizeof (VAR_8)) != 0)
    return -1;

  if (FUNC_0 (VAR_8, VAR_7, VAR_2) == 0)
    return VAR_10;

  return -1;
}
