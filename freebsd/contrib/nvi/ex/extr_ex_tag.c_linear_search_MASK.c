
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, char *VAR_1, char *VAR_2, long VAR_3)
{
 char *VAR_4;
 while (VAR_1 < VAR_2) {
  VAR_4 = VAR_3 && VAR_2-VAR_1 > VAR_3 ? VAR_1+VAR_3 : VAR_2;
  switch (FUNC_1(VAR_0, VAR_1, VAR_4)) {
  case 130:
   return (VAR_1);
  case 128:
   return (((void*)0));
  case 129:
   break;
  }
  FUNC_0(VAR_1, VAR_2);
 }
 return (((void*)0));
}
