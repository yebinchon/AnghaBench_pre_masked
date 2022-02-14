
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (VAR_0 == 0)
    FUNC_0 ();

  if (!VAR_1)
    {
      VAR_1 = (char *) FUNC_1 (VAR_0 + 2);
      VAR_1[0] = '\0';
    }
  else
    VAR_1 = (char *) FUNC_2 (VAR_1, VAR_0 + 2);
  VAR_2 = VAR_1;
}
