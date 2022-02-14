
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_outq {int empty; scalar_t__ out_qlen; scalar_t__ malloced; scalar_t__ cork; scalar_t__ outstanding_bytes; scalar_t__ fast_rtx; int abandoned; int sacked; int retransmit; int control_chunk_list; int out_chunk_list; struct sctp_association* asoc; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sctp_association *VAR_0, struct sctp_outq *VAR_1)
{
 VAR_1->asoc = VAR_0;
 FUNC_0(&VAR_1->out_chunk_list);
 FUNC_0(&VAR_1->control_chunk_list);
 FUNC_0(&VAR_1->retransmit);
 FUNC_0(&VAR_1->sacked);
 FUNC_0(&VAR_1->abandoned);

 VAR_1->fast_rtx = 0;
 VAR_1->outstanding_bytes = 0;
 VAR_1->empty = 1;
 VAR_1->cork = 0;

 VAR_1->malloced = 0;
 VAR_1->out_qlen = 0;
}
