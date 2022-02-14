
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_outq {int out_qlen; int out_chunk_list; } ;
struct sctp_chunk {TYPE_1__* skb; int list; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct sctp_outq *VAR_0,
           struct sctp_chunk *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->out_chunk_list);
 VAR_0->out_qlen += VAR_1->skb->len;
 return;
}
