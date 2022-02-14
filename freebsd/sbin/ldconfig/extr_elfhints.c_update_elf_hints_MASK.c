
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*) ;

void
FUNC_7(const char *VAR_0, int VAR_1, char **VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  FUNC_3(VAR_0, 0);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct stat VAR_5;

  if (FUNC_4(VAR_2[VAR_4], &VAR_5) == -1)
   FUNC_5("warning: %s", VAR_2[VAR_4]);
  else if (FUNC_0(VAR_5.st_mode))
   FUNC_2(VAR_0, VAR_2[VAR_4]);
  else
   FUNC_1(VAR_0, VAR_2[VAR_4], 0);
 }
 FUNC_6(VAR_0);
}
