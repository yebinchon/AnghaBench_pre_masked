
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_6__ {int resp_len; int resp; } ;
struct TYPE_7__ {TYPE_1__ ocsp; int status_type; } ;
struct TYPE_8__ {TYPE_2__ ext; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(SSL *VAR_3, WPACKET *VAR_4)
{
    if (!FUNC_1(VAR_4, VAR_3->ext.status_type)
            || !FUNC_2(VAR_4, VAR_3->ext.ocsp.resp,
                                       VAR_3->ext.ocsp.resp_len)) {
        FUNC_0(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    return 1;
}
