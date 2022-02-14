
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char const**,char const**,char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_0)
{
 char *VAR_1;
 const char *VAR_2;
 const char *VAR_3 = FUNC_2();
 struct stat VAR_4;


 if( FUNC_4(VAR_0, '/'))
  return VAR_0;

 while ((VAR_1 = FUNC_1(&VAR_3, &VAR_2, VAR_0)) != ((void*)0)) {
  if ((FUNC_3(VAR_1, &VAR_4) == 0) && FUNC_0(VAR_4.st_mode)) {




   return VAR_1;
  }
  FUNC_5(VAR_1);
 }
 return VAR_0;
}
