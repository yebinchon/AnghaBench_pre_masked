
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int* FUNC_0 (int*,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* FUNC_1 (int*) ;
 int* FUNC_2 (int*,int) ;
 int* FUNC_3 (int*,char) ;
 int* FUNC_4 (int*) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int*) ;

Char *
FUNC_7(Char *VAR_3, Char VAR_4)
{
    Char *VAR_5, *VAR_6;
    int VAR_7;

    switch (VAR_4) {

    case 'q':
    case 'x':
 if (*VAR_3 == '\0')
     return FUNC_4(VAR_2);
 VAR_5 = FUNC_4(VAR_3);
 for (VAR_6 = VAR_5; (VAR_7 = *VAR_6) != 0; VAR_6++)
     if ((VAR_7 != ' ' && VAR_7 != '\t') || VAR_4 == 'q')
  *VAR_6 |= VAR_0;
 return (VAR_5);

    case 'l':
 VAR_5 = FUNC_0(VAR_3, 1);
 return VAR_5 ? VAR_5 : FUNC_4(VAR_3);

    case 'u':
 VAR_5 = FUNC_0(VAR_3, 0);
 return VAR_5 ? VAR_5 : FUNC_4(VAR_3);

    case 'h':
    case 't':
 if (!FUNC_5(FUNC_6(VAR_3), '/'))
     return (VAR_4 == 't' ? FUNC_4(VAR_3) : 0);
 VAR_5 = FUNC_3(VAR_3, '/');
 if (VAR_4 == 'h')
     VAR_6 = FUNC_2(VAR_3, VAR_5 - VAR_3);
 else
     VAR_6 = FUNC_4(VAR_5 + 1);
 return (VAR_6);

    case 'e':
    case 'r':
 VAR_5 = FUNC_1(VAR_3);
 for (VAR_5--; VAR_5 >= VAR_3 && *VAR_5 != '/'; VAR_5--)
     if (*VAR_5 == '.') {
  if (VAR_4 == 'e')
      VAR_6 = FUNC_4(VAR_5 + 1);
  else
      VAR_6 = FUNC_2(VAR_3, VAR_5 - VAR_3);
  return (VAR_6);
     }
 return (FUNC_4(VAR_4 == 'e' ? VAR_1 : VAR_3));
    default:
 break;
    }
    return (0);
}
