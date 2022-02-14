
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int alpn_len; int * alpn; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char const*,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(SSL_CTX *VAR_2, const unsigned char *VAR_3,
                            unsigned int VAR_4)
{
    FUNC_0(VAR_2->ext.alpn);
    VAR_2->ext.alpn = FUNC_1(VAR_3, VAR_4);
    if (VAR_2->ext.alpn == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 1;
    }
    VAR_2->ext.alpn_len = VAR_4;

    return 0;
}
