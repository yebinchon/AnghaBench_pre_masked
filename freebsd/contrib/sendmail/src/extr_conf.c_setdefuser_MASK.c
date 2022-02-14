
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;
typedef int defuserbuf ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,long,char*) ;
 struct passwd* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int,int) ;

void
FUNC_4()
{
 struct passwd *VAR_2;
 static char VAR_3[40];

 VAR_1 = VAR_3;
 VAR_2 = FUNC_1(VAR_0);
 (void) FUNC_2(VAR_3,
     (VAR_2 == ((void*)0) || VAR_2->pw_name == ((void*)0))
      ? "nobody" : VAR_2->pw_name,
     sizeof(VAR_3));
 if (FUNC_3(37, 4))
  FUNC_0("setdefuser: DefUid=%ld, DefUser=%s\n",
      (long) VAR_0, VAR_1);
}
