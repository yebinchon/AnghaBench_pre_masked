
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_2 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,void*,size_t*,int *,int ) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_3, void *VAR_4, const size_t VAR_5)
{
 size_t VAR_6 = VAR_5;
 FUNC_2("Querying sysctl variable: %s\n", VAR_3);
 int VAR_7 = FUNC_4(VAR_3, VAR_4, &VAR_6, ((void*)0), 0);
 if (VAR_7 == -1 && VAR_1 != VAR_0) {
  FUNC_1(VAR_2, "sysctlbyname(2) failed: %s\n",
      FUNC_3(VAR_1));
  FUNC_0("Failed to query %s", VAR_3);
 }
 return VAR_7 != -1;
}
