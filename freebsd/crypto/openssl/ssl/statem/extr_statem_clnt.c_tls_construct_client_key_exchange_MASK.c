
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_16__ {TYPE_3__* s3; } ;
struct TYPE_14__ {int * psk; int psklen; int * pms; int pmslen; TYPE_1__* new_cipher; } ;
struct TYPE_15__ {TYPE_2__ tmp; } ;
struct TYPE_13__ {unsigned long algorithm_mkey; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,int *) ;

int FUNC_8(SSL *VAR_13, WPACKET *VAR_14)
{
    unsigned long VAR_15;

    VAR_15 = VAR_13->s3->tmp.new_cipher->algorithm_mkey;





    if ((VAR_15 & VAR_3)
        && !FUNC_5(VAR_13, VAR_14))
        goto err;

    if (VAR_15 & (VAR_10 | VAR_11)) {
        if (!FUNC_6(VAR_13, VAR_14))
            goto err;
    } else if (VAR_15 & (VAR_4 | VAR_5)) {
        if (!FUNC_2(VAR_13, VAR_14))
            goto err;
    } else if (VAR_15 & (VAR_6 | VAR_7)) {
        if (!FUNC_3(VAR_13, VAR_14))
            goto err;
    } else if (VAR_15 & VAR_8) {
        if (!FUNC_4(VAR_13, VAR_14))
            goto err;
    } else if (VAR_15 & VAR_12) {
        if (!FUNC_7(VAR_13, VAR_14))
            goto err;
    } else if (!(VAR_15 & VAR_9)) {
        FUNC_1(VAR_13, VAR_1,
                 VAR_2, VAR_0);
        goto err;
    }

    return 1;
 err:
    FUNC_0(VAR_13->s3->tmp.pms, VAR_13->s3->tmp.pmslen);
    VAR_13->s3->tmp.pms = ((void*)0);

    FUNC_0(VAR_13->s3->tmp.psk, VAR_13->s3->tmp.psklen);
    VAR_13->s3->tmp.psk = ((void*)0);

    return 0;
}
