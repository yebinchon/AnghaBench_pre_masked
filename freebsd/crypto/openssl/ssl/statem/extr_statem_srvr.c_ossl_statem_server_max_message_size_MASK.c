
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hand_state; } ;
struct TYPE_4__ {size_t max_cert_list; TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
size_t FUNC_0(SSL *VAR_8)
{
    OSSL_STATEM *VAR_9 = &VAR_8->statem;

    switch (VAR_9->hand_state) {
    default:

        return 0;

    case 133:
        return VAR_1;

    case 132:
        return VAR_3;

    case 136:
        return VAR_8->max_cert_list;

    case 130:
        return VAR_2;

    case 135:
        return VAR_7;


    case 128:
        return VAR_6;


    case 134:
        return VAR_0;

    case 131:
        return VAR_4;

    case 129:
        return VAR_5;
    }
}
