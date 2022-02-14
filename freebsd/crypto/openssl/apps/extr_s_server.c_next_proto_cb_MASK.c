
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* data; unsigned int len; } ;
typedef TYPE_1__ tlsextnextprotoctx ;
typedef int SSL ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(SSL *VAR_1, const unsigned char **VAR_2,
                         unsigned int *VAR_3, void *VAR_4)
{
    tlsextnextprotoctx *VAR_5 = VAR_4;

    *VAR_2 = VAR_5->data;
    *VAR_3 = VAR_5->len;

    return VAR_0;
}
