
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {char* len; int s; } ;
typedef char Char ;


 int FUNC_0 (struct Strbuf*,char*) ;
 int FUNC_1 (struct Strbuf*,char) ;
 int FUNC_2 (struct Strbuf*) ;
 char* FUNC_3 (int ,char) ;





 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, struct Strbuf *VAR_1, Char *VAR_2, Char *VAR_3)
{
    Char *VAR_4;

    switch (VAR_0) {
    case 130:
 VAR_1->len = 0;
 FUNC_1(VAR_1, '~');
 break;

    case 128:
 if ((VAR_4 = FUNC_3(VAR_1->s, '$')) != ((void*)0)) {
     if (VAR_4[1] == '{') VAR_4++;
     VAR_1->len = VAR_4 + 1 - VAR_1->s;
 } else
     VAR_1->len = 0;
 break;

    case 132:
    case 131:
    case 129:
 VAR_1->len = 0;
 FUNC_0(VAR_1, VAR_2);
 break;

    default:
 VAR_1->len = 0;
 break;
    }

    (void) FUNC_4(VAR_3);
    FUNC_0(VAR_1, VAR_3);
    FUNC_2(VAR_1);
}
