
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;

int FUNC_6(FILE *VAR_4)
{
    BIO *VAR_5;
    int VAR_6;






    FUNC_4(VAR_1);
    VAR_5 = FUNC_1(FUNC_2());
    FUNC_4(VAR_2);
    if (VAR_5 == ((void*)0))
        return -1;
    FUNC_3(VAR_5, VAR_4, VAR_0);
    VAR_6 = FUNC_5(VAR_3, VAR_5);
    FUNC_0(VAR_5);
    return VAR_6;
}
