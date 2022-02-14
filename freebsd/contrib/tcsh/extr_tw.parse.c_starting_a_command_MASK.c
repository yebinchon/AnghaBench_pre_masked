
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 int VAR_1 ;
 int FUNC_2 (char) ;

int
FUNC_3(Char *VAR_2, Char *VAR_3)
{
    Char *VAR_4, *VAR_5;
    int VAR_6, VAR_7;
    static Char
            VAR_8[] = {'`', ';', '&', '(', '|', '\0'},
            VAR_9[] = {' ', '\t', '\'', '"', '<', '>', '\0'};




    for (VAR_4 = VAR_2, VAR_6 = 0;
  VAR_4 >= VAR_3;
  VAR_6 += (*VAR_4-- == '`'))
 continue;





    VAR_5 = VAR_8 + FUNC_0(VAR_6);
    for (VAR_6 = 0; VAR_2 >= VAR_3; VAR_2--) {
 if (*VAR_2 == '\0')
     continue;
 if (FUNC_1(VAR_5, *VAR_2)) {
     for (VAR_4 = VAR_2, VAR_7 = 0; *(--VAR_4) == '\\'; VAR_7++);
     if (VAR_7 & 1) {
  VAR_2--;
  continue;
     } else
  break;
 }



 if ((VAR_4 = FUNC_1(VAR_9, *VAR_2)) != ((void*)0))
     VAR_6 = 1;
 if (VAR_6 == 1 && !VAR_4)
     return (VAR_0);
    }

    if (VAR_2 > VAR_3)
 switch (*VAR_2) {
 case '&':
     while (VAR_2 > VAR_3 &&
     (*--VAR_2 == ' ' || *VAR_2 == '\t'))
  continue;
     if (*VAR_2 == '>')
  return (VAR_0);
     break;
 case '(':
     while (VAR_2 > VAR_3 &&
     (*--VAR_2 == ' ' || *VAR_2 == '\t'))
  continue;
     if (!FUNC_2(*VAR_2) &&
  (*VAR_2 != ' ' && *VAR_2 != '\t'))
  return (VAR_0);
     break;
 default:
     break;
 }
    return (VAR_1);
}
