
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1)
{
 FILE *VAR_2;
 int VAR_3;

 FUNC_4("Validating contents of pidfile '%s'\n", VAR_1);

 if ((VAR_2 = FUNC_1(VAR_1, "r")) == ((void*)0))
  FUNC_0(VAR_0, "Cannot open expected pidfile '%s'", VAR_1);

 if (FUNC_2(VAR_2, "%d", &VAR_3) == -1)
  FUNC_0(VAR_0, "Failed to read pid from pidfile '%s'",
      VAR_1);

 FUNC_4("Read pid %d, current pid %d\n", VAR_3, FUNC_3());
 if (VAR_3 != FUNC_3())
  FUNC_0(VAR_0, "Pid in pidfile (%d) does not match "
      "current pid (%d)", VAR_3, FUNC_3());
}
