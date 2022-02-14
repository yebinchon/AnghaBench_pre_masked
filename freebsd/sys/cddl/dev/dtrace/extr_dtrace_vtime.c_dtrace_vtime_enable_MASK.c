
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int dtrace_vtime_state_t ;






 int FUNC_0 (int *,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
 dtrace_vtime_state_t VAR_1, VAR_2 = 0;

 do {
  VAR_1 = VAR_0;

  switch (VAR_1) {
  case 129:
   VAR_2 = 131;
   break;

  case 128:
   VAR_2 = 130;
   break;

  case 131:
  case 130:
   FUNC_1("DTrace virtual time already enabled");

  }

 } while (FUNC_0((uint32_t *)&VAR_0,
     VAR_1, VAR_2) != VAR_1);
}
