
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; } ;
struct group {int gr_gid; } ;
typedef int errbuff ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct group* FUNC_1 (char const*) ;
 struct passwd* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char**,int) ;

const char *
FUNC_7(const char *VAR_1, int *VAR_2, int *VAR_3)
{
 static char VAR_4[128];
 const char *VAR_5, *VAR_6, *VAR_7;

 *VAR_2 = -1;
 *VAR_3 = -1;

 if (VAR_1[0] == '\0')
  return ("Invalid empty user/group spec");







 if (*VAR_1 == ':' || *VAR_1 == '.') {

  VAR_6 = VAR_5 = ((void*)0);
  VAR_7 = VAR_1 + 1;
 } else {

  VAR_6 = VAR_5 = VAR_1;
  while (*VAR_6 != ':' && *VAR_6 != '.' && *VAR_6 != '\0')
   ++VAR_6;
  VAR_7 = VAR_6;
  if (*VAR_7 != '\0')
   ++VAR_7;
 }

 if (VAR_5 != ((void*)0)) {

  char *VAR_8;
  struct passwd *VAR_9;

  VAR_8 = (char *)FUNC_3(VAR_6 - VAR_5 + 1);
  if (VAR_8 == ((void*)0))
   return ("Couldn't allocate memory");
  FUNC_4(VAR_8, VAR_5, VAR_6 - VAR_5);
  VAR_8[VAR_6 - VAR_5] = '\0';
  if ((VAR_9 = FUNC_2(VAR_8)) != ((void*)0)) {
   *VAR_2 = VAR_9->pw_uid;
   if (*VAR_6 != '\0')
    *VAR_3 = VAR_9->pw_gid;
  } else {
   char *VAR_10;
   VAR_0 = 0;
   *VAR_2 = (int)FUNC_6(VAR_8, &VAR_10, 10);
   if (VAR_0 || *VAR_10 != '\0') {
    FUNC_5(VAR_4, sizeof(VAR_4),
        "Couldn't lookup user ``%s''", VAR_8);
    VAR_4[sizeof(VAR_4) - 1] = '\0';
    FUNC_0(VAR_8);
    return (VAR_4);
   }
  }
  FUNC_0(VAR_8);
 }

 if (*VAR_7 != '\0') {
  struct group *VAR_11;
  if ((VAR_11 = FUNC_1(VAR_7)) != ((void*)0)) {
   *VAR_3 = VAR_11->gr_gid;
  } else {
   char *VAR_12;
   VAR_0 = 0;
   *VAR_3 = (int)FUNC_6(VAR_7, &VAR_12, 10);
   if (VAR_0 || *VAR_12 != '\0') {
    FUNC_5(VAR_4, sizeof(VAR_4),
        "Couldn't lookup group ``%s''", VAR_7);
    VAR_4[sizeof(VAR_4) - 1] = '\0';
    return (VAR_4);
   }
  }
 }
 return (((void*)0));
}
