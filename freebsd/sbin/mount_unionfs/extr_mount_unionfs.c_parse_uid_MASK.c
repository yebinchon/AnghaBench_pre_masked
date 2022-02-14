
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct passwd* FUNC_1 (char const*) ;
 int FUNC_2 (char*,size_t,char*,int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char const*,char**,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct passwd *VAR_4;
 char *VAR_5;

 if ((VAR_4 = FUNC_1(VAR_1)) != ((void*)0))
  FUNC_2(VAR_2, VAR_3, "%d", VAR_4->pw_uid);
 else {
  FUNC_4(VAR_1, &VAR_5, 10);
  if (*VAR_5 != 0) {
                       FUNC_0(VAR_0, "unknown user id: %s", VAR_1);
                       FUNC_5();
  } else {
   FUNC_3(VAR_2, VAR_1, VAR_3);
  }
 }
}
