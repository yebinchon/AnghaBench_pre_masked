
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

Char *
FUNC_2(Char *VAR_1)
{
    Char **VAR_2;
    size_t VAR_3;
    int VAR_4;

    VAR_3 = FUNC_1(VAR_1);

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0) && *VAR_2 != ((void*)0); VAR_2++)
 if (FUNC_1(*VAR_2) >= VAR_3 && (*VAR_2)[VAR_3] == '=') {


     (*VAR_2)[VAR_3] = '\0';
     VAR_4 = FUNC_0(*VAR_2, VAR_1);


     (*VAR_2)[VAR_3] = '=';
     if (VAR_4 == 0)
  return (&((*VAR_2)[VAR_3 + 1]));
 }
    return (((void*)0));
}
