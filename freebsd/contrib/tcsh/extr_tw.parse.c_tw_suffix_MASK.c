
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char** vec; } ;
struct Strbuf {int s; } ;
typedef char Char ;


 int * FUNC_0 (char*,char) ;
 char* FUNC_1 (int ,char) ;
 struct varent* FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static Char
FUNC_6(int VAR_0, struct Strbuf *VAR_1, const Char *VAR_2, Char *VAR_3)
{
    Char *VAR_4;
    Char *VAR_5;
    struct varent *VAR_6;

    (void) FUNC_4(VAR_3);

    switch (VAR_0) {

    case 135:
 return '/';

    case 130:



 if ((VAR_6 = FUNC_2(VAR_3)) != ((void*)0) && VAR_6->vec != ((void*)0)) {
     if ((VAR_4 = VAR_6->vec[0]) == ((void*)0) || *VAR_4 == '\0' ||
  VAR_6->vec[1] != ((void*)0))
  return ' ';
 }
 else if ((VAR_4 = FUNC_5(VAR_3)) == ((void*)0) || *VAR_4 == '\0')
     return ' ';

 if ((VAR_5 = FUNC_1(VAR_1->s, '$')) != 0 &&
     VAR_5[1] == '{' && FUNC_0(VAR_5, '}') == ((void*)0))
   return '}';

 return FUNC_3(VAR_2, VAR_4) ? '/' : ' ';


    case 141:
 return '/';

    case 143:
    case 139:
 return FUNC_3(VAR_2, VAR_3) ? '/' : ' ';

    case 145:
    case 129:
    case 128:
    case 134:
    case 140:
    case 131:
    case 144:
    case 136:
    case 133:
    case 137:
    case 142:
    case 132:
    case 138:
 return ' ';

    default:
 return '\0';
    }
}
