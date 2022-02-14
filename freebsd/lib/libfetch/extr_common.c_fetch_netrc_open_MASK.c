
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int fn ;


 int FUNC_0 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(void)
{
 struct passwd *VAR_3;
 char VAR_4[VAR_1];
 const char *VAR_5;
 int VAR_6, VAR_7;

 if ((VAR_5 = FUNC_2("NETRC")) != ((void*)0)) {
  FUNC_0("NETRC=%s\n", VAR_5);
  if (FUNC_6(VAR_4, sizeof(VAR_4), "%s", VAR_5) >= (int)sizeof(VAR_4)) {
   FUNC_1("$NETRC specifies a file name "
       "longer than PATH_MAX");
   return (-1);
  }
 } else {
  if ((VAR_5 = FUNC_2("HOME")) == ((void*)0)) {
   if ((VAR_3 = FUNC_3(FUNC_4())) == ((void*)0) ||
       (VAR_5 = VAR_3->pw_dir) == ((void*)0))
    return (-1);
  }
  if (FUNC_6(VAR_4, sizeof(VAR_4), "%s/.netrc", VAR_5) >= (int)sizeof(VAR_4))
   return (-1);
 }

 if ((VAR_6 = FUNC_5(VAR_4, VAR_0)) < 0) {
  VAR_7 = VAR_2;
  FUNC_0("%s: %s\n", VAR_4, FUNC_7(VAR_7));
  VAR_2 = VAR_7;
 }
 return (VAR_6);
}
