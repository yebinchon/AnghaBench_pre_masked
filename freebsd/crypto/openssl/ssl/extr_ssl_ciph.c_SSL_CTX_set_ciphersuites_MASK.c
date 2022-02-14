
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tls13_ciphersuites; int cipher_list_by_id; int * cipher_list; } ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int **,int *,int ) ;

int FUNC_2(SSL_CTX *VAR_0, const char *VAR_1)
{
    int VAR_2 = FUNC_0(&(VAR_0->tls13_ciphersuites), VAR_1);

    if (VAR_2 && VAR_0->cipher_list != ((void*)0))
        return FUNC_1(&VAR_0->cipher_list, &VAR_0->cipher_list_by_id,
                                  VAR_0->tls13_ciphersuites);

    return VAR_2;
}
