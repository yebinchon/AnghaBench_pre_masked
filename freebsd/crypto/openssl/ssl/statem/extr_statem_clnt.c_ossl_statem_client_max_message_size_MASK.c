
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hand_state; } ;
struct TYPE_4__ {size_t max_cert_list; int version; TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 size_t VAR_0 ;
 int VAR_1 ;

 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
size_t FUNC_0(SSL *VAR_10)
{
    OSSL_STATEM *VAR_11 = &VAR_10->statem;

    switch (VAR_11->hand_state) {
    default:

        return 0;

    case 128:
        return VAR_7;

    case 140:
        return VAR_4;

    case 139:
        return VAR_10->max_cert_list;

    case 136:
        return VAR_9;

    case 137:
        return VAR_9;

    case 132:
        return VAR_8;

    case 138:





        return VAR_10->max_cert_list;

    case 129:
        return VAR_6;

    case 135:
        if (VAR_10->version == VAR_1)
            return 3;
        return VAR_0;

    case 130:
        return VAR_9;

    case 133:
        return VAR_3;

    case 134:
        return VAR_2;

    case 131:
        return VAR_5;
    }
}
