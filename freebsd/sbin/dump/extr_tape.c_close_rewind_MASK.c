
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 () ;
 int VAR_3 ;

void
FUNC_6()
{
 time_t VAR_4, VAR_5;

 FUNC_5();
 if (VAR_0)
  return;
 (void)FUNC_4((time_t *)&(VAR_4));
 if (!VAR_1) {
  FUNC_2("Change Volumes: Mount volume #%d\n", VAR_2+1);
  FUNC_0("CHANGE DUMP VOLUMES!\a\a\n");
 }
 while (!FUNC_3("Is the new volume mounted and ready to go?"))
  if (FUNC_3("Do you want to abort?")) {
   FUNC_1(0);

  }
 (void)FUNC_4((time_t *)&(VAR_5));
 if ((VAR_4 != (time_t)-1) && (VAR_5 != (time_t)-1))
  VAR_3 += (VAR_5 - VAR_4);
}
