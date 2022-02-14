
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int) ;
 char** VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_1, const char *VAR_2, int VAR_3, char **VAR_4)
{
 struct stat VAR_5;
 char *VAR_6, *VAR_7, **VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_6(VAR_1);
 VAR_10 = 0;
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_0;
 for (VAR_8 = VAR_4; *VAR_8; VAR_8++) {
  VAR_11 = FUNC_6(*VAR_8);
  if (VAR_11 > VAR_10)
   VAR_10 = VAR_11;
 }
 VAR_6 = FUNC_3(VAR_9 + VAR_3 + VAR_10 + 2);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_1, VAR_6, VAR_9);
 if (VAR_9 > 0 && VAR_6[VAR_9 - 1] != '/')
  VAR_6[VAR_9++] = '/';
 VAR_7 = VAR_6 + VAR_9;
 FUNC_1(VAR_2, VAR_7, VAR_3);
 VAR_7 += VAR_3;
 for (VAR_8 = VAR_4; *VAR_8; VAR_8++) {
  FUNC_5(VAR_7, *VAR_8);
  if (FUNC_4(VAR_6, &VAR_5) == 0 && FUNC_0(VAR_5.st_mode))
   return VAR_6;
 }
 FUNC_2(VAR_6);
 return ((void*)0);
}
