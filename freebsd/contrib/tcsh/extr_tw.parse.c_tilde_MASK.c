
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int len; char* s; } ;
typedef int Char ;


 int FUNC_0 (struct Strbuf*,int*) ;
 int FUNC_1 (struct Strbuf*) ;
 int* FUNC_2 (int*,int) ;
 int* FUNC_3 (int*) ;
 int* FUNC_4 (int*) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static int
FUNC_6(struct Strbuf *VAR_0, Char *VAR_1)
{
    Char *VAR_2, *VAR_3;

    VAR_0->len = 0;
    switch (VAR_1[0]) {
    case '~': {
 Char *VAR_4, *VAR_5;

 VAR_1++;
 for (VAR_2 = VAR_1; *VAR_2 && *VAR_2 != '/'; VAR_2++)
     continue;
 VAR_4 = FUNC_2(VAR_1, VAR_2 - VAR_1);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_5(VAR_4);
 if (VAR_5 == ((void*)0))
     goto err;
 FUNC_0(VAR_0, VAR_5);
 FUNC_5(VAR_5);



 if (VAR_0->s[0] == '/' && VAR_0->len == 1 && *VAR_2 == '/')
     ++VAR_2;
 FUNC_0(VAR_0, VAR_2);
 break;
    }

    case '=':
 if ((VAR_3 = FUNC_4(VAR_1)) == ((void*)0))
     goto err;
 if (VAR_3 != VAR_1) {
     FUNC_0(VAR_0, VAR_3);
     FUNC_5(VAR_3);
     break;
 }


    default:
 FUNC_0(VAR_0, VAR_1);
 break;
    }
    FUNC_1(VAR_0);
    return 0;

 err:
    FUNC_1(VAR_0);
    return -1;
}
