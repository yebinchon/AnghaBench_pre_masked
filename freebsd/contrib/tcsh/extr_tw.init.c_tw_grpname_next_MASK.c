
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_name; } ;
typedef int Strbuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 struct group* FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct Strbuf *VAR_3, struct Strbuf *VAR_4, int *VAR_5)
{
    struct group *VAR_6;







    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
    VAR_2++;

    VAR_1 = 0;
    while ((VAR_6 = FUNC_4()) == ((void*)0) && VAR_1 == VAR_0) {
 FUNC_5();
 VAR_1 = 0;
    }



    FUNC_2(&VAR_2);

    if (VAR_6 == ((void*)0)) {



 return 0;
    }
    FUNC_0(VAR_3, FUNC_6(VAR_6->gr_name));
    return 1;
}
