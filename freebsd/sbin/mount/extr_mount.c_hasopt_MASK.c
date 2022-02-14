
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*) ;

int
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4, *VAR_5;

 if (VAR_1[0] == 'n' && VAR_1[1] == 'o') {
  VAR_2 = 1;
  VAR_1 += 2;
 } else
  VAR_2 = 0;
 VAR_5 = FUNC_2(VAR_0);
 VAR_3 = 0;
 for (VAR_4 = VAR_5; (VAR_4 = FUNC_3(VAR_4, ",")) != ((void*)0); VAR_4 = ((void*)0)) {
  if (VAR_4[0] == 'n' && VAR_4[1] == 'o') {
   if (!FUNC_1(VAR_4 + 2, VAR_1))
    VAR_3 = VAR_2;
  } else if (!FUNC_1(VAR_4, VAR_1))
   VAR_3 = !VAR_2;
 }
 FUNC_0(VAR_5);
 return (VAR_3);
}
