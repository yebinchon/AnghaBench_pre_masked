
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2)
{
 struct stat VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_5 = VAR_0;
 if (*VAR_2 == '/')
  FUNC_0(&VAR_4, "%s", VAR_2);
 else
  FUNC_0(&VAR_4, "/dev/%s", VAR_2);
 if (VAR_4 != ((void*)0) && FUNC_2(VAR_4, &VAR_3) == 0)
  VAR_5 |= VAR_1;
 FUNC_1(VAR_4);
 return (VAR_5);
}
