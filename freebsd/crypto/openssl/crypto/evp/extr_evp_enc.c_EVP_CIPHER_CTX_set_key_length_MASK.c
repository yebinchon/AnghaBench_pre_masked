
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key_len; TYPE_1__* cipher; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_5, int VAR_6)
{
    if (VAR_5->cipher->flags & VAR_0)
        return FUNC_0(VAR_5, VAR_2, VAR_6, ((void*)0));
    if (VAR_5->key_len == VAR_6)
        return 1;
    if ((VAR_6 > 0) && (VAR_5->cipher->flags & VAR_1)) {
        VAR_5->key_len = VAR_6;
        return 1;
    }
    FUNC_1(VAR_3, VAR_4);
    return 0;
}
