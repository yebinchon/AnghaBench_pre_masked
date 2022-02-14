
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int d2i_of_void ;
typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 void* FUNC_4 (int *,char const*,int *,void**,int *,void*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

void *FUNC_6(d2i_of_void *VAR_3, const char *VAR_4, FILE *VAR_5, void **VAR_6,
                    pem_password_cb *VAR_7, void *VAR_8)
{
    BIO *VAR_9;
    void *VAR_10;

    if ((VAR_9 = FUNC_1(FUNC_2())) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_1);
        return 0;
    }
    FUNC_3(VAR_9, VAR_5, VAR_0);
    VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_9, VAR_6, VAR_7, VAR_8);
    FUNC_0(VAR_9);
    return VAR_10;
}
