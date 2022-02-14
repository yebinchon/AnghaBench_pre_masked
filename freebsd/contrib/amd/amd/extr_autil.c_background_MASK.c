
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;

int
FUNC_2(void)
{
  int VAR_1 = FUNC_1();

  if (VAR_1 == 0) {
    FUNC_0("backgrounded");
    VAR_0 = 0;
  } else
    FUNC_0("forked process %d", VAR_1);
  return VAR_1;
}
