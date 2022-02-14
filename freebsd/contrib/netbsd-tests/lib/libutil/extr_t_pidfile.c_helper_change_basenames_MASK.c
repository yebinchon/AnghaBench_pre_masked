
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_5(((void*)0));
 if (FUNC_6(((void*)0)) == -1)
  FUNC_2(VAR_0, "Failed to create pidfile with default "
      "basename");
 FUNC_0(VAR_3);
 if (FUNC_6(((void*)0)) == -1)
  FUNC_2(VAR_0, "Failed to recreate pidfile with default "
      "basename");
 FUNC_0(VAR_3);

 VAR_4 = FUNC_5("custom-basename");
 if (FUNC_6("custom-basename") == -1)
  FUNC_2(VAR_0, "Failed to create pidfile with custom "
      "basename");
 FUNC_1(VAR_3);
 FUNC_0(VAR_4);
 if (FUNC_6("custom-basename") == -1)
  FUNC_2(VAR_0, "Failed to recreate pidfile with custom "
      "basename");
 FUNC_0(VAR_4);

 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
 FUNC_3(VAR_1);
}
