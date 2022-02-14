
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ktmp; int ctx; } ;
typedef TYPE_1__ POLY1305_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (int *) ;



 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 unsigned char* FUNC_4 (int ,size_t*) ;
 size_t VAR_0 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    POLY1305_PKEY_CTX *VAR_5 = FUNC_3(VAR_1);
    const unsigned char *VAR_6;
    size_t VAR_7;

    switch (VAR_2) {

    case 129:

        break;

    case 128:
    case 130:
        if (VAR_2 == 128) {

            VAR_6 = VAR_4;
            VAR_7 = VAR_3;
        } else {

            VAR_6 = FUNC_4(FUNC_2(VAR_1), &VAR_7);
        }
        if (VAR_6 == ((void*)0) || VAR_7 != VAR_0 ||
            !FUNC_0(&VAR_5->ktmp, VAR_6, VAR_7))
            return 0;
        FUNC_5(&VAR_5->ctx, FUNC_1(&VAR_5->ktmp));
        break;

    default:
        return -2;

    }
    return 1;
}
