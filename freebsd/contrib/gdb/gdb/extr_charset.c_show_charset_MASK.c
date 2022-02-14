
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, int VAR_3)
{
  if (VAR_0 == VAR_1)
    {
      FUNC_1 ("The current host and target character set is `%s'.\n",
                       FUNC_0 ());
    }
  else
    {
      FUNC_1 ("The current host character set is `%s'.\n",
                       FUNC_0 ());
      FUNC_1 ("The current target character set is `%s'.\n",
                       FUNC_2 ());
    }
}
