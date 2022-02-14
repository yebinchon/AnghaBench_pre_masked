
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef size_t ssize_t ;
typedef int buff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,char*,char const*) ;
 int FUNC_4 (char const*,struct stat*) ;
 size_t FUNC_5 (char const*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 char VAR_4[300];
 struct stat VAR_5;
 ssize_t VAR_6;
 int VAR_7;

 FUNC_1(VAR_0, VAR_1);
 VAR_7 = FUNC_4(VAR_2, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_3(VAR_0, VAR_1,
      "Symlink should exist: %s", VAR_2);
  FUNC_2(((void*)0));
  return (0);
 }
 if (!FUNC_0(VAR_5.st_mode))
  return (0);
 if (VAR_3 == ((void*)0))
  return (1);
 VAR_6 = FUNC_5(VAR_2, VAR_4, sizeof(VAR_4));
 if (VAR_6 < 0) {
  FUNC_3(VAR_0, VAR_1, "Can't read symlink %s", VAR_2);
  FUNC_2(((void*)0));
  return (0);
 }
 VAR_4[VAR_6] = '\0';
 if (FUNC_6(VAR_4, VAR_3) != 0)
  return (0);
 return (1);

}
