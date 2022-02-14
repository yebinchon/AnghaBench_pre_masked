
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int last_ecne_tsn; scalar_t__ need_ecne; } ;


 struct sctp_chunk* FUNC_0 (struct sctp_association*,int ) ;

struct sctp_chunk *FUNC_1(struct sctp_association *VAR_0)
{
 struct sctp_chunk *VAR_1;




 if (VAR_0->need_ecne)
  VAR_1 = FUNC_0(VAR_0, VAR_0->last_ecne_tsn);
 else
  VAR_1 = ((void*)0);

 return VAR_1;
}
