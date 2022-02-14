
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_paramhdr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_paramhdr_t ;
typedef int sctp_errhdr_t ;
typedef int error ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int,char const*) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_paramhdr*) ;
 int FUNC_2 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

struct sctp_chunk *FUNC_4(
 const struct sctp_association *VAR_1,
 const struct sctp_chunk *VAR_2,
 struct sctp_paramhdr *VAR_3)
{
 struct sctp_chunk *VAR_4;
 static const char VAR_5[] = "The following parameter had invalid length:";
 size_t VAR_6 = sizeof(VAR_5) + sizeof(sctp_errhdr_t) +
    sizeof(sctp_paramhdr_t);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_6);
 if (!VAR_4)
  goto nodata;

 FUNC_2(VAR_4, VAR_0,
   sizeof(VAR_5) + sizeof(sctp_paramhdr_t));
 FUNC_0(VAR_4, sizeof(VAR_5), VAR_5);
 FUNC_1(VAR_4, sizeof(sctp_paramhdr_t), VAR_3);

nodata:
 return VAR_4;
}
