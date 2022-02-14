
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int ) ;

struct sctp_chunk *FUNC_1(
 const struct sctp_association *VAR_2,
 const struct sctp_chunk *VAR_3)
{
 struct sctp_chunk *VAR_4;
 __u8 VAR_5 = 0;




 VAR_5 |= VAR_2 ? 0 : VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_5, 0);
 if (VAR_4 && VAR_3)
  VAR_4->transport = VAR_3->transport;

 return VAR_4;
}
