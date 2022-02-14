
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct hm_header_st {size_t msg_len; size_t frag_off; size_t frag_len; scalar_t__ seq; } ;
struct TYPE_22__ {scalar_t__ hand_state; } ;
struct TYPE_25__ {size_t init_num; void* rwstate; TYPE_7__* method; TYPE_6__* init_buf; int msg_callback_arg; int version; int (* msg_callback ) (int ,int ,int ,unsigned char*,int,TYPE_8__*,int ) ;TYPE_5__ statem; TYPE_4__* d1; int server; int rlayer; TYPE_2__* s3; scalar_t__ init_msg; } ;
struct TYPE_24__ {int (* ssl_read_bytes ) (TYPE_8__*,int ,int*,unsigned char*,int,int ,size_t*) ;} ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_20__ {scalar_t__ frag_off; } ;
struct TYPE_21__ {scalar_t__ handshake_read_seq; TYPE_3__ r_msg_hdr; } ;
struct TYPE_18__ {size_t message_size; int message_type; } ;
struct TYPE_19__ {TYPE_1__ tmp; } ;
typedef TYPE_8__ SSL ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_8__*,int ,int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (unsigned char*,struct hm_header_st*) ;
 int FUNC_3 (TYPE_8__*,struct hm_header_st*) ;
 int FUNC_4 (TYPE_8__*,struct hm_header_st*) ;
 int FUNC_5 (TYPE_8__*,struct hm_header_st*) ;
 int FUNC_6 (TYPE_8__*,size_t*) ;
 int FUNC_7 (scalar_t__,unsigned char*,size_t) ;
 int FUNC_8 (TYPE_8__*,int ,int*,unsigned char*,int,int ,size_t*) ;
 int FUNC_9 (int ,int ,int ,unsigned char*,int,TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_8__*,int ,int*,unsigned char*,size_t,int ,size_t*) ;

__attribute__((used)) static int FUNC_11(SSL *VAR_14, int *VAR_15, size_t *VAR_16)
{
    unsigned char VAR_17[VAR_0];
    size_t VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23;
    struct hm_header_st VAR_24;
    size_t VAR_25;

    *VAR_15 = 0;

 redo:

    VAR_22 = FUNC_6(VAR_14, &VAR_20);
    if (VAR_22 < 0) {

        return 0;
    }
    if (VAR_22 > 0) {
        VAR_14->init_num = VAR_20;
        *VAR_16 = VAR_20;
        return 1;
    }


    VAR_21 = VAR_14->method->ssl_read_bytes(VAR_14, VAR_5, &VAR_23, VAR_17,
                                  VAR_0, 0, &VAR_25);
    if (VAR_21 <= 0) {
        VAR_14->rwstate = VAR_9;
        *VAR_16 = 0;
        return 0;
    }
    if (VAR_23 == VAR_4) {
        if (VAR_17[0] != VAR_1) {
            FUNC_1(VAR_14, VAR_7,
                     VAR_8,
                     VAR_10);
            goto f_err;
        }

        FUNC_7(VAR_14->init_buf->data, VAR_17, VAR_25);
        VAR_14->init_num = VAR_25 - 1;
        VAR_14->init_msg = VAR_14->init_buf->data + 1;
        VAR_14->s3->tmp.message_type = VAR_2;
        VAR_14->s3->tmp.message_size = VAR_25 - 1;
        *VAR_16 = VAR_25 - 1;
        return 1;
    }


    if (VAR_25 != VAR_0) {
        FUNC_1(VAR_14, VAR_7,
                 VAR_8, VAR_12);
        goto f_err;
    }


    FUNC_2(VAR_17, &VAR_24);

    VAR_18 = VAR_24.msg_len;
    VAR_19 = VAR_24.frag_off;
    VAR_20 = VAR_24.frag_len;





    if (VAR_20 > FUNC_0(&VAR_14->rlayer)) {
        FUNC_1(VAR_14, VAR_6,
                 VAR_8, VAR_11);
        goto f_err;
    }







    if (VAR_24.seq != VAR_14->d1->handshake_read_seq) {
        *VAR_15 = FUNC_4(VAR_14, &VAR_24);
        return 0;
    }

    if (VAR_20 && VAR_20 < VAR_18) {
        *VAR_15 = FUNC_5(VAR_14, &VAR_24);
        return 0;
    }

    if (!VAR_14->server
            && VAR_14->d1->r_msg_hdr.frag_off == 0
            && VAR_14->statem.hand_state != VAR_13
            && VAR_17[0] == VAR_3) {





        if (VAR_17[1] == 0 && VAR_17[2] == 0 && VAR_17[3] == 0) {
            if (VAR_14->msg_callback)
                VAR_14->msg_callback(0, VAR_14->version, VAR_5,
                                VAR_17, VAR_0, VAR_14,
                                VAR_14->msg_callback_arg);

            VAR_14->init_num = 0;
            goto redo;
        } else {

            FUNC_1(VAR_14, VAR_7,
                     VAR_8,
                     VAR_12);
            goto f_err;
        }
    }

    if (!FUNC_3(VAR_14, &VAR_24)) {

        goto f_err;
    }

    if (VAR_20 > 0) {
        unsigned char *VAR_26 =
            (unsigned char *)VAR_14->init_buf->data + VAR_0;

        VAR_21 = VAR_14->method->ssl_read_bytes(VAR_14, VAR_5, ((void*)0),
                                      &VAR_26[VAR_19], VAR_20, 0, &VAR_25);





        if (VAR_21 <= 0) {
            VAR_14->rwstate = VAR_9;
            *VAR_16 = 0;
            return 0;
        }
    } else {
        VAR_25 = 0;
    }





    if (VAR_25 != VAR_20) {
        FUNC_1(VAR_14, VAR_6,
                 VAR_8, VAR_11);
        goto f_err;
    }







    *VAR_16 = VAR_14->init_num = VAR_20;
    return 1;

 f_err:
    VAR_14->init_num = 0;
    *VAR_16 = 0;
    return 0;
}
