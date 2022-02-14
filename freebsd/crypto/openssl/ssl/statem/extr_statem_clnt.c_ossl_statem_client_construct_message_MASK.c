
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
 int FUNC_0 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;

int FUNC_2(SSL *VAR_23, WPACKET *VAR_24,
                                         confunc_f *VAR_25, int *VAR_26)
{
    OSSL_STATEM *VAR_27 = &VAR_23->statem;

    switch (VAR_27->hand_state) {
    default:

        FUNC_1(VAR_23, VAR_10,
                 VAR_11,
                 VAR_12);
        return 0;

    case 135:
        if (FUNC_0(VAR_23))
            *VAR_25 = VAR_13;
        else
            *VAR_25 = VAR_15;
        *VAR_26 = VAR_2;
        break;

    case 134:
        *VAR_25 = VAR_17;
        *VAR_26 = VAR_3;
        break;

    case 133:
        *VAR_25 = VAR_19;
        *VAR_26 = VAR_6;
        break;

    case 128:
        *VAR_25 = ((void*)0);
        *VAR_26 = VAR_5;
        break;

    case 137:
        *VAR_25 = VAR_16;
        *VAR_26 = VAR_0;
        break;

    case 131:
        *VAR_25 = VAR_18;
        *VAR_26 = VAR_4;
        break;

    case 136:
        *VAR_25 = VAR_14;
        *VAR_26 = VAR_1;
        break;


    case 129:
        *VAR_25 = VAR_22;
        *VAR_26 = VAR_9;
        break;

    case 132:
        *VAR_25 = VAR_20;
        *VAR_26 = VAR_7;
        break;

    case 130:
        *VAR_25 = VAR_21;
        *VAR_26 = VAR_8;
        break;
    }

    return 1;
}
