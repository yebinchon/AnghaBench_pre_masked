
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worddest {int dummy; } ;


 char const VAR_0 ;
 int FUNC_0 (int,char*) ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char,int,char*,struct worddest*) ;
 int FUNC_2 (char,char*) ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 () ;
 int * FUNC_5 (char const*,char) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_3, const char *VAR_4, int VAR_5, char *VAR_6,
    struct worddest *VAR_7)
{
 const char *VAR_8;
 char VAR_9;

 VAR_8 = FUNC_3() ? FUNC_4() : " \t\n";
 while (*VAR_3) {
  FUNC_0(2, VAR_6);
  VAR_9 = *VAR_3++;
  if (FUNC_5(VAR_8, VAR_9) != ((void*)0)) {
   FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7);
   continue;
  }
  if (VAR_5 & VAR_2 && VAR_4[(int)VAR_9] == VAR_0)
   FUNC_2(VAR_1, VAR_6);
  FUNC_2(VAR_9, VAR_6);
 }
 return (VAR_6);
}
