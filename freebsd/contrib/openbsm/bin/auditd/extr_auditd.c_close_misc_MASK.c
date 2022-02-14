
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void)
{

 FUNC_0();
 if (FUNC_4(VAR_0) == -1 && VAR_2 != VAR_1) {
  FUNC_2("Couldn't remove %s: %m", VAR_0);
  return (1);
 }
 FUNC_3();

 if (FUNC_1() != 0) {
  FUNC_2("Error closing trigger messaging mechanism");
  return (1);
 }
 return (0);
}
