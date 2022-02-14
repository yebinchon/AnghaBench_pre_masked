
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*,char const*,char*,char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

const char *FUNC_2 (int VAR_0, const char **VAR_1)
{
  const char *VAR_2;
  bool VAR_3;

  if (VAR_0 < 1)
    return ((void*)0);

  VAR_3 = FUNC_1 (VAR_1[0], "arch") == 0;
  if (!VAR_3 && FUNC_1 (VAR_1[0], "tune"))
    return ((void*)0);

  if (VAR_3)
    {


      VAR_2 = "i386";
    }
  else
    VAR_2 = "generic";

  return FUNC_0 ("-m", VAR_1[0], "=", VAR_2, ((void*)0));
}
