
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (char**,scalar_t__*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_0, CORE_ADDR *VAR_1, int *VAR_2)
{
  char *VAR_3;
  LONGEST VAR_4;

  if (!VAR_0 || !*VAR_0 || !**VAR_0 || !VAR_1 || !VAR_2)
    return -1;
  VAR_3 = FUNC_1 (*VAR_0, '/');
  if (!VAR_3)
    return -1;
  *VAR_3++ = '\0';
  if (FUNC_0 (VAR_0, &VAR_4))
    return -1;
  *VAR_1 = (CORE_ADDR) VAR_4;
  *VAR_0 = VAR_3;
  if (FUNC_0 (VAR_0, &VAR_4))
    return -1;
  *VAR_2 = (int) VAR_4;
  return 0;
}
