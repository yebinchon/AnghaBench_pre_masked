
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (long) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 unsigned long VAR_3;
 signed long VAR_4;

 if (FUNC_0())
  return;

 VAR_3 = VAR_1 + (VAR_2 * VAR_0) / 1000;
 for (;;) {
  VAR_4 = VAR_3 - VAR_1;
  if (VAR_4 <= 0)
   break;
  FUNC_1(VAR_4);
 }
}
