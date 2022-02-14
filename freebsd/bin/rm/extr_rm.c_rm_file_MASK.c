
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,char*,struct stat*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int VAR_15 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_12(char **VAR_17)
{
 struct stat VAR_18;
 int VAR_19;
 char *VAR_20;





 while ((VAR_20 = *VAR_17++) != ((void*)0)) {

  if (FUNC_4(VAR_20, &VAR_18)) {
   if (VAR_9) {
    VAR_18.st_mode = VAR_4|VAR_6|VAR_5;
   } else {
    if (!VAR_13 || VAR_11 != VAR_1) {
     FUNC_10("%s", VAR_20);
     VAR_12 = 1;
    }
    continue;
   }
  } else if (VAR_9) {
   FUNC_11("%s: %s", VAR_20, FUNC_7(VAR_0));
   VAR_12 = 1;
   continue;
  }

  if (FUNC_0(VAR_18.st_mode) && !VAR_10) {
   FUNC_11("%s: is a directory", VAR_20);
   VAR_12 = 1;
   continue;
  }
  if (!VAR_13 && !FUNC_1(VAR_18.st_mode) && !FUNC_2(VAR_20, VAR_20, &VAR_18))
   continue;
  VAR_19 = 0;
  if (!VAR_15 && !FUNC_1(VAR_18.st_mode) &&
      (VAR_18.st_flags & (VAR_7|VAR_8)) &&
      !(VAR_18.st_flags & (VAR_2|VAR_3)))
   VAR_19 = FUNC_3(VAR_20, VAR_18.st_flags & ~(VAR_7|VAR_8));
  if (VAR_19 == 0) {
   if (FUNC_1(VAR_18.st_mode))
    VAR_19 = FUNC_8(VAR_20);
   else if (FUNC_0(VAR_18.st_mode))
    VAR_19 = FUNC_6(VAR_20);
   else
    VAR_19 = FUNC_9(VAR_20);
  }
  if (VAR_19 && (!VAR_13 || VAR_11 != VAR_1)) {
   FUNC_10("%s", VAR_20);
   VAR_12 = 1;
  }
  if (VAR_16 && VAR_19 == 0)
   (void)FUNC_5("%s\n", VAR_20);
  if (VAR_14 && VAR_19 == 0) {
   VAR_14 = 0;
   (void)FUNC_5("%s\n", VAR_20);
  }
 }
}
