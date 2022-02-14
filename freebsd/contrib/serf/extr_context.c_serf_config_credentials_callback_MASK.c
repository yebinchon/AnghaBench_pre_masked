
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_credentials_callback_t ;
struct TYPE_3__ {int cred_cb; } ;
typedef TYPE_1__ serf_context_t ;



void FUNC_0(serf_context_t *VAR_0,
                                      serf_credentials_callback_t VAR_1)
{
    VAR_0->cred_cb = VAR_1;
}
