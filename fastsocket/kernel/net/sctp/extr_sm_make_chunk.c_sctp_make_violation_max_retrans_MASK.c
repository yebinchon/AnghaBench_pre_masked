
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_errhdr_t ;
typedef int error ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int,char const*) ;
 int FUNC_1 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

struct sctp_chunk *FUNC_3(
 const struct sctp_association *VAR_1,
 const struct sctp_chunk *VAR_2)
{
 struct sctp_chunk *VAR_3;
 static const char VAR_4[] = "Association exceeded its max_retans count";
 size_t VAR_5 = sizeof(VAR_4) + sizeof(sctp_errhdr_t);

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_5);
 if (!VAR_3)
  goto nodata;

 FUNC_1(VAR_3, VAR_0, sizeof(VAR_4));
 FUNC_0(VAR_3, sizeof(VAR_4), VAR_4);

nodata:
 return VAR_3;
}
