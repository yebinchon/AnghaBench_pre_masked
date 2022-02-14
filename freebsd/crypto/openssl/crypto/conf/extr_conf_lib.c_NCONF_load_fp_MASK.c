
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CONF ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,long*) ;

int FUNC_4(CONF *VAR_3, FILE *VAR_4, long *VAR_5)
{
    BIO *VAR_6;
    int VAR_7;
    if ((VAR_6 = FUNC_1(VAR_4, VAR_0)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_2);
        return 0;
    }
    VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_5);
    FUNC_0(VAR_6);
    return VAR_7;
}
