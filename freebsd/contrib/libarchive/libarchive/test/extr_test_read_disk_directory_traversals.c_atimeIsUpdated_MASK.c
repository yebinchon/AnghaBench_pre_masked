
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_atime; } ;


 int FUNC_0 (char const*,int,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,int,int ,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(void)
{
 const char *VAR_0 = "fs_noatime";
 struct stat VAR_1;
 if (!FUNC_0(VAR_0, 0666, "a"))
  return (0);
 if (!FUNC_2(VAR_0, 1, 0, 1, 0))
  return (0);

 if (!FUNC_1("a", VAR_0))
  return (0);
 if (FUNC_6(VAR_0, &VAR_1) != 0)
  return (0);

 if (VAR_1.st_atime > 1)
  return (1);
 return (0);
}
