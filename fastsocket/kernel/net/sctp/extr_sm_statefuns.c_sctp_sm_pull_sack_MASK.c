
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_sackhdr {int num_dup_tsns; int num_gap_ack_blocks; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {unsigned int len; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static struct sctp_sackhdr *FUNC_2(struct sctp_chunk *VAR_0)
{
 struct sctp_sackhdr *VAR_1;
 unsigned int VAR_2;
 __u16 VAR_3;
 __u16 VAR_4;




 VAR_1 = (struct sctp_sackhdr *) VAR_0->skb->data;

 VAR_3 = FUNC_0(VAR_1->num_gap_ack_blocks);
 VAR_4 = FUNC_0(VAR_1->num_dup_tsns);
 VAR_2 = sizeof(struct sctp_sackhdr);
 VAR_2 += (VAR_3 + VAR_4) * sizeof(__u32);
 if (VAR_2 > VAR_0->skb->len)
  return ((void*)0);

 FUNC_1(VAR_0->skb, VAR_2);

 return VAR_1;
}
