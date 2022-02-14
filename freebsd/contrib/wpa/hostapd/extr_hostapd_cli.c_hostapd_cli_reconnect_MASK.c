
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_5)
{
 char *VAR_6;

 FUNC_0();

 if (!VAR_5)
  return -1;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_2(VAR_2);
 VAR_2 = VAR_6;
 if (!VAR_2)
  return -1;

 VAR_1 = FUNC_1(VAR_2);
 if (!VAR_1)
  return -1;
 if (!VAR_4 && !VAR_0)
  return 0;
 if (FUNC_7(VAR_1) == 0) {
  VAR_3 = 1;
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
 } else {
  FUNC_4("Warning: Failed to attach to hostapd.\n");
 }
 return 0;
}
