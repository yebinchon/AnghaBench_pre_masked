
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_2 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_2();
 FUNC_5("Unloading module %s\n", VAR_3);
 VAR_1 = VAR_5 = 0;

 if (FUNC_4(VAR_0, FUNC_0(VAR_3)) == -1) {
  VAR_5 = VAR_1;
  FUNC_3(VAR_2, "modctl(MODCTL_UNLOAD, %s) failed: %s\n",
      VAR_3, FUNC_6(VAR_5));
  if (VAR_4)
   FUNC_1("Module unload failed");
 }
 return VAR_5;
}
