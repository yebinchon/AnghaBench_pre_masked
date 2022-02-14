
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hm_header_st {size_t frag_off; size_t frag_len; } ;
struct TYPE_5__ {TYPE_1__* d1; } ;
struct TYPE_4__ {struct hm_header_st w_msg_hdr; } ;
typedef TYPE_2__ SSL ;



__attribute__((used)) static void
FUNC_0(SSL *VAR_0, size_t VAR_1, size_t VAR_2)
{
    struct hm_header_st *VAR_3 = &VAR_0->d1->w_msg_hdr;

    VAR_3->frag_off = VAR_1;
    VAR_3->frag_len = VAR_2;
}
