
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cipher; } ;
struct TYPE_5__ {int (* ctrl ) (TYPE_2__*,int,int,void*) ;} ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,void*) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
    int VAR_8;

    if (!VAR_4->cipher) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    if (!VAR_4->cipher->ctrl) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_8 = VAR_4->cipher->ctrl(VAR_4, VAR_5, VAR_6, VAR_7);
    if (VAR_8 == -1) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }
    return VAR_8;
}
