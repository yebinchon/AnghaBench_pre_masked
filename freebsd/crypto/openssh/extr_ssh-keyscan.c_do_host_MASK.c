
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_5)
{
 char *VAR_6 = FUNC_2(&VAR_5, " \t\n");
 int VAR_7;

 if (VAR_6 == ((void*)0))
  return;
 for (VAR_7 = VAR_1; VAR_7 <= VAR_0; VAR_7 *= 2) {
  if (VAR_3 & VAR_7) {
   while (VAR_4 >= VAR_2)
    FUNC_1();
   FUNC_0(VAR_6, *VAR_5 ? VAR_5 : VAR_6, VAR_7);
  }
 }
}
