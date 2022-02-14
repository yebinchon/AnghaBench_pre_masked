
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,char const*,int) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1)
{
  if (FUNC_0 () == VAR_0)
    {
      FUNC_4 (2, "mf: erroneous reentrancy detected in `", 38);
      FUNC_4 (2, VAR_1, FUNC_3(VAR_1));
      FUNC_4 (2, "'\n", 2); FUNC_2 ();

    }
  FUNC_1 (VAR_0);
}
