
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_errhdr_t ;


 int VAR_0 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int) ;

__attribute__((used)) static struct sctp_chunk *FUNC_1(
 const struct sctp_association *VAR_1,
 const struct sctp_chunk *VAR_2,
 size_t VAR_3)
{
 struct sctp_chunk *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, 0,
     sizeof(sctp_errhdr_t) + VAR_3);
 if (!VAR_4)
  goto nodata;
 if (VAR_2)
  VAR_4->transport = VAR_2->transport;

nodata:
 return VAR_4;
}
