
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 int VAR_3;

 if (VAR_2 == 0)
  return;
 VAR_3 = (VAR_2 * VAR_1 + 999999) / 1000000;

 if (VAR_0 || VAR_3 < 2)
  FUNC_0(VAR_2);
 else
  FUNC_1("REGULATOR", VAR_3);
}
