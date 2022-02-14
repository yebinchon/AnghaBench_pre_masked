
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int sb ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char const*,char*) ;
 scalar_t__ FUNC_3 (struct stat*,struct stat*,int) ;
 int FUNC_4 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, struct stat *VAR_2)
{
 char VAR_3[VAR_0];
 struct stat VAR_4;
 static int VAR_5 = 1;

 FUNC_2(VAR_3, sizeof(VAR_3), VAR_1, "file");
 if (FUNC_4(VAR_3, &VAR_4) == -1)
  FUNC_1("cannot stat file %d (%s)", VAR_5, VAR_3);
 if (FUNC_3(&VAR_4, VAR_2, sizeof(VAR_4)) != 0)
  FUNC_0("stat mismatch %d", VAR_5);
 VAR_5++;
}
