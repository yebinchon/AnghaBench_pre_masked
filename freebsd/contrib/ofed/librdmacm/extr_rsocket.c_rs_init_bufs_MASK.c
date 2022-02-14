
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {int rq_size; size_t sbuf_size; int sq_inline; int target_iomap_size; size_t rbuf_size; int opts; size_t sbuf_bytes_avail; int rbuf_free_offset; int rbuf_bytes_avail; int rseq_comp; scalar_t__ ctrl_max_seqno; scalar_t__ sq_size; scalar_t__ sqe_avail; TYPE_2__* smr; TYPE_1__* ssgl; void* sbuf; void* rmr; void* rbuf; int cm_id; void* target_sgl; struct rs_iomap* target_iomap; void* target_buffer_list; void* target_mr; void* rmsg; } ;
struct rs_iomap {int dummy; } ;
struct TYPE_4__ {int lkey; } ;
struct TYPE_3__ {uintptr_t addr; int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (size_t,int) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void*,int ,size_t) ;
 TYPE_2__* FUNC_4 (int ,void*,size_t) ;
 void* FUNC_5 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_6(struct rsocket *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 size_t VAR_9;

 VAR_6->rmsg = FUNC_1(VAR_6->rq_size + 1, sizeof(*VAR_6->rmsg));
 if (!VAR_6->rmsg)
  return FUNC_0(VAR_0);

 VAR_8 = VAR_6->sbuf_size;
 if (VAR_6->sq_inline < VAR_1)
  VAR_8 += VAR_1 * VAR_4;
 VAR_6->sbuf = FUNC_1(VAR_8, 1);
 if (!VAR_6->sbuf)
  return FUNC_0(VAR_0);

 VAR_6->smr = FUNC_4(VAR_6->cm_id, VAR_6->sbuf, VAR_8);
 if (!VAR_6->smr)
  return -1;

 VAR_9 = sizeof(*VAR_6->target_sgl) * VAR_5 +
       sizeof(*VAR_6->target_iomap) * VAR_6->target_iomap_size;
 VAR_6->target_buffer_list = FUNC_2(VAR_9);
 if (!VAR_6->target_buffer_list)
  return FUNC_0(VAR_0);

 VAR_6->target_mr = FUNC_5(VAR_6->cm_id, VAR_6->target_buffer_list, VAR_9);
 if (!VAR_6->target_mr)
  return -1;

 FUNC_3(VAR_6->target_buffer_list, 0, VAR_9);
 VAR_6->target_sgl = VAR_6->target_buffer_list;
 if (VAR_6->target_iomap_size)
  VAR_6->target_iomap = (struct rs_iomap *) (VAR_6->target_sgl + VAR_5);

 VAR_7 = VAR_6->rbuf_size;
 if (VAR_6->opts & VAR_3)
  VAR_7 += VAR_6->rq_size * VAR_2;
 VAR_6->rbuf = FUNC_1(VAR_7, 1);
 if (!VAR_6->rbuf)
  return FUNC_0(VAR_0);

 VAR_6->rmr = FUNC_5(VAR_6->cm_id, VAR_6->rbuf, VAR_7);
 if (!VAR_6->rmr)
  return -1;

 VAR_6->ssgl[0].addr = VAR_6->ssgl[1].addr = (uintptr_t) VAR_6->sbuf;
 VAR_6->sbuf_bytes_avail = VAR_6->sbuf_size;
 VAR_6->ssgl[0].lkey = VAR_6->ssgl[1].lkey = VAR_6->smr->lkey;

 VAR_6->rbuf_free_offset = VAR_6->rbuf_size >> 1;
 VAR_6->rbuf_bytes_avail = VAR_6->rbuf_size >> 1;
 VAR_6->sqe_avail = VAR_6->sq_size - VAR_6->ctrl_max_seqno;
 VAR_6->rseq_comp = VAR_6->rq_size >> 1;
 return 0;
}
