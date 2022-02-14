
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int ) ;

struct sctp_chunk *FUNC_1(const struct sctp_association *VAR_1,
       const struct sctp_chunk *VAR_2)
{
 struct sctp_chunk *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, 0, 0);
 if (VAR_3 && VAR_2)
  VAR_3->transport = VAR_2->transport;

 return VAR_3;
}
