
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; } ;
typedef int Strbuf ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct passwd* FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct Strbuf *VAR_1, struct Strbuf *VAR_2, int *VAR_3)
{
    struct passwd *VAR_4;







    FUNC_1(VAR_3);
    FUNC_1(VAR_2);
    VAR_0++;



    VAR_4 = ((void*)0);

    FUNC_2(&VAR_0);

    if (VAR_4 == ((void*)0)) {



 return 0;
    }
    FUNC_0(VAR_1, FUNC_5(VAR_4->pw_name));
    return 1;
}
