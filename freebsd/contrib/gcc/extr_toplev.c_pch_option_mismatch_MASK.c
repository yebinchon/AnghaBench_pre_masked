
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (char**,char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_2 (const char *VAR_0)
{
  char *VAR_1;

  FUNC_1 (&VAR_1, FUNC_0("created and used with differing settings of '%s'"), VAR_0);
  if (VAR_1 == ((void*)0))
    return FUNC_0("out of memory");
  return VAR_1;
}
