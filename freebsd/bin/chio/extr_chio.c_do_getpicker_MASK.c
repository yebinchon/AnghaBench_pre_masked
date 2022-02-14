
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, int VAR_5, char **VAR_6)
{
 int VAR_7;



 ++VAR_6; --VAR_5;

 if (VAR_5) {
  FUNC_5("%s: no arguments expected", VAR_4);
  goto usage;
 }


 if (FUNC_3(VAR_1, VAR_0, &VAR_7))
  FUNC_0(1, "%s: CHIOGPICKER", VAR_2);

 (void) FUNC_4("%s: current picker: %d\n", VAR_2, VAR_7);

 return (0);

 usage:
 (void) FUNC_1(VAR_3, "usage: %s %s\n", FUNC_2(), VAR_4);
 return (1);
}
