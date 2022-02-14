
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;

int
FUNC_7(int VAR_4, char **VAR_5)
{
    int VAR_6 = 0;

    FUNC_5 (VAR_5[0]);
    FUNC_3 ();
    if(FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5, &VAR_6))
 FUNC_6(1);
    if(VAR_1)
 FUNC_6(0);
    if(VAR_3) {
 FUNC_4(((void*)0));
 FUNC_1(0);
    }
    VAR_5 += VAR_6;
    VAR_4 -= VAR_6;
    if (VAR_4 != 1)
 FUNC_6 (1);
    return FUNC_0 (VAR_5[0]);
}
