
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rsocket {int state; size_t rmsg_head; int rq_size; int rqe_avail; struct ds_rmsg* dmsg; } ;
struct ds_rmsg {size_t length; scalar_t__ offset; TYPE_1__* qp; } ;
struct ds_header {size_t length; } ;
typedef int ssize_t ;
typedef int socklen_t ;
struct TYPE_2__ {scalar_t__ rbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct rsocket*,int ,int (*) (struct rsocket*)) ;
 int FUNC_2 (struct rsocket*,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (struct sockaddr*,int *,struct ds_header*) ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (struct rsocket*,int) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_7(struct rsocket *VAR_3, void *VAR_4, size_t VAR_5, int VAR_6,
      struct sockaddr *VAR_7, socklen_t *VAR_8)
{
 struct ds_rmsg *VAR_9;
 struct ds_header *VAR_10;
 int VAR_11;

 if (!(VAR_3->state & VAR_2))
  return FUNC_0(VAR_0);

 if (!FUNC_5(VAR_3)) {
  VAR_11 = FUNC_1(VAR_3, FUNC_6(VAR_3, VAR_6),
      FUNC_5);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9 = &VAR_3->dmsg[VAR_3->rmsg_head];
 VAR_10 = (struct ds_header *) (VAR_9->qp->rbuf + VAR_9->offset);
 if (VAR_5 > VAR_9->length - VAR_10->length)
  VAR_5 = VAR_9->length - VAR_10->length;

 FUNC_4(VAR_4, (void *) VAR_10 + VAR_10->length, VAR_5);
 if (VAR_8)
  FUNC_3(VAR_7, VAR_8, VAR_10);

 if (!(VAR_6 & VAR_1)) {
  FUNC_2(VAR_3, VAR_9->qp, VAR_9->offset);
  if (++VAR_3->rmsg_head == VAR_3->rq_size + 1)
   VAR_3->rmsg_head = 0;
  VAR_3->rqe_avail++;
 }

 return VAR_5;
}
