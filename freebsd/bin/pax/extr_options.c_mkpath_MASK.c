
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_3)
{
 struct stat VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_3;

 while (!VAR_6) {
  VAR_5 += FUNC_5(VAR_5, "/");
  VAR_5 += FUNC_4(VAR_5, "/");

  VAR_6 = (*VAR_5 == '\0');
  *VAR_5 = '\0';

  if (FUNC_3(VAR_3, &VAR_4)) {
   if (VAR_2 != VAR_0 || FUNC_1(VAR_3, 0777)) {
    FUNC_2(1, "%s", VAR_3);
    return (-1);
   }
  } else if (!FUNC_0(VAR_4.st_mode)) {
   FUNC_6(1, VAR_1, "%s", VAR_3);
   return (-1);
  }

  if (!VAR_6)
   *VAR_5 = '/';
 }

 return (0);
}
