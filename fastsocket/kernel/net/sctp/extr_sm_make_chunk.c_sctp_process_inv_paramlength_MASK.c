
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_paramhdr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_1 (struct sctp_association const*,struct sctp_chunk const*,struct sctp_paramhdr*) ;

__attribute__((used)) static int FUNC_2(const struct sctp_association *VAR_0,
     struct sctp_paramhdr *VAR_1,
     const struct sctp_chunk *VAR_2,
     struct sctp_chunk **VAR_3)
{



 if (*VAR_3)
  FUNC_0(*VAR_3);


 *VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1);

 return 0;
}
