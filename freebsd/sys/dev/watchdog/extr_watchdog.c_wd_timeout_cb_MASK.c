
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kdb_why ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(void *VAR_7)
{
 const char *VAR_8 = VAR_7;
 if ((VAR_6 & VAR_3))
  FUNC_2(VAR_1, "watchdog %s-timeout, WD_SOFT_LOG\n", VAR_8);
 if ((VAR_6 & VAR_5))
  FUNC_4("watchdog %s-timeout, WD_SOFT_PRINTF\n", VAR_8);
 if ((VAR_6 & VAR_4))
  FUNC_3("watchdog %s-timeout, WD_SOFT_PANIC set", VAR_8);
}
