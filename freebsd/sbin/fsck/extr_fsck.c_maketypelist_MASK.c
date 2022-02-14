
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 char* FUNC_2 (char**,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(char *VAR_4)
{
 char *VAR_5;

 if ((VAR_4 == ((void*)0)) || (VAR_4[0] == '\0'))
  FUNC_1(1, "empty type list");

 if (VAR_4[0] == 'n' && VAR_4[1] == 'o') {
  VAR_4 += 2;
  VAR_3 = VAR_1;
 }
 else
  VAR_3 = VAR_0;

 while ((VAR_5 = FUNC_2(&VAR_4, ",")) != ((void*)0))
  FUNC_0(&VAR_2, VAR_5, "");

}
