
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,unsigned int*) ;
 int FUNC_4 (int *,unsigned char const*,int,int ,int *) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;

int
FUNC_6(const unsigned char VAR_1[16],
       const unsigned char *VAR_2, size_t VAR_3,
       const unsigned char VAR_4[8],
       unsigned char VAR_5[16])
{
    unsigned int VAR_6;
    HMAC_CTX *VAR_7;


    VAR_7 = FUNC_2();
    if (VAR_7 == ((void*)0))
 return VAR_0;
    FUNC_4(VAR_7, VAR_1, 16, FUNC_0(), ((void*)0));
    FUNC_5(VAR_7, VAR_4, 8);
    FUNC_5(VAR_7, VAR_2, VAR_3);
    FUNC_3(VAR_7, VAR_5, &VAR_6);
    FUNC_1(VAR_7);
    return 0;
}
