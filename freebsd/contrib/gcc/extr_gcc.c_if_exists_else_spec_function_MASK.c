
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static const char *
FUNC_2 (int VAR_1, const char **VAR_2)
{

  if (VAR_1 != 2)
    return ((void*)0);

  if (FUNC_0 (VAR_2[0]) && ! FUNC_1 (VAR_2[0], VAR_0))
    return VAR_2[0];

  return VAR_2[1];
}
