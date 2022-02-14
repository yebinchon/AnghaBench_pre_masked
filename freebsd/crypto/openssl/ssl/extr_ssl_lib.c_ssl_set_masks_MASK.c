
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {TYPE_1__* pkeys; scalar_t__ dh_tmp_auto; int * dh_tmp_cb; int * dh_tmp; } ;
struct TYPE_12__ {TYPE_3__* s3; TYPE_5__* cert; } ;
struct TYPE_10__ {int* valid_flags; unsigned long mask_k; unsigned long mask_a; } ;
struct TYPE_11__ {TYPE_2__ tmp; } ;
struct TYPE_9__ {int x509; } ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ CERT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_28 ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,size_t) ;
 int VAR_29 ;

void FUNC_4(SSL *VAR_30)
{
    CERT *VAR_31 = VAR_30->cert;
    uint32_t *VAR_32 = VAR_30->s3->tmp.valid_flags;
    int VAR_33, VAR_34, VAR_35, VAR_36;
    unsigned long VAR_37, VAR_38;

    int VAR_39, VAR_40;

    if (VAR_31 == ((void*)0))
        return;


    VAR_35 = (VAR_31->dh_tmp != ((void*)0) || VAR_31->dh_tmp_cb != ((void*)0) || VAR_31->dh_tmp_auto);




    VAR_33 = VAR_32[VAR_10] & VAR_2;
    VAR_34 = VAR_32[VAR_10] & VAR_2;
    VAR_36 = VAR_32[VAR_3] & VAR_2;

    VAR_39 = VAR_32[VAR_4] & VAR_2;

    VAR_37 = 0;
    VAR_38 = 0;







    if (FUNC_3(VAR_30, VAR_9)) {
        VAR_37 |= VAR_23;
        VAR_38 |= VAR_15;
    }
    if (FUNC_3(VAR_30, VAR_8)) {
        VAR_37 |= VAR_23;
        VAR_38 |= VAR_15;
    }
    if (FUNC_3(VAR_30, VAR_7)) {
        VAR_37 |= VAR_23;
        VAR_38 |= VAR_14;
    }


    if (VAR_33)
        VAR_37 |= VAR_25;

    if (VAR_35)
        VAR_37 |= VAR_19;






    if (VAR_33 || VAR_34 || (FUNC_3(VAR_30, VAR_11)
                && VAR_32[VAR_11] & VAR_0
                && FUNC_0(VAR_30) == VAR_27))
        VAR_38 |= VAR_18;

    if (VAR_36) {
        VAR_38 |= VAR_12;
    }

    VAR_38 |= VAR_16;






    if (VAR_39) {
        uint32_t VAR_41;
        VAR_41 = FUNC_1(VAR_31->pkeys[VAR_4].x509);
        VAR_40 = VAR_41 & VAR_28;
        if (!(VAR_32[VAR_4] & VAR_1))
            VAR_40 = 0;
        if (VAR_40)
            VAR_38 |= VAR_13;
    }

    if (!(VAR_38 & VAR_13) && FUNC_3(VAR_30, VAR_5)
            && VAR_32[VAR_5] & VAR_0
            && FUNC_0(VAR_30) == VAR_27)
            VAR_38 |= VAR_13;


    if (!(VAR_38 & VAR_13) && FUNC_3(VAR_30, VAR_6)
            && VAR_32[VAR_6] & VAR_0
            && FUNC_0(VAR_30) == VAR_27)
            VAR_38 |= VAR_13;



    VAR_37 |= VAR_21;



    VAR_37 |= VAR_24;
    VAR_38 |= VAR_17;
    if (VAR_37 & VAR_25)
        VAR_37 |= VAR_26;
    if (VAR_37 & VAR_19)
        VAR_37 |= VAR_20;
    if (VAR_37 & VAR_21)
        VAR_37 |= VAR_22;


    VAR_30->s3->tmp.mask_k = VAR_37;
    VAR_30->s3->tmp.mask_a = VAR_38;
}
