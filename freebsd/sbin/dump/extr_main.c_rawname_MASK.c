
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;

char *
FUNC_1(char *VAR_2)
{
 struct stat VAR_3;




 if (FUNC_0(VAR_2, &VAR_3) == 0 && (VAR_3.st_mode & VAR_1) == VAR_0)
  return (VAR_2);





 return (((void*)0));
}
