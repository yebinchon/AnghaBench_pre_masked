
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct splice_pipe_desc {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {unsigned long page_offset; int size; int page; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned long,int ,unsigned int*,unsigned int*,struct sk_buff*,struct splice_pipe_desc*,int,struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, unsigned int *VAR_2,
        unsigned int *VAR_3, struct splice_pipe_desc *VAR_4,
        struct sock *VAR_5)
{
 int VAR_6;




 if (FUNC_0(FUNC_3(VAR_1->data),
        (unsigned long) VAR_1->data & (VAR_0 - 1),
        FUNC_1(VAR_1),
        VAR_2, VAR_3, VAR_1, VAR_4, 1, VAR_5))
  return 1;




 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_1)->nr_frags; VAR_6++) {
  const skb_frag_t *VAR_7 = &FUNC_2(VAR_1)->frags[VAR_6];

  if (FUNC_0(VAR_7->page, VAR_7->page_offset, VAR_7->size,
         VAR_2, VAR_3, VAR_1, VAR_4, 0, VAR_5))
   return 1;
 }

 return 0;
}
