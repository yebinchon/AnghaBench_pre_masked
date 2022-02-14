
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_2;
  while ((VAR_2 = FUNC_2 ()) != '\n' && VAR_2 != VAR_0)
    continue;
  if (FUNC_1 (VAR_1))
    FUNC_3 (FUNC_0("read failed"));
}
