
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct hm_header_st {size_t msg_len; int seq; int type; } ;
struct TYPE_16__ {size_t init_num; scalar_t__ version; TYPE_4__* init_buf; scalar_t__ init_msg; TYPE_3__* d1; int msg_callback_arg; int (* msg_callback ) (int ,scalar_t__,int ,unsigned char*,size_t,TYPE_5__*,int ) ;TYPE_2__* s3; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {int handshake_read_seq; struct hm_header_st r_msg_hdr; } ;
struct TYPE_12__ {int message_type; } ;
struct TYPE_13__ {TYPE_1__ tmp; } ;
typedef TYPE_5__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,int*,size_t*) ;
 int FUNC_1 (size_t,unsigned char*) ;
 int FUNC_2 (struct hm_header_st*,int ,int) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (TYPE_5__*,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,scalar_t__,int ,unsigned char*,int,TYPE_5__*,int ) ;
 int FUNC_7 (int ,scalar_t__,int ,unsigned char*,size_t,TYPE_5__*,int ) ;

int FUNC_8(SSL *VAR_8, int *VAR_9, size_t *VAR_10)
{
    struct hm_header_st *VAR_11;
    unsigned char *VAR_12;
    size_t VAR_13;
    size_t VAR_14;
    int VAR_15;

    VAR_11 = &VAR_8->d1->r_msg_hdr;
    FUNC_2(VAR_11, 0, sizeof(*VAR_11));

 again:
    if (!FUNC_0(VAR_8, &VAR_15, &VAR_14)) {
        if (VAR_15 == VAR_1
                || VAR_15 == VAR_2) {

            goto again;
        }
        return 0;
    }

    *VAR_9 = VAR_8->s3->tmp.message_type;

    VAR_12 = (unsigned char *)VAR_8->init_buf->data;
    *VAR_10 = VAR_8->init_num;

    if (*VAR_9 == VAR_4) {
        if (VAR_8->msg_callback) {
            VAR_8->msg_callback(0, VAR_8->version, VAR_6,
                            VAR_12, 1, VAR_8, VAR_8->msg_callback_arg);
        }



        return 1;
    }

    VAR_13 = VAR_11->msg_len;


    *(VAR_12++) = VAR_11->type;
    FUNC_1(VAR_13, VAR_12);
    FUNC_3(VAR_11->seq, VAR_12);
    FUNC_1(0, VAR_12);
    FUNC_1(VAR_13, VAR_12);
    if (VAR_8->version != VAR_0) {
        VAR_12 -= VAR_3;
        VAR_13 += VAR_3;
    }





    if (*VAR_9 == VAR_5 && !FUNC_5(VAR_8)) {

        return 0;
    }

    if (!FUNC_4(VAR_8, VAR_12, VAR_13))
        return 0;
    if (VAR_8->msg_callback)
        VAR_8->msg_callback(0, VAR_8->version, VAR_7,
                        VAR_12, VAR_13, VAR_8, VAR_8->msg_callback_arg);

    FUNC_2(VAR_11, 0, sizeof(*VAR_11));

    VAR_8->d1->handshake_read_seq++;

    VAR_8->init_msg = VAR_8->init_buf->data + VAR_3;

    return 1;
}
