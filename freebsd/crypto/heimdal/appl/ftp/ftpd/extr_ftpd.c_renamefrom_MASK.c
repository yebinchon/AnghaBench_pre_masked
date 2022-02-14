
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

char *
FUNC_3(char *VAR_0)
{
 struct stat VAR_1;

 if (FUNC_2(VAR_0, &VAR_1) < 0) {
  FUNC_0(550, VAR_0);
  return ((void*)0);
 }
 FUNC_1(350, "File exists, ready for destination name");
 return (VAR_0);
}
