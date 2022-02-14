
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6 (void)
{
  int VAR_1;
  for (;;)
    {
      VAR_1 = FUNC_3 ();
      if (! FUNC_4 (VAR_1) || VAR_1 == '\n')
 break;
      FUNC_1 ();
    }
  if (FUNC_2 (VAR_0))
    FUNC_5 (FUNC_0("read failed"));
  return VAR_1;
}
