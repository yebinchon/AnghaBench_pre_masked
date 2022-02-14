
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5 (const char *VAR_0)
{
  char *VAR_1;

  FUNC_2 ("%s", FUNC_0(VAR_0));
  VAR_1 = FUNC_3 ((char *) FUNC_1 (FUNC_4 () + 1));
  if (*VAR_1)
    FUNC_2 ("(near initialization for %qs)", VAR_1);
}
