
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(char **VAR_3)
{
 struct stat VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 const char *VAR_10 = ((void*)0);

 for (VAR_9 = 0; VAR_3[VAR_9]; ++VAR_9) {
  if (FUNC_4(VAR_3[VAR_9], &VAR_4) == 0) {
   if (FUNC_0(VAR_4.st_mode)) {
    ++VAR_8;
    VAR_10 = VAR_3[VAR_9];
   } else {
    ++VAR_7;
   }
  }
 }
 VAR_5 = 0;
 while (VAR_5 != 'n' && VAR_5 != 'N' && VAR_5 != 'y' && VAR_5 != 'Y') {
  if (VAR_8 && VAR_1) {
   FUNC_2(VAR_2, "recursively remove");
   if (VAR_8 == 1)
    FUNC_2(VAR_2, " %s", VAR_10);
   else
    FUNC_2(VAR_2, " %d dirs", VAR_8);
   if (VAR_7 == 1)
    FUNC_2(VAR_2, " and 1 file");
   else if (VAR_7 > 1)
    FUNC_2(VAR_2, " and %d files", VAR_7);
  } else if (VAR_8 + VAR_7 > 3) {
   FUNC_2(VAR_2, "remove %d files", VAR_8 + VAR_7);
  } else {
   return(1);
  }
  FUNC_2(VAR_2, "? ");
  FUNC_1(VAR_2);

  VAR_5 = VAR_6 = FUNC_3();
  while (VAR_6 != '\n' && VAR_6 != VAR_0)
   VAR_6 = FUNC_3();
  if (VAR_6 == VAR_0)
   break;
 }
 return (VAR_5 == 'y' || VAR_5 == 'Y');
}
