
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_6, int VAR_7)
{
  if (VAR_4 == VAR_3)
    FUNC_2 ("The current OS ABI is \"auto\" (currently \"%s\").\n",
       FUNC_1 (FUNC_0 (VAR_2)));
  else
    FUNC_2 ("The current OS ABI is \"%s\".\n",
       FUNC_1 (VAR_5));

  if (VAR_0 != VAR_1)
    FUNC_2 ("The default OS ABI is \"%s\".\n",
       FUNC_1 (VAR_0));
}
