
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ data; } ;
typedef TYPE_3__ pitem ;
struct TYPE_12__ {scalar_t__ seq; size_t frag_len; size_t frag_off; } ;
struct TYPE_16__ {TYPE_10__ msg_header; int fragment; int * reassembly; } ;
typedef TYPE_4__ hm_fragment ;
struct TYPE_17__ {scalar_t__ init_num; TYPE_2__* init_buf; TYPE_1__* d1; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {scalar_t__ handshake_read_seq; int buffered_messages; } ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_10__*) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_1, size_t *VAR_2)
{






    pitem *VAR_3;
    hm_fragment *VAR_4;
    int VAR_5;

    do {
        VAR_3 = FUNC_4(VAR_1->d1->buffered_messages);
        if (VAR_3 == ((void*)0))
            return 0;

        VAR_4 = (hm_fragment *)VAR_3->data;

        if (VAR_4->msg_header.seq < VAR_1->d1->handshake_read_seq) {

            FUNC_5(VAR_1->d1->buffered_messages);
            FUNC_0(VAR_4);
            FUNC_3(VAR_3);
            VAR_3 = ((void*)0);
            VAR_4 = ((void*)0);
        }
    } while (VAR_3 == ((void*)0));


    if (VAR_4->reassembly != ((void*)0))
        return 0;

    if (VAR_1->d1->handshake_read_seq == VAR_4->msg_header.seq) {
        size_t VAR_6 = VAR_4->msg_header.frag_len;
        FUNC_5(VAR_1->d1->buffered_messages);


        VAR_5 = FUNC_1(VAR_1, &VAR_4->msg_header);

        if (VAR_5 && VAR_4->msg_header.frag_len > 0) {
            unsigned char *VAR_7 =
                (unsigned char *)VAR_1->init_buf->data + VAR_0;
            FUNC_2(&VAR_7[VAR_4->msg_header.frag_off], VAR_4->fragment,
                   VAR_4->msg_header.frag_len);
        }

        FUNC_0(VAR_4);
        FUNC_3(VAR_3);

        if (VAR_5) {
            *VAR_2 = VAR_6;
            return 1;
        }


        VAR_1->init_num = 0;
        return -1;
    } else {
        return 0;
    }
}
