
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned char const*,unsigned char*,int ,int ) ;

int FUNC_4(unsigned char *VAR_4, const unsigned char *VAR_5, int VAR_6,
                         EVP_PKEY *VAR_7)
{
    int VAR_8 = -1;


    if (FUNC_1(VAR_7) != VAR_1) {

        FUNC_2(VAR_0, VAR_2);

        goto err;
    }

    VAR_8 =
        FUNC_3(VAR_6, VAR_5, VAR_4, FUNC_0(VAR_7),
                            VAR_3);
 err:

    return VAR_8;
}
