
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct hm_header_st {size_t frag_len; scalar_t__ frag_off; scalar_t__ msg_len; int seq; } ;
typedef int seq64be ;
struct TYPE_21__ {scalar_t__ data; } ;
typedef TYPE_3__ pitem ;
struct TYPE_18__ {scalar_t__ frag_len; scalar_t__ msg_len; scalar_t__ frag_off; } ;
struct TYPE_22__ {unsigned char* fragment; int * reassembly; TYPE_13__ msg_header; } ;
typedef TYPE_4__ hm_fragment ;
typedef int devnull ;
struct TYPE_23__ {TYPE_2__* d1; TYPE_1__* method; } ;
struct TYPE_20__ {int buffered_messages; } ;
struct TYPE_19__ {int (* ssl_read_bytes ) (TYPE_5__*,int ,int *,unsigned char*,int,int ,size_t*) ;} ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,long,int) ;
 int FUNC_2 (int *,long,long) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_13__*,struct hm_header_st const*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (int) ;
 TYPE_3__* FUNC_9 (unsigned char*,TYPE_4__*) ;
 TYPE_3__* FUNC_10 (int ,unsigned char*) ;
 TYPE_3__* FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (TYPE_5__*,int ,int *,unsigned char*,int,int ,size_t*) ;
 int FUNC_13 (TYPE_5__*,int ,int *,unsigned char*,size_t,int ,size_t*) ;

__attribute__((used)) static int
FUNC_14(SSL *VAR_2, const struct hm_header_st *VAR_3)
{
    hm_fragment *VAR_4 = ((void*)0);
    pitem *VAR_5 = ((void*)0);
    int VAR_6 = -1, VAR_7;
    unsigned char VAR_8[8];
    size_t VAR_9 = VAR_3->frag_len;
    size_t VAR_10;

    if ((VAR_3->frag_off + VAR_9) > VAR_3->msg_len ||
        VAR_3->msg_len > FUNC_5(VAR_2))
        goto err;

    if (VAR_9 == 0) {
        return VAR_0;
    }


    FUNC_7(VAR_8, 0, sizeof(VAR_8));
    VAR_8[6] = (unsigned char)(VAR_3->seq >> 8);
    VAR_8[7] = (unsigned char)VAR_3->seq;
    VAR_5 = FUNC_10(VAR_2->d1->buffered_messages, VAR_8);

    if (VAR_5 == ((void*)0)) {
        VAR_4 = FUNC_4(VAR_3->msg_len, 1);
        if (VAR_4 == ((void*)0))
            goto err;
        FUNC_6(&(VAR_4->msg_header), VAR_3, sizeof(*VAR_3));
        VAR_4->msg_header.frag_len = VAR_4->msg_header.msg_len;
        VAR_4->msg_header.frag_off = 0;
    } else {
        VAR_4 = (hm_fragment *)VAR_5->data;
        if (VAR_4->msg_header.msg_len != VAR_3->msg_len) {
            VAR_5 = ((void*)0);
            VAR_4 = ((void*)0);
            goto err;
        }
    }






    if (VAR_4->reassembly == ((void*)0)) {
        unsigned char VAR_11[256];

        while (VAR_9) {
            VAR_6 = VAR_2->method->ssl_read_bytes(VAR_2, VAR_1, ((void*)0),
                                          VAR_11,
                                          VAR_9 >
                                          sizeof(VAR_11) ? sizeof(VAR_11) :
                                          VAR_9, 0, &VAR_10);
            if (VAR_6 <= 0)
                goto err;
            VAR_9 -= VAR_10;
        }
        return VAR_0;
    }


    VAR_6 = VAR_2->method->ssl_read_bytes(VAR_2, VAR_1, ((void*)0),
                                  VAR_4->fragment + VAR_3->frag_off,
                                  VAR_9, 0, &VAR_10);
    if (VAR_6 <= 0 || VAR_10 != VAR_9)
        VAR_6 = -1;
    if (VAR_6 <= 0)
        goto err;

    FUNC_2(VAR_4->reassembly, (long)VAR_3->frag_off,
                        (long)(VAR_3->frag_off + VAR_9));

    if (!FUNC_8(VAR_3->msg_len > 0))
        goto err;
    FUNC_1(VAR_4->reassembly, (long)VAR_3->msg_len,
                               VAR_7);

    if (VAR_7) {
        FUNC_0(VAR_4->reassembly);
        VAR_4->reassembly = ((void*)0);
    }

    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_9(VAR_8, VAR_4);
        if (VAR_5 == ((void*)0)) {
            VAR_6 = -1;
            goto err;
        }

        VAR_5 = FUNC_11(VAR_2->d1->buffered_messages, VAR_5);






        if (!FUNC_8(VAR_5 != ((void*)0)))
            goto err;
    }

    return VAR_0;

 err:
    if (VAR_5 == ((void*)0))
        FUNC_3(VAR_4);
    return -1;
}
