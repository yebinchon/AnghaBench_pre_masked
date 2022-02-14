
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (!VAR_1 && FUNC_1(VAR_0) != 0)
  FUNC_0("failed to snap aggregate");

 if (FUNC_2(VAR_0) == -1)
  FUNC_0("dtrace_status()");
}
