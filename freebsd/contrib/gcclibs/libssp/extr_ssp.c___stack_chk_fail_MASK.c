
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int ,char*) ;
 int FUNC_1 (char const*) ;

void
FUNC_2 (void)
{
  const char *VAR_0 = "*** stack smashing detected ***: ";
  FUNC_0 (VAR_0, FUNC_1 (VAR_0), "stack smashing detected: terminated");
}
