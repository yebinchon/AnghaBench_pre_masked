
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int rto; } ;
struct sctp_chunk {struct sctp_transport* transport; } ;
struct sctp_association {int * timeouts; struct sctp_transport* shutdown_last_sent_to; } ;
typedef int sctp_cmd_seq_t ;


 size_t VAR_0 ;
 struct sctp_transport* FUNC_0 (struct sctp_association*,struct sctp_transport*) ;

__attribute__((used)) static void FUNC_1(sctp_cmd_seq_t *VAR_1,
         struct sctp_association *VAR_2,
         struct sctp_chunk *VAR_3)
{
 struct sctp_transport *VAR_4;

 if (VAR_3->transport)
  VAR_4 = VAR_3->transport;
 else {
  VAR_4 = FUNC_0(VAR_2,
           VAR_2->shutdown_last_sent_to);
  VAR_3->transport = VAR_4;
 }
 VAR_2->shutdown_last_sent_to = VAR_4;
 VAR_2->timeouts[VAR_0] = VAR_4->rto;
}
