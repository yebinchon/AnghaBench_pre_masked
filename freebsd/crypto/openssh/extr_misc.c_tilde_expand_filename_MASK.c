
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef scalar_t__ uid_t ;
typedef int u_int ;
struct passwd {char* pw_dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct passwd* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char**,char*,char*,char const*,char const*) ;
 char* FUNC_7 (char const*) ;

char *
FUNC_8(const char *VAR_1, uid_t VAR_2)
{
 const char *VAR_3, *VAR_4;
 char VAR_5[128], *VAR_6;
 struct passwd *VAR_7;
 u_int VAR_8, VAR_9;

 if (*VAR_1 != '~')
  return (FUNC_7(VAR_1));
 VAR_1++;

 VAR_3 = FUNC_4(VAR_1, '/');
 if (VAR_3 != ((void*)0) && VAR_3 > VAR_1) {
  VAR_9 = VAR_3 - VAR_1;
  if (VAR_9 > sizeof(VAR_5) - 1)
   FUNC_0("tilde_expand_filename: ~username too long");
  FUNC_3(VAR_5, VAR_1, VAR_9);
  VAR_5[VAR_9] = '\0';
  if ((VAR_7 = FUNC_1(VAR_5)) == ((void*)0))
   FUNC_0("tilde_expand_filename: No such user %s", VAR_5);
 } else if ((VAR_7 = FUNC_2(VAR_2)) == ((void*)0))
  FUNC_0("tilde_expand_filename: No such uid %ld", (long)VAR_2);


 VAR_8 = FUNC_5(VAR_7->pw_dir);
 if (VAR_8 == 0 || VAR_7->pw_dir[VAR_8 - 1] != '/')
  VAR_4 = "/";
 else
  VAR_4 = "";


 if (VAR_3 != ((void*)0))
  VAR_1 = VAR_3 + 1;

 if (FUNC_6(&VAR_6, "%s%s%s", VAR_7->pw_dir, VAR_4, VAR_1) >= VAR_0)
  FUNC_0("tilde_expand_filename: Path too long");

 return (VAR_6);
}
