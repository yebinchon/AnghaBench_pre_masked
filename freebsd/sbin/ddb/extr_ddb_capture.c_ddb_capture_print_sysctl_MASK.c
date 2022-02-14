
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 size_t VAR_4, VAR_5;
 char *VAR_6;
 int VAR_7;

repeat:
 if (FUNC_5(VAR_2, ((void*)0), &VAR_4, ((void*)0), 0) < 0)
  FUNC_1(VAR_1, "sysctl: %s", VAR_2);
 if (VAR_4 == 0)
  return;
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == ((void*)0))
  FUNC_1(VAR_1, "malloc");
 FUNC_0(VAR_6, VAR_4);
 VAR_5 = VAR_4;
 VAR_7 = FUNC_5(VAR_2, VAR_6, &VAR_5, ((void*)0), 0);
 if (VAR_7 < 0 && VAR_3 != VAR_0)
  FUNC_1(VAR_1, "sysctl: %s", VAR_2);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  goto repeat;
 }

 FUNC_4("%s\n", VAR_6);
 FUNC_2(VAR_6);
}
