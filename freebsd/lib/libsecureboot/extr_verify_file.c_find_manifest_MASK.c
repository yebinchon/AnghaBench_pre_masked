
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,struct stat*) ;
 char** VAR_4 ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_5)
{
 struct stat VAR_6;
 char VAR_7[VAR_2];
 char *VAR_8;
 char *VAR_9;
 const char **VAR_10;
 int VAR_11;

 FUNC_6(VAR_7, VAR_5, VAR_2 - 1);
 if (!(VAR_8 = FUNC_7(VAR_7, '/')))
  return (-1);
 *VAR_8 = '\0';
 VAR_8 = FUNC_5(VAR_7);
 VAR_11 = VAR_3;
 for (VAR_10 = VAR_4; *VAR_10; VAR_10++) {
  FUNC_3(VAR_7, sizeof(VAR_7), "%s/%s", VAR_8, *VAR_10);
  FUNC_0(5, ("looking for %s\n", VAR_7));
  if (FUNC_4(VAR_7, &VAR_6) == 0 && VAR_6.st_size > 0) {
    VAR_9 = ((void*)0);

   VAR_11 = FUNC_2(VAR_7, VAR_9 ? VAR_8 : ((void*)0),
       VAR_9, &VAR_6);
   break;
  }
 }
 FUNC_1(VAR_8);
 return (VAR_11);
}
