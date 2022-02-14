
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int,int *) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, const char *VAR_5, int VAR_6)
{
 if (VAR_6) {
  while (VAR_4 == '\t')
   VAR_4 = FUNC_0();
 }
 if (VAR_4 == *VAR_5) {
  int VAR_7;
  const char *VAR_8;

  for (VAR_8 = VAR_5 + 1; VAR_7 = FUNC_0(), *VAR_8 != '\0' && VAR_7 == *VAR_8; VAR_8++)
   ;
  if ((VAR_7 == VAR_0 || VAR_7 == '\n') && *VAR_8 == '\0') {
   VAR_4 = VAR_0;
   if (VAR_7 == '\n') {
    VAR_3++;
    VAR_2 = VAR_1;
   }
  } else {
   FUNC_1();
   FUNC_2(VAR_5 + 1, VAR_8 - (VAR_5 + 1), ((void*)0));
  }
 } else if (VAR_4 == '\n' && *VAR_5 == '\0') {
  VAR_4 = VAR_0;
  VAR_3++;
  VAR_2 = VAR_1;
 }
 return (VAR_4);
}
