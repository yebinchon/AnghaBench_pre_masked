
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockfdstr ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*,char*,char const*,char*,char const*,...) ;
 int FUNC_2 (char*,int,char*,int) ;

void
FUNC_3(int VAR_0, const char *VAR_1, const char* VAR_2)
{
 char VAR_3[10];

 if (FUNC_2(VAR_3, sizeof(VAR_3), "%d", VAR_0) == -1)
  FUNC_0(1, "snprintf");
 if (VAR_2 == ((void*)0))
  FUNC_1("mandocd", "mandocd", "-T", VAR_1,
      VAR_3, (char *)((void*)0));
 else
  FUNC_1("mandocd", "mandocd", "-T", VAR_1,
      "-I", VAR_2, VAR_3, (char *)((void*)0));
 FUNC_0(1, "exec");
}
