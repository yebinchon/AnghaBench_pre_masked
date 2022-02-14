
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(void)
{
  int VAR_2;

top:
  VAR_2 = FUNC_1();

  if (VAR_2 < 0) {
    FUNC_2(1);
    goto top;
  }
  if (VAR_2 == 0) {
    FUNC_0();
    VAR_1 = 0;
  } else {
    VAR_0++;
  }

  return VAR_2;
}
