
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; int flags; int enc_data; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*,unsigned char*,int ,scalar_t__) ;

void FUNC_1(EVP_ENCODE_CTX *VAR_1, unsigned char *VAR_2, int *VAR_3)
{
    unsigned int VAR_4 = 0;

    if (VAR_1->num != 0) {
        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_1->enc_data, VAR_1->num);
        if ((VAR_1->flags & VAR_0) == 0)
            VAR_2[VAR_4++] = '\n';
        VAR_2[VAR_4] = '\0';
        VAR_1->num = 0;
    }
    *VAR_3 = VAR_4;
}
