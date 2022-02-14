
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct hm_header_st {size_t frag_len; size_t frag_off; size_t msg_len; int seq; scalar_t__ type; } ;
typedef int seq64be ;
typedef int pitem ;
struct TYPE_15__ {unsigned char* fragment; int msg_header; } ;
typedef TYPE_3__ hm_fragment ;
typedef int devnull ;
struct TYPE_16__ {TYPE_2__* d1; TYPE_1__* method; } ;
struct TYPE_14__ {int handshake_read_seq; int buffered_messages; } ;
struct TYPE_13__ {int (* ssl_read_bytes ) (TYPE_4__*,int ,int *,unsigned char*,int,int ,size_t*) ;} ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,struct hm_header_st const*) ;
 int FUNC_4 (int *,struct hm_header_st const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (unsigned char*,TYPE_3__*) ;
 int * FUNC_8 (int ,unsigned char*) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_4__*,int ,int *,unsigned char*,int,int ,size_t*) ;
 int FUNC_11 (TYPE_4__*,int ,int *,unsigned char*,size_t,int ,size_t*) ;

__attribute__((used)) static int
FUNC_12(SSL *VAR_3, const struct hm_header_st *VAR_4)
{
    int VAR_5 = -1;
    hm_fragment *VAR_6 = ((void*)0);
    pitem *VAR_7 = ((void*)0);
    unsigned char VAR_8[8];
    size_t VAR_9 = VAR_4->frag_len;
    size_t VAR_10;

    if ((VAR_4->frag_off + VAR_9) > VAR_4->msg_len)
        goto err;


    FUNC_5(VAR_8, 0, sizeof(VAR_8));
    VAR_8[6] = (unsigned char)(VAR_4->seq >> 8);
    VAR_8[7] = (unsigned char)VAR_4->seq;
    VAR_7 = FUNC_8(VAR_3->d1->buffered_messages, VAR_8);





    if (VAR_7 != ((void*)0) && VAR_9 != VAR_4->msg_len)
        VAR_7 = ((void*)0);






    if (VAR_4->seq <= VAR_3->d1->handshake_read_seq ||
        VAR_4->seq > VAR_3->d1->handshake_read_seq + 10 || VAR_7 != ((void*)0) ||
        (VAR_3->d1->handshake_read_seq == 0 && VAR_4->type == VAR_1)) {
        unsigned char VAR_11[256];

        while (VAR_9) {
            VAR_5 = VAR_3->method->ssl_read_bytes(VAR_3, VAR_2, ((void*)0),
                                          VAR_11,
                                          VAR_9 >
                                          sizeof(VAR_11) ? sizeof(VAR_11) :
                                          VAR_9, 0, &VAR_10);
            if (VAR_5 <= 0)
                goto err;
            VAR_9 -= VAR_10;
        }
    } else {
        if (VAR_9 != VAR_4->msg_len) {
            return FUNC_3(VAR_3, VAR_4);
        }

        if (VAR_9 > FUNC_2(VAR_3))
            goto err;

        VAR_6 = FUNC_1(VAR_9, 0);
        if (VAR_6 == ((void*)0))
            goto err;

        FUNC_4(&(VAR_6->msg_header), VAR_4, sizeof(*VAR_4));

        if (VAR_9) {



            VAR_5 = VAR_3->method->ssl_read_bytes(VAR_3, VAR_2, ((void*)0),
                                          VAR_6->fragment, VAR_9, 0,
                                          &VAR_10);
            if (VAR_5<=0 || VAR_10 != VAR_9)
                VAR_5 = -1;
            if (VAR_5 <= 0)
                goto err;
        }

        VAR_7 = FUNC_7(VAR_8, VAR_6);
        if (VAR_7 == ((void*)0))
            goto err;

        VAR_7 = FUNC_9(VAR_3->d1->buffered_messages, VAR_7);
        if (!FUNC_6(VAR_7 != ((void*)0)))
            goto err;
    }

    return VAR_0;

 err:
    if (VAR_7 == ((void*)0))
        FUNC_0(VAR_6);
    return 0;
}
