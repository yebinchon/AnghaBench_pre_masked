
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsn ;
struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_errhdr_t ;
typedef int payload ;
typedef int __u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,void const*) ;
 int FUNC_2 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,struct sctp_chunk const*,int) ;

struct sctp_chunk *FUNC_4(
 const struct sctp_association *VAR_1,
 const struct sctp_chunk *VAR_2, __u32 VAR_3)
{
 struct sctp_chunk *VAR_4;
 __be32 VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2, sizeof(sctp_errhdr_t)
     + sizeof(VAR_3));

 if (!VAR_4)
  goto no_mem;


 VAR_5 = FUNC_0(VAR_3);
 FUNC_2(VAR_4, VAR_0, sizeof(VAR_5));
 FUNC_1(VAR_4, sizeof(VAR_5), (const void *)&VAR_5);
 if (VAR_2)
  VAR_4->transport = VAR_2->transport;

no_mem:
 return VAR_4;
}
