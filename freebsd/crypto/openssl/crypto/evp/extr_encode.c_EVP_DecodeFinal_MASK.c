
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; int enc_data; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int ,scalar_t__) ;

int FUNC_1(EVP_ENCODE_CTX *VAR_0, unsigned char *VAR_1, int *VAR_2)
{
    int VAR_3;

    *VAR_2 = 0;
    if (VAR_0->num != 0) {
        VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_0->enc_data, VAR_0->num);
        if (VAR_3 < 0)
            return -1;
        VAR_0->num = 0;
        *VAR_2 = VAR_3;
        return 1;
    } else
        return 1;
}
