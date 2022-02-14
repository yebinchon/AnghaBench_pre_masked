
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int mb_param ;
struct TYPE_30__ {size_t interleave; unsigned char* inp; size_t len; int * out; } ;
struct TYPE_27__ {size_t wnum; size_t wpend_tot; size_t* write_sequence; unsigned char const* wpend_buf; int wpend_type; size_t wpend_ret; TYPE_4__* wbuf; } ;
struct TYPE_29__ {scalar_t__ early_data_state; scalar_t__ key_update; int (* handshake_func ) (TYPE_5__*) ;int version; int mode; size_t max_pipelines; TYPE_2__* s3; TYPE_3__ rlayer; int * enc_write_ctx; int wbio; TYPE_1__* method; int * msg_callback; int * compress; int rwstate; } ;
struct TYPE_28__ {scalar_t__ left; size_t len; scalar_t__ offset; int * buf; } ;
struct TYPE_26__ {scalar_t__ empty_fragment_done; scalar_t__ alert_dispatch; } ;
struct TYPE_25__ {int (* ssl_dispatch_alert ) (TYPE_5__*) ;} ;
typedef TYPE_4__ SSL3_BUFFER ;
typedef TYPE_5__ SSL ;
typedef TYPE_6__ EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ,int,TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*,int,unsigned char const*,size_t*,size_t,int ,size_t*) ;
 int FUNC_10 (TYPE_5__*,size_t,int ,int) ;
 int FUNC_11 (unsigned char*,size_t*,int) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*,int,size_t) ;
 int FUNC_16 (TYPE_5__*,int,unsigned char const*,size_t,size_t*) ;
 size_t FUNC_17 (TYPE_5__*) ;
 size_t FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;

int FUNC_21(SSL *VAR_17, int VAR_18, const void *VAR_19, size_t VAR_20,
                     size_t *VAR_21)
{
    const unsigned char *VAR_22 = VAR_19;
    size_t VAR_23;
    size_t VAR_24, VAR_25, VAR_26, VAR_27;



    SSL3_BUFFER *VAR_28 = &VAR_17->rlayer.wbuf[0];
    int VAR_29;
    size_t VAR_30;

    VAR_17->rwstate = VAR_15;
    VAR_23 = VAR_17->rlayer.wnum;
    if ((VAR_20 < VAR_17->rlayer.wnum)
        || ((VAR_28->left != 0) && (VAR_20 < (VAR_17->rlayer.wnum + VAR_17->rlayer.wpend_tot)))) {
        FUNC_8(VAR_17, VAR_7, VAR_10,
                 VAR_16);
        return -1;
    }

    if (VAR_17->early_data_state == VAR_9
            && !FUNC_10(VAR_17, VAR_20, 0, 1)) {

        return -1;
    }

    VAR_17->rlayer.wnum = 0;





    if (VAR_28->left == 0 && VAR_17->key_update != VAR_11)
        FUNC_13(VAR_17, 1);






    if (FUNC_7(VAR_17) && !FUNC_12(VAR_17)
            && VAR_17->early_data_state != VAR_8) {
        VAR_29 = VAR_17->handshake_func(VAR_17);

        if (VAR_29 < 0)
            return VAR_29;
        if (VAR_29 == 0) {
            return -1;
        }
    }





    if (VAR_28->left != 0) {

        VAR_29 = FUNC_16(VAR_17, VAR_18, &VAR_22[VAR_23], VAR_17->rlayer.wpend_tot,
                               &VAR_30);
        if (VAR_29 <= 0) {

            VAR_17->rlayer.wnum = VAR_23;
            return VAR_29;
        }
        VAR_23 += VAR_30;
    }
    if (VAR_23 == VAR_20) {
        if (VAR_17->mode & VAR_14 && !FUNC_4(VAR_17))
            FUNC_14(VAR_17);

        *VAR_21 = VAR_23;
        return 1;
    }

    VAR_24 = (VAR_20 - VAR_23);

    VAR_25 = FUNC_17(VAR_17);
    VAR_26 = FUNC_18(VAR_17);






    VAR_27 = VAR_17->max_pipelines;
    if (VAR_27 > VAR_12) {




        FUNC_8(VAR_17, VAR_7, VAR_10,
                 VAR_0);
        return -1;
    }
    if (VAR_27 == 0
        || VAR_17->enc_write_ctx == ((void*)0)
        || !(FUNC_3(FUNC_1(VAR_17->enc_write_ctx))
             & VAR_1)
        || !FUNC_5(VAR_17))
        VAR_27 = 1;
    if (VAR_25 == 0 || VAR_26 == 0
        || VAR_26 > VAR_25) {




        FUNC_8(VAR_17, VAR_7, VAR_10,
                 VAR_0);
        return -1;
    }

    for (;;) {
        size_t VAR_31[VAR_12], VAR_32, VAR_33;
        size_t VAR_34, VAR_35;

        if (VAR_24 == 0)
            VAR_34 = 1;
        else
            VAR_34 = ((VAR_24 - 1) / VAR_26) + 1;
        if (VAR_34 > VAR_27)
            VAR_34 = VAR_27;

        if (VAR_24 / VAR_34 >= VAR_25) {




            for (VAR_35 = 0; VAR_35 < VAR_34; VAR_35++) {
                VAR_31[VAR_35] = VAR_25;
            }
        } else {

            VAR_32 = VAR_24 / VAR_34;
            VAR_33 = VAR_24 % VAR_34;
            for (VAR_35 = 0; VAR_35 < VAR_34; VAR_35++) {
                VAR_31[VAR_35] = VAR_32;
                if (VAR_35 < VAR_33)
                    VAR_31[VAR_35]++;
            }
        }

        VAR_29 = FUNC_9(VAR_17, VAR_18, &(VAR_22[VAR_23]), VAR_31, VAR_34, 0,
                          &VAR_30);
        if (VAR_29 <= 0) {


            VAR_17->rlayer.wnum = VAR_23;
            return VAR_29;
        }

        if (VAR_30 == VAR_24 ||
            (VAR_18 == VAR_6 &&
             (VAR_17->mode & VAR_13))) {




            VAR_17->s3->empty_fragment_done = 0;

            if (VAR_30 == VAR_24
                    && (VAR_17->mode & VAR_14) != 0
                    && !FUNC_4(VAR_17))
                FUNC_14(VAR_17);

            *VAR_21 = VAR_23 + VAR_30;
            return 1;
        }

        VAR_24 -= VAR_30;
        VAR_23 += VAR_30;
    }
}
