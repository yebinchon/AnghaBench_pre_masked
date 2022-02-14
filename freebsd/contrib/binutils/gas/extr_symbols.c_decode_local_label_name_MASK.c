
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char VAR_1 ;
 char VAR_2 ;
 char* FUNC_1 (char*) ;
 int VAR_3 ;
 char* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,char const*,int,int,char*) ;
 scalar_t__ FUNC_4 (char const*) ;

char *
FUNC_5 (char *VAR_4)
{
  char *VAR_5;
  char *VAR_6;
  int VAR_7;
  int VAR_8;
  char *VAR_9;
  const char *VAR_10;
  int VAR_11 = 0;






  if (VAR_4[VAR_11] != 'L')
    return VAR_4;

  for (VAR_7 = 0, VAR_5 = VAR_4 + VAR_11 + 1; FUNC_0 (*VAR_5); ++VAR_5)
    VAR_7 = (10 * VAR_7) + *VAR_5 - '0';

  if (*VAR_5 == VAR_0)
    VAR_9 = "dollar";
  else if (*VAR_5 == VAR_1)
    VAR_9 = "fb";
  else
    return VAR_4;

  for (VAR_8 = 0, VAR_5++; FUNC_0 (*VAR_5); ++VAR_5)
    VAR_8 = (10 * VAR_8) + *VAR_5 - '0';

  VAR_10 = FUNC_1("\"%d\" (instance number %d of a %s label)");
  VAR_6 = FUNC_2 (&VAR_3, FUNC_4 (VAR_10) + 30);
  FUNC_3 (VAR_6, VAR_10, VAR_7, VAR_8, VAR_9);

  return VAR_6;
}
