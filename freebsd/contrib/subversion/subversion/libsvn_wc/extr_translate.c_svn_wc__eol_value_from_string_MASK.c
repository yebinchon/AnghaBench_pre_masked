
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

void
FUNC_1(const char **VAR_0, const char *VAR_1)
{
  if (VAR_1 == ((void*)0))
    *VAR_0 = ((void*)0);
  else if (! FUNC_0("\n", VAR_1))
    *VAR_0 = "LF";
  else if (! FUNC_0("\r", VAR_1))
    *VAR_0 = "CR";
  else if (! FUNC_0("\r\n", VAR_1))
    *VAR_0 = "CRLF";
  else
    *VAR_0 = ((void*)0);
}
