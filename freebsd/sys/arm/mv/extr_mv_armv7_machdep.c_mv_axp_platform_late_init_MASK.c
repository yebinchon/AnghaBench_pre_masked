
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(platform_t VAR_0)
{
 phandle_t VAR_1;



 if (FUNC_4() != 0)
  FUNC_3("WARNING: could not re-initialise decode windows! "
      "Running with existing settings...\n");
 if ((VAR_1 = FUNC_0("/")) == -1)
  return;



 FUNC_1();

 FUNC_2();
}
