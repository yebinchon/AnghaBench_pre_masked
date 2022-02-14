
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ resp_len; int * resp; } ;
struct TYPE_6__ {TYPE_1__ ocsp; int status_type; } ;
struct TYPE_7__ {TYPE_2__ ext; scalar_t__ server; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_1, unsigned int VAR_2)
{
    if (VAR_1->server) {
        VAR_1->ext.status_type = VAR_0;
    } else {




        FUNC_0(VAR_1->ext.ocsp.resp);
        VAR_1->ext.ocsp.resp = ((void*)0);
        VAR_1->ext.ocsp.resp_len = 0;
    }

    return 1;
}
