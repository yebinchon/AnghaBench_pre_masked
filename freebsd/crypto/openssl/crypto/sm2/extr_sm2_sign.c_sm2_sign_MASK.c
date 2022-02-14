
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned char**) ;
 int * FUNC_5 (int *,int *) ;

int FUNC_6(const unsigned char *VAR_3, int VAR_4,
             unsigned char *VAR_5, unsigned int *VAR_6, EC_KEY *VAR_7)
{
    BIGNUM *VAR_8 = ((void*)0);
    ECDSA_SIG *VAR_9 = ((void*)0);
    int VAR_10;
    int VAR_11 = -1;

    VAR_8 = FUNC_0(VAR_3, VAR_4, ((void*)0));
    if (VAR_8 == ((void*)0)) {
       FUNC_3(VAR_2, VAR_0);
       goto done;
    }

    VAR_9 = FUNC_5(VAR_7, VAR_8);

    VAR_10 = FUNC_4(VAR_9, &VAR_5);
    if (VAR_10 < 0) {
       FUNC_3(VAR_2, VAR_1);
       goto done;
    }
    *VAR_6 = (unsigned int)VAR_10;

    VAR_11 = 1;

 done:
    FUNC_2(VAR_9);
    FUNC_1(VAR_8);
    return VAR_11;
}
