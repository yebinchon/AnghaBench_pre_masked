
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_10, mode_t VAR_11)
{
 struct stat VAR_12;
 mode_t VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18;

 VAR_18 = VAR_10;
 VAR_14 = 0;
 VAR_17 = 1;
 if (VAR_18[0] == '/')
  ++VAR_18;
 for (VAR_15 = 1, VAR_16 = 0; !VAR_16 ; ++VAR_18) {
  if (VAR_18[0] == '\0')
   VAR_16 = 1;
  else if (VAR_18[0] != '/')
   continue;
  *VAR_18 = '\0';
  if (!VAR_16 && VAR_18[1] == '\0')
   VAR_16 = 1;
  if (VAR_15) {
   VAR_14 = FUNC_4(0);
   VAR_13 = VAR_14 & ~(VAR_6 | VAR_7);
   (void)FUNC_4(VAR_13);
   VAR_15 = 0;
  }
  if (VAR_16)
   (void)FUNC_4(VAR_14);
  if (FUNC_1(VAR_10, VAR_16 ? VAR_11 : VAR_5 | VAR_3 | VAR_4) < 0) {
   if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
    if (FUNC_3(VAR_10, &VAR_12) < 0) {
     FUNC_5("%s", VAR_10);
     VAR_17 = 0;
     break;
    } else if (!FUNC_0(VAR_12.st_mode)) {
     if (VAR_16)
      VAR_8 = VAR_0;
     else
      VAR_8 = VAR_2;
     FUNC_5("%s", VAR_10);
     VAR_17 = 0;
     break;
    }
    if (VAR_16)
     VAR_17 = 2;
   } else {
    FUNC_5("%s", VAR_10);
    VAR_17 = 0;
    break;
   }
  } else if (VAR_9)
   FUNC_2("%s\n", VAR_10);
  if (!VAR_16)
      *VAR_18 = '/';
 }
 if (!VAR_15 && !VAR_16)
  (void)FUNC_4(VAR_14);
 return (VAR_17);
}
