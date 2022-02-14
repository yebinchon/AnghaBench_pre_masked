
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int type; int index; int udp_sock; int epfd; int iomap_queue; int iomap_list; int map_lock; int cq_wait_lock; int cq_lock; int rlock; int slock; int target_iomap_size; int ctrl_max_seqno; int rq_size; int sq_size; int sq_inline; int rbuf_size; int sbuf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsocket* FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct rsocket *FUNC_3(struct rsocket *VAR_9, int VAR_10)
{
 struct rsocket *VAR_11;

 VAR_11 = FUNC_0(1, sizeof(*VAR_11));
 if (!VAR_11)
  return ((void*)0);

 VAR_11->type = VAR_10;
 VAR_11->index = -1;
 if (VAR_10 == VAR_1) {
  VAR_11->udp_sock = -1;
  VAR_11->epfd = -1;
 }

 if (VAR_9) {
  VAR_11->sbuf_size = VAR_9->sbuf_size;
  VAR_11->rbuf_size = VAR_9->rbuf_size;
  VAR_11->sq_inline = VAR_9->sq_inline;
  VAR_11->sq_size = VAR_9->sq_size;
  VAR_11->rq_size = VAR_9->rq_size;
  if (VAR_10 == VAR_2) {
   VAR_11->ctrl_max_seqno = VAR_9->ctrl_max_seqno;
   VAR_11->target_iomap_size = VAR_9->target_iomap_size;
  }
 } else {
  VAR_11->sbuf_size = VAR_8;
  VAR_11->rbuf_size = VAR_5;
  VAR_11->sq_inline = VAR_3;
  VAR_11->sq_size = VAR_7;
  VAR_11->rq_size = VAR_6;
  if (VAR_10 == VAR_2) {
   VAR_11->ctrl_max_seqno = VAR_0;
   VAR_11->target_iomap_size = VAR_4;
  }
 }
 FUNC_2(&VAR_11->slock);
 FUNC_2(&VAR_11->rlock);
 FUNC_2(&VAR_11->cq_lock);
 FUNC_2(&VAR_11->cq_wait_lock);
 FUNC_2(&VAR_11->map_lock);
 FUNC_1(&VAR_11->iomap_list);
 FUNC_1(&VAR_11->iomap_queue);
 return VAR_11;
}
