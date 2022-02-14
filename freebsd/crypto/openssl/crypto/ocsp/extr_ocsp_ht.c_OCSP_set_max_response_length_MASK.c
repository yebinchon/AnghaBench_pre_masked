
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long max_resp_len; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;


 unsigned long VAR_0 ;

void FUNC_0(OCSP_REQ_CTX *VAR_1, unsigned long VAR_2)
{
    if (VAR_2 == 0)
        VAR_1->max_resp_len = VAR_0;
    else
        VAR_1->max_resp_len = VAR_2;
}
