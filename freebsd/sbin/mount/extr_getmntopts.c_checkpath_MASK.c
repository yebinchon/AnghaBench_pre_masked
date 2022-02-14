
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

int
FUNC_3(const char *VAR_2, char *VAR_3)
{
 struct stat VAR_4;

 if (FUNC_1(VAR_2, VAR_3) == ((void*)0) || FUNC_2(VAR_3, &VAR_4) != 0)
  return (1);
 if (!FUNC_0(VAR_4.st_mode)) {
  VAR_1 = VAR_0;
  return (1);
 }
 return (0);
}
