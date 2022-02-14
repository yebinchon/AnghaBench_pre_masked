
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int key; scalar_t__ addr; } ;
struct rsocket {int rq_size; int rbuf_bytes_avail; int rbuf_size; int opts; size_t rbuf_free_offset; int sq_inline; int remote_sge; scalar_t__ rseq_no; TYPE_3__ remote_sgl; TYPE_2__* smr; TYPE_1__* rmr; int * rbuf; int ctrl_seqno; scalar_t__ rseq_comp; } ;
struct rs_sge {uintptr_t addr; int key; int length; } ;
struct ibv_sge {uintptr_t addr; int length; scalar_t__ lkey; } ;
typedef int sge ;
struct TYPE_5__ {scalar_t__ lkey; } ;
struct TYPE_4__ {int rkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 uintptr_t FUNC_1 (uintptr_t) ;
 int FUNC_2 (struct rs_sge*,struct rs_sge*,int) ;
 struct rs_sge* FUNC_3 (struct rsocket*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct rsocket*,int ) ;
 int FUNC_6 (struct rsocket*,struct ibv_sge*,int,int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct rsocket *VAR_4)
{
 struct ibv_sge VAR_5;
 struct rs_sge VAR_6, *VAR_7;
 int VAR_8;

 VAR_4->ctrl_seqno++;
 VAR_4->rseq_comp = VAR_4->rseq_no + (VAR_4->rq_size >> 1);
 if (VAR_4->rbuf_bytes_avail >= (VAR_4->rbuf_size >> 1)) {
  if (VAR_4->opts & VAR_1)
   VAR_4->ctrl_seqno++;

  if (!(VAR_4->opts & VAR_2)) {
   VAR_6.addr = (uintptr_t) &VAR_4->rbuf[VAR_4->rbuf_free_offset];
   VAR_6.key = VAR_4->rmr->rkey;
   VAR_6.length = VAR_4->rbuf_size >> 1;
  } else {
   VAR_6.addr = FUNC_1((uintptr_t) &VAR_4->rbuf[VAR_4->rbuf_free_offset]);
   VAR_6.key = FUNC_0(VAR_4->rmr->rkey);
   VAR_6.length = FUNC_0(VAR_4->rbuf_size >> 1);
  }

  if (VAR_4->sq_inline < sizeof VAR_6) {
   VAR_7 = FUNC_3(VAR_4);
   FUNC_2(VAR_7, &VAR_6, sizeof VAR_6);
   VAR_5.addr = (uintptr_t) VAR_7;
   VAR_5.lkey = VAR_4->smr->lkey;
   VAR_8 = 0;
  } else {
   VAR_5.addr = (uintptr_t) &VAR_6;
   VAR_5.lkey = 0;
   VAR_8 = VAR_0;
  }
  VAR_5.length = sizeof(VAR_6);

  FUNC_6(VAR_4, &VAR_5, 1,
   FUNC_4(VAR_3, VAR_4->rseq_no + VAR_4->rq_size), VAR_8,
   VAR_4->remote_sgl.addr + VAR_4->remote_sge * sizeof(struct rs_sge),
   VAR_4->remote_sgl.key);

  VAR_4->rbuf_bytes_avail -= VAR_4->rbuf_size >> 1;
  VAR_4->rbuf_free_offset += VAR_4->rbuf_size >> 1;
  if (VAR_4->rbuf_free_offset >= VAR_4->rbuf_size)
   VAR_4->rbuf_free_offset = 0;
  if (++VAR_4->remote_sge == VAR_4->remote_sgl.length)
   VAR_4->remote_sge = 0;
 } else {
  FUNC_5(VAR_4, FUNC_4(VAR_3, VAR_4->rseq_no + VAR_4->rq_size));
 }
}
