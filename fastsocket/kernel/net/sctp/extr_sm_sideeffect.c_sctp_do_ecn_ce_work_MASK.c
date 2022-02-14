
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {int need_ecne; int last_ecne_tsn; } ;
typedef int __u32 ;



__attribute__((used)) static void FUNC_0(struct sctp_association *VAR_0,
    __u32 VAR_1)
{


 VAR_0->last_ecne_tsn = VAR_1;
 VAR_0->need_ecne = 1;
}
