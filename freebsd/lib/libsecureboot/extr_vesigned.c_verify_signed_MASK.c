
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char** VAR_1 ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 unsigned char* FUNC_5 (char*,int) ;
 unsigned char* FUNC_6 (char*,int) ;

unsigned char *
FUNC_7(const char *VAR_2, int VAR_3)
{
 struct stat VAR_4;
 char VAR_5[VAR_0];
 const char **VAR_6;

 for (VAR_6 = VAR_1; *VAR_6; VAR_6++) {
  FUNC_2(VAR_5, sizeof(VAR_5), "%s.%s", VAR_2, *VAR_6);
  if (FUNC_3(VAR_5, &VAR_4) < 0 || !FUNC_1(VAR_4.st_mode))
   continue;
  FUNC_0(5, ("verify_signed: %s\n", VAR_5));




  return (FUNC_6(VAR_5, VAR_3));
 }
 return (((void*)0));
}
