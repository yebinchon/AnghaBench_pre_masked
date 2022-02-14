
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;

char *
FUNC_3(char *VAR_2)
{
 struct stat VAR_3;

 if (VAR_0 && VAR_1) {
  FUNC_2(550, "Operation not permitted.");
  return (((void*)0));
 }
 if (FUNC_0(VAR_2, &VAR_3) < 0) {
  FUNC_1(550, VAR_2);
  return (((void*)0));
 }
 FUNC_2(350, "File exists, ready for destination name.");
 return (VAR_2);
}
