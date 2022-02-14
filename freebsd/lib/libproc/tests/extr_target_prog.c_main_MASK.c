
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_5 ;

int
FUNC_6(int VAR_6, char **VAR_7)
{

 FUNC_0();

 if (VAR_6 == 1)
  return (VAR_1);
 if (VAR_6 == 2 && FUNC_5(VAR_7[1], "-s") == 0) {
  if (FUNC_4(VAR_2, VAR_5) == VAR_3)
   FUNC_1(1, "signal");
  if (FUNC_3(FUNC_2(), VAR_2) != 0)
   FUNC_1(1, "kill");
  return (VAR_4 == 1 ? VAR_1 : VAR_0);
 }
 return (VAR_0);
}
