
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* method; } ;
struct TYPE_8__ {scalar_t__ valid; } ;
struct TYPE_7__ {TYPE_2__* (* get_cipher_by_char ) (unsigned char const*) ;} ;
typedef TYPE_2__ SSL_CIPHER ;
typedef TYPE_3__ SSL ;


 TYPE_2__* FUNC_0 (unsigned char const*) ;

const SSL_CIPHER *FUNC_1(SSL *VAR_0, const unsigned char *VAR_1,
                                         int VAR_2)
{
    const SSL_CIPHER *VAR_3 = VAR_0->method->get_cipher_by_char(VAR_1);

    if (VAR_3 == ((void*)0) || (!VAR_2 && VAR_3->valid == 0))
        return ((void*)0);
    return VAR_3;
}
