
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned char*,int,char**) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(const void *VAR_1, size_t VAR_2,
     unsigned char VAR_3,
     const char *VAR_4)
{
    EVP_MD_CTX *VAR_5;
    unsigned char VAR_6[VAR_0];
    char *VAR_7;

    VAR_5 = FUNC_3();
    FUNC_1(VAR_5, FUNC_5(), ((void*)0));

    FUNC_2(VAR_5, &VAR_3, 1);
    FUNC_2(VAR_5, VAR_4, FUNC_9(VAR_4));
    FUNC_2(VAR_5, VAR_1, VAR_2);
    FUNC_0(VAR_5, VAR_6, ((void*)0));

    FUNC_4(VAR_5);

    FUNC_7(VAR_6, 16, &VAR_7);

    FUNC_8("responseData=%s\n", VAR_7);
    FUNC_6(VAR_7);
}
