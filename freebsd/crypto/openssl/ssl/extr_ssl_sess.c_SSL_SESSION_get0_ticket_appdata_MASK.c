
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ticket_appdata_len; void* ticket_appdata; } ;
typedef TYPE_1__ SSL_SESSION ;



int FUNC_0(SSL_SESSION *VAR_0, void **VAR_1, size_t *VAR_2)
{
    *VAR_1 = VAR_0->ticket_appdata;
    *VAR_2 = VAR_0->ticket_appdata_len;
    return 1;
}
