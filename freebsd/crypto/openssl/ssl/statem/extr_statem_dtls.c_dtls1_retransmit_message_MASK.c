
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct dtls1_retransmit_state {int epoch; int session; int compress; int write_hash; int enc_write_ctx; } ;
typedef int seq64be ;
struct TYPE_17__ {scalar_t__ data; } ;
typedef TYPE_5__ pitem ;
struct TYPE_14__ {int epoch; int session; int compress; int write_hash; int enc_write_ctx; } ;
struct TYPE_15__ {scalar_t__ is_ccs; TYPE_2__ saved_retransmit_state; int frag_len; int seq; scalar_t__ msg_len; int type; } ;
struct TYPE_18__ {TYPE_3__ msg_header; int fragment; } ;
typedef TYPE_6__ hm_fragment ;
struct TYPE_19__ {int wbio; TYPE_4__* d1; int rlayer; int session; int compress; int write_hash; int enc_write_ctx; scalar_t__ init_num; TYPE_1__* init_buf; } ;
struct TYPE_16__ {int retransmitting; int sent_messages; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_7__ SSL ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_7__*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 TYPE_5__* FUNC_8 (int ,unsigned char*) ;

int FUNC_9(SSL *VAR_7, unsigned short VAR_8, int *VAR_9)
{
    int VAR_10;

    pitem *VAR_11;
    hm_fragment *VAR_12;
    unsigned long VAR_13;
    unsigned char VAR_14[8];
    struct dtls1_retransmit_state VAR_15;


    FUNC_7(VAR_14, 0, sizeof(VAR_14));
    VAR_14[6] = (unsigned char)(VAR_8 >> 8);
    VAR_14[7] = (unsigned char)VAR_8;

    VAR_11 = FUNC_8(VAR_7->d1->sent_messages, VAR_14);
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_7, VAR_5, VAR_6,
                 VAR_2);
        *VAR_9 = 0;
        return 0;
    }

    *VAR_9 = 1;
    VAR_12 = (hm_fragment *)VAR_11->data;

    if (VAR_12->msg_header.is_ccs)
        VAR_13 = VAR_0;
    else
        VAR_13 = VAR_1;

    FUNC_6(VAR_7->init_buf->data, VAR_12->fragment,
           VAR_12->msg_header.msg_len + VAR_13);
    VAR_7->init_num = VAR_12->msg_header.msg_len + VAR_13;

    FUNC_5(VAR_7, VAR_12->msg_header.type,
                                 VAR_12->msg_header.msg_len,
                                 VAR_12->msg_header.seq, 0,
                                 VAR_12->msg_header.frag_len);


    VAR_15.enc_write_ctx = VAR_7->enc_write_ctx;
    VAR_15.write_hash = VAR_7->write_hash;
    VAR_15.compress = VAR_7->compress;
    VAR_15.session = VAR_7->session;
    VAR_15.epoch = FUNC_1(&VAR_7->rlayer);

    VAR_7->d1->retransmitting = 1;


    VAR_7->enc_write_ctx = VAR_12->msg_header.saved_retransmit_state.enc_write_ctx;
    VAR_7->write_hash = VAR_12->msg_header.saved_retransmit_state.write_hash;
    VAR_7->compress = VAR_12->msg_header.saved_retransmit_state.compress;
    VAR_7->session = VAR_12->msg_header.saved_retransmit_state.session;
    FUNC_2(&VAR_7->rlayer,
                                        VAR_12->msg_header.
                                        saved_retransmit_state.epoch);

    VAR_10 = FUNC_4(VAR_7, VAR_12->msg_header.is_ccs ?
                         VAR_3 : VAR_4);


    VAR_7->enc_write_ctx = VAR_15.enc_write_ctx;
    VAR_7->write_hash = VAR_15.write_hash;
    VAR_7->compress = VAR_15.compress;
    VAR_7->session = VAR_15.session;
    FUNC_2(&VAR_7->rlayer, VAR_15.epoch);

    VAR_7->d1->retransmitting = 0;

    (void)FUNC_0(VAR_7->wbio);
    return VAR_10;
}
