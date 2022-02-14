
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * confunc_f ;
typedef int WPACKET ;
struct TYPE_7__ {int hand_state; } ;
struct TYPE_6__ {TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;

int FUNC_2(SSL *VAR_32, WPACKET *VAR_33,
                                         confunc_f *VAR_34, int *VAR_35)
{
    OSSL_STATEM *VAR_36 = &VAR_32->statem;

    switch (VAR_36->hand_state) {
    default:

        FUNC_1(VAR_32, VAR_15,
                 VAR_16,
                 VAR_17);
        return 0;

    case 136:
        if (FUNC_0(VAR_32))
            *VAR_34 = VAR_18;
        else
            *VAR_34 = VAR_23;
        *VAR_35 = VAR_5;
        break;

    case 142:
        *VAR_34 = VAR_19;
        *VAR_35 = VAR_0;
        break;

    case 133:

        *VAR_34 = ((void*)0);
        *VAR_35 = VAR_9;
        break;

    case 128:
        *VAR_34 = VAR_30;
        *VAR_35 = VAR_13;
        break;

    case 140:
        *VAR_34 = VAR_28;
        *VAR_35 = VAR_1;
        break;

    case 137:
        *VAR_34 = VAR_21;
        *VAR_35 = VAR_4;
        break;


    case 132:
        *VAR_34 = VAR_31;
        *VAR_35 = VAR_14;
        break;

    case 139:
        *VAR_34 = VAR_22;
        *VAR_35 = VAR_2;
        break;

    case 129:
        *VAR_34 = VAR_29;
        *VAR_35 = VAR_12;
        break;

    case 130:
        *VAR_34 = VAR_27;
        *VAR_35 = VAR_11;
        break;

    case 138:
        *VAR_34 = VAR_20;
        *VAR_35 = VAR_3;
        break;

    case 134:
        *VAR_34 = VAR_25;
        *VAR_35 = VAR_8;
        break;

    case 141:
        *VAR_34 = ((void*)0);
        *VAR_35 = VAR_6;
        break;

    case 135:
        *VAR_34 = VAR_24;
        *VAR_35 = VAR_7;
        break;

    case 131:
        *VAR_34 = VAR_26;
        *VAR_35 = VAR_10;
        break;
    }

    return 1;
}
