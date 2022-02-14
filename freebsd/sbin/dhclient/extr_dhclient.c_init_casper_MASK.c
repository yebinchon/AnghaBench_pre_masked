
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_channel_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,char*) ;
 int * VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 cap_channel_t *VAR_1;

 VAR_1 = FUNC_1();
 if (VAR_1 == ((void*)0))
  FUNC_3("unable to start casper");

 VAR_0 = FUNC_2(VAR_1, "system.syslog");
 FUNC_0(VAR_1);
 if (VAR_0 == ((void*)0))
  FUNC_3("unable to open system.syslog service");
}
