
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 unsigned long FUNC_4 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  char *VAR_6, *VAR_7;
  unsigned long VAR_8;

  VAR_6 = FUNC_0 ("OMP_SCHEDULE");
  if (VAR_6 == ((void*)0))
    return;

  while (FUNC_2 ((unsigned char) *VAR_6))
    ++VAR_6;
  if (FUNC_3 (VAR_6, "static", 6) == 0)
    {
      VAR_5 = VAR_2;
      VAR_6 += 6;
    }
  else if (FUNC_3 (VAR_6, "dynamic", 7) == 0)
    {
      VAR_5 = VAR_0;
      VAR_6 += 7;
    }
  else if (FUNC_3 (VAR_6, "guided", 6) == 0)
    {
      VAR_5 = VAR_1;
      VAR_6 += 6;
    }
  else
    goto unknown;

  while (FUNC_2 ((unsigned char) *VAR_6))
    ++VAR_6;
  if (*VAR_6 == '\0')
    return;
  if (*VAR_6++ != ',')
    goto unknown;
  while (FUNC_2 ((unsigned char) *VAR_6))
    ++VAR_6;
  if (*VAR_6 == '\0')
    goto invalid;

  VAR_3 = 0;
  VAR_8 = FUNC_4 (VAR_6, &VAR_7, 10);
  if (VAR_3)
    goto invalid;

  while (FUNC_2 ((unsigned char) *VAR_7))
    ++VAR_7;
  if (*VAR_7 != '\0')
    goto invalid;

  VAR_4 = VAR_8;
  return;

 unknown:
  FUNC_1 ("Unknown value for environment variable OMP_SCHEDULE");
  return;

 invalid:
  FUNC_1 ("Invalid value for chunk size in "
       "environment variable OMP_SCHEDULE");
  return;
}
