
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (VAR_2)
  FUNC_0();
 FUNC_2("forking to background");
 VAR_1 = 0;
 if (FUNC_1(1, 1) < 0)
  FUNC_3("daemon() failed: %.200s", FUNC_4(VAR_0));
}
