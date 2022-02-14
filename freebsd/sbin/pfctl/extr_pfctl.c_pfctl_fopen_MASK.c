
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;

FILE *
FUNC_5(const char *VAR_2, const char *VAR_3)
{
 struct stat VAR_4;
 FILE *VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 if (FUNC_4(FUNC_2(VAR_5), &VAR_4)) {
  FUNC_1(VAR_5);
  return (((void*)0));
 }
 if (FUNC_0(VAR_4.st_mode)) {
  FUNC_1(VAR_5);
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 return (VAR_5);
}
