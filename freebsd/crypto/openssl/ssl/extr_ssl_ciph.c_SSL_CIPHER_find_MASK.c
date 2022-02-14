
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* method; } ;
struct TYPE_4__ {int const* (* get_cipher_by_char ) (unsigned char const*) ;} ;
typedef int SSL_CIPHER ;
typedef TYPE_2__ SSL ;


 int const* FUNC_0 (unsigned char const*) ;

const SSL_CIPHER *FUNC_1(SSL *VAR_0, const unsigned char *VAR_1)
{
    return VAR_0->method->get_cipher_by_char(VAR_1);
}
