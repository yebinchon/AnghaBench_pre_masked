
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventop {char* name; } ;


 struct eventop** VAR_0 ;
 char** FUNC_0 (int,int) ;
 int FUNC_1 (char**) ;

const char **
FUNC_2(void)
{
 static const char **VAR_1 = ((void*)0);
 const struct eventop **VAR_2;
 const char **VAR_3;
 int VAR_4 = 0, VAR_5;


 for (VAR_2 = &VAR_0[0]; *VAR_2 != ((void*)0); ++VAR_2) {
  ++VAR_4;
 }


 VAR_3 = FUNC_0((VAR_4 + 1), sizeof(char *));
 if (VAR_3 == ((void*)0))
  return (((void*)0));


 for (VAR_5 = 0, VAR_4 = 0; VAR_0[VAR_5] != ((void*)0); ++VAR_5) {
  VAR_3[VAR_4++] = VAR_0[VAR_5]->name;
 }
 VAR_3[VAR_4] = ((void*)0);

 if (VAR_1 != ((void*)0))
  FUNC_1((char**)VAR_1);

 VAR_1 = VAR_3;

 return (VAR_1);
}
