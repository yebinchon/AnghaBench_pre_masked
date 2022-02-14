
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {int unack_data; int next_tsn; } ;
typedef int __u32 ;



__u32 FUNC_0(struct sctp_association *VAR_0)
{





 __u32 VAR_1 = VAR_0->next_tsn;
 VAR_0->next_tsn++;
 VAR_0->unack_data++;

 return VAR_1;
}
