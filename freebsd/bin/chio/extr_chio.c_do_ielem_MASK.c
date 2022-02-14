
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, int VAR_5, char **VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5 == 2) {
  VAR_7 = FUNC_0(VAR_6[1]);
 } else if (VAR_5 > 1) {
  FUNC_5("%s: too many arguments", VAR_4);
  goto usage;
 }

 if (FUNC_4(VAR_1, VAR_0, &VAR_7))
  FUNC_1(1, "%s: CHIOIELEM", VAR_2);

 return (0);

 usage:
 (void) FUNC_2(VAR_3, "usage: %s %s [<timeout>]\n",
         FUNC_3(), VAR_4);
 return (1);
}
