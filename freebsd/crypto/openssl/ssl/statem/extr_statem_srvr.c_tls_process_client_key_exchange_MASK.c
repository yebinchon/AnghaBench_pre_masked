
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* s3; } ;
struct TYPE_15__ {int * psk; int psklen; TYPE_1__* new_cipher; } ;
struct TYPE_16__ {TYPE_2__ tmp; } ;
struct TYPE_14__ {unsigned long algorithm_mkey; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int *) ;

MSG_PROCESS_RETURN FUNC_10(SSL *VAR_17, PACKET *VAR_18)
{
    unsigned long VAR_19;

    VAR_19 = VAR_17->s3->tmp.new_cipher->algorithm_mkey;


    if ((VAR_19 & VAR_5) && !FUNC_7(VAR_17, VAR_18)) {

        goto err;
    }

    if (VAR_19 & VAR_13) {

        if (FUNC_1(VAR_18) != 0) {
            FUNC_2(VAR_17, VAR_2,
                     VAR_4,
                     VAR_6);
            goto err;
        }

        if (!FUNC_3(VAR_17, ((void*)0), 0, 0)) {

            goto err;
        }
    } else if (VAR_19 & (VAR_14 | VAR_15)) {
        if (!FUNC_8(VAR_17, VAR_18)) {

            goto err;
        }
    } else if (VAR_19 & (VAR_8 | VAR_9)) {
        if (!FUNC_4(VAR_17, VAR_18)) {

            goto err;
        }
    } else if (VAR_19 & (VAR_10 | VAR_11)) {
        if (!FUNC_5(VAR_17, VAR_18)) {

            goto err;
        }
    } else if (VAR_19 & VAR_16) {
        if (!FUNC_9(VAR_17, VAR_18)) {

            goto err;
        }
    } else if (VAR_19 & VAR_12) {
        if (!FUNC_6(VAR_17, VAR_18)) {

            goto err;
        }
    } else {
        FUNC_2(VAR_17, VAR_3,
                 VAR_4,
                 VAR_7);
        goto err;
    }

    return VAR_0;
 err:

    FUNC_0(VAR_17->s3->tmp.psk, VAR_17->s3->tmp.psklen);
    VAR_17->s3->tmp.psk = ((void*)0);

    return VAR_1;
}
