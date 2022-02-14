
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int userbuf ;
struct stat {int st_mode; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 int FUNC_6 (int,struct stat*) ;
 int FUNC_7 (char*,char const*,char const*,int *) ;
 int FUNC_8 (char*,char const*,char const*) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char const*,int) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 FILE *VAR_8;

 char VAR_9[1024];
 int VAR_10;
 struct stat VAR_11;


 if ((VAR_10 = FUNC_9(VAR_3, VAR_1|VAR_0)) == -1)
  return 0;
 if (FUNC_6(VAR_10, &VAR_11) == -1) {
  FUNC_2(VAR_10);
  return 0;
 }
 if (!FUNC_0(VAR_11.st_mode)) {
  FUNC_8("User %s hosts file %s is not a regular file",
      VAR_7, VAR_3);
  FUNC_2(VAR_10);
  return 0;
 }
 FUNC_15(VAR_10);
 if ((VAR_8 = FUNC_4(VAR_10, "r")) == ((void*)0)) {
  FUNC_2(VAR_10);
  return 0;
 }
 while (FUNC_5(VAR_9, sizeof(VAR_9), VAR_8)) {

  char VAR_12[1024], VAR_13[1024], VAR_14[1024];
  char *VAR_15, *VAR_16, *VAR_17;
  int VAR_18;

  for (VAR_17 = VAR_9; *VAR_17 == ' ' || *VAR_17 == '\t'; VAR_17++)
   ;
  if (*VAR_17 == '#' || *VAR_17 == '\n' || !*VAR_17)
   continue;





  if (FUNC_14(VAR_17, "NO_PLUS", 7) == 0)
   continue;





  switch (FUNC_10(VAR_9, "%1023s %1023s %1023s", VAR_12, VAR_13,
      VAR_14)) {
  case 0:
   FUNC_1("Found empty line in %.100s.", VAR_3);
   continue;
  case 1:

   FUNC_13(VAR_13, VAR_7, sizeof(VAR_13));
   break;
  case 2:

   break;
  case 3:
   FUNC_1("Found garbage in %.100s.", VAR_3);
   continue;
  default:

   continue;
  }

  VAR_15 = VAR_12;
  VAR_16 = VAR_13;
  VAR_18 = 0;


  if (VAR_15[0] == '-') {
   VAR_18 = 1;
   VAR_15++;
  } else if (VAR_15[0] == '+')
   VAR_15++;

  if (VAR_16[0] == '-') {
   VAR_18 = 1;
   VAR_16++;
  } else if (VAR_16[0] == '+')
   VAR_16++;


  if (!VAR_15[0] || !VAR_16[0]) {

   FUNC_1("Ignoring wild host/user names "
       "in %.100s.", VAR_3);
   continue;
  }

  if (VAR_15[0] == '@') {
   if (!FUNC_7(VAR_15 + 1, VAR_4, ((void*)0), ((void*)0)) &&
       !FUNC_7(VAR_15 + 1, VAR_5, ((void*)0), ((void*)0)))
    continue;
  } else if (FUNC_11(VAR_15, VAR_4) &&
      FUNC_12(VAR_15, VAR_5) != 0)
   continue;


  if (VAR_16[0] == '@') {
   if (!FUNC_7(VAR_16 + 1, ((void*)0), VAR_6, ((void*)0)))
    continue;
  } else if (FUNC_12(VAR_16, VAR_6) != 0)
   continue;


  FUNC_3(VAR_8);


  if (VAR_18) {
   FUNC_1("Matched negative entry in %.100s.",
       VAR_3);
   return 0;
  }

  return 1;
 }


 FUNC_3(VAR_8);
 return 0;
}
