
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(platform_t VAR_3)
{




 if (FUNC_6() == VAR_0)
  FUNC_7("Unsupported SoC family\n");

 if (FUNC_10() != 0)
  FUNC_9("WARNING: could not re-initialise decode windows! "
      "Running with existing settings...\n");


 FUNC_0(FUNC_5() / 2);
 FUNC_8(VAR_1, VAR_2);


 if (FUNC_4() != 0)
  FUNC_9("WARNING: could not map CPU Subsystem registers\n");
 if (FUNC_1() != 0)
  FUNC_9("WARNING: could not enable mbus optimization\n");
 if (FUNC_3() != 0)
  FUNC_9("WARNING: could not enable SCU\n");





}
