
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct passwd {int pw_name; } ;
typedef int line ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (int ,char const*,struct passwd*,char*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;

__attribute__((used)) static FILE *
FUNC_13(const char *VAR_4, struct passwd *VAR_5, int VAR_6,
    int VAR_7, char *VAR_8)
{
 char VAR_9[1024];
 struct stat VAR_10;
 int VAR_11;
 FILE *VAR_12;

 if ((VAR_11 = FUNC_9(VAR_4, VAR_2|VAR_1)) == -1) {
  if (VAR_7 || VAR_3 != VAR_0)
   FUNC_3("Could not open %s '%s': %s", VAR_8, VAR_4,
      FUNC_11(VAR_3));
  return ((void*)0);
 }

 if (FUNC_7(VAR_11, &VAR_10) < 0) {
  FUNC_2(VAR_11);
  return ((void*)0);
 }
 if (!FUNC_0(VAR_10.st_mode)) {
  FUNC_8("User %s %s %s is not a regular file",
      VAR_5->pw_name, VAR_8, VAR_4);
  FUNC_2(VAR_11);
  return ((void*)0);
 }
 FUNC_12(VAR_11);
 if ((VAR_12 = FUNC_5(VAR_11, "r")) == ((void*)0)) {
  FUNC_2(VAR_11);
  return ((void*)0);
 }
 if (VAR_6 &&
     FUNC_10(FUNC_6(VAR_12), VAR_4, VAR_5, VAR_9, sizeof(VAR_9)) != 0) {
  FUNC_4(VAR_12);
  FUNC_8("Authentication refused: %s", VAR_9);
  FUNC_1("Ignored %s: %s", VAR_8, VAR_9);
  return ((void*)0);
 }

 return VAR_12;
}
