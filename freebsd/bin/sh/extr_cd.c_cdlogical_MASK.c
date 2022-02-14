
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char**) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 () ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 struct stat VAR_7;
 int VAR_8;
 int VAR_9;






 VAR_9 = 0;
 VAR_6 = FUNC_10(VAR_2);
 FUNC_1(VAR_3);
 if (*VAR_2 == '/') {
  FUNC_2('/', VAR_3);
  VAR_6++;
 }
 VAR_8 = 1;
 while ((VAR_4 = FUNC_7(&VAR_6)) != ((void*)0)) {
  if (VAR_4[0] == '\0' || (VAR_4[0] == '.' && VAR_4[1] == '\0'))
   continue;
  if (! VAR_8)
   FUNC_2('/', VAR_3);
  VAR_8 = 0;
  VAR_5 = VAR_4;
  FUNC_3(VAR_4, VAR_3);
  if (FUNC_5(VAR_5, ".."))
   continue;
  FUNC_0(VAR_3);
  if (FUNC_8(FUNC_9(), &VAR_7) < 0) {
   VAR_9 = 1;
   break;
  }
 }

 VAR_0;
 if ((VAR_3 = FUNC_6(VAR_9 ? ((void*)0) : VAR_2)) == ((void*)0) || FUNC_4(VAR_3) < 0) {
  VAR_1;
  return (-1);
 }
 FUNC_11(VAR_3);
 VAR_1;
 return (0);
}
