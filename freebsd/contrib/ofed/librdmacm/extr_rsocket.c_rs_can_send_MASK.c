
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int opts; int sqe_avail; scalar_t__ sbuf_bytes_avail; scalar_t__ sseq_no; scalar_t__ sseq_comp; size_t target_sge; TYPE_1__* target_sgl; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rsocket *VAR_2)
{
 if (!(VAR_2->opts & VAR_0)) {
  return VAR_2->sqe_avail && (VAR_2->sbuf_bytes_avail >= VAR_1) &&
         (VAR_2->sseq_no != VAR_2->sseq_comp) &&
         (VAR_2->target_sgl[VAR_2->target_sge].length != 0);
 } else {
  return (VAR_2->sqe_avail >= 2) && (VAR_2->sbuf_bytes_avail >= VAR_1) &&
         (VAR_2->sseq_no != VAR_2->sseq_comp) &&
         (VAR_2->target_sgl[VAR_2->target_sge].length != 0);
 }
}
