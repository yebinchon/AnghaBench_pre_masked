
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int opts; int rbuf_bytes_avail; int rbuf_size; int state; scalar_t__ rseq_comp; scalar_t__ rseq_no; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rsocket*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rsocket*) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_2)
{
 if (!(VAR_2->opts & VAR_0)) {
  return ((VAR_2->rbuf_bytes_avail >= (VAR_2->rbuf_size >> 1)) ||
   ((short) ((short) VAR_2->rseq_no - (short) VAR_2->rseq_comp) >= 0)) &&
         FUNC_1(VAR_2) && (VAR_2->state & VAR_1);
 } else {
  return ((VAR_2->rbuf_bytes_avail >= (VAR_2->rbuf_size >> 1)) ||
   ((short) ((short) VAR_2->rseq_no - (short) VAR_2->rseq_comp) >= 0)) &&
         FUNC_0(VAR_2) && (VAR_2->state & VAR_1);
 }
}
