
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {int dummy; } ;
struct sctp_association {int ulpq; } ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 struct sctp_ulpevent* FUNC_0 (struct sctp_association*,int ) ;
 int FUNC_1 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_2(sctp_cmd_seq_t *VAR_1,
        struct sctp_association *VAR_2)
{
 struct sctp_ulpevent *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3)
  FUNC_1(&VAR_2->ulpq, VAR_3);
}
