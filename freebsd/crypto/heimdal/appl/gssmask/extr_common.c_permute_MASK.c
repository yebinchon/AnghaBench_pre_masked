
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int,int) ;
 int FUNC_1 (char****,size_t*,char**,int const) ;

__attribute__((used)) static void
FUNC_2(char ****VAR_0, size_t *VAR_1,
 char **VAR_2, const int VAR_3, const int VAR_4)
{
    int VAR_5, VAR_6;



    for (VAR_5 = VAR_3; VAR_5 < VAR_4 - 1; VAR_5++) {
 for (VAR_6 = VAR_5+1; VAR_6 < VAR_4; VAR_6++) {
     { char *VAR_7 = VAR_2[VAR_5]; VAR_2[VAR_5] = VAR_2[VAR_6]; VAR_2[VAR_6] = VAR_7; };
     FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5+1, VAR_4);
     { char *VAR_8 = VAR_2[VAR_5]; VAR_2[VAR_5] = VAR_2[VAR_6]; VAR_2[VAR_6] = VAR_8; };
 }
    }
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
}
