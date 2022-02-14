
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef int salt ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 struct passwd* FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (struct passwd*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static const char *
FUNC_9(void)
{
 struct passwd *VAR_0;
 char *VAR_1, *VAR_2;
 size_t VAR_3;
 static char VAR_4[32];

 if (VAR_4[0] != '\0')
  return VAR_4;
 FUNC_6(VAR_4, "xx", sizeof(VAR_4));
 FUNC_4();
 while ((VAR_0 = FUNC_3()) != ((void*)0)) {
  VAR_1 = FUNC_5(VAR_0);
  if (VAR_1[0] == '$' && (VAR_2 = FUNC_8(VAR_1+1, '$')) != ((void*)0)) {
   VAR_3 = VAR_2 - VAR_1 + 1;
   FUNC_6(VAR_4, VAR_1, FUNC_0(VAR_3, sizeof(VAR_4)));
   FUNC_2(VAR_1, FUNC_7(VAR_1));
   goto out;
  }
 }
 out:
 FUNC_1();
 return VAR_4;
}
