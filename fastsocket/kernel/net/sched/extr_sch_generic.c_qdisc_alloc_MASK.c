
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct Qdisc_ops {int priv_size; int dequeue; int enqueue; } ;
struct Qdisc {int padded; int refcnt; struct netdev_queue* dev_queue; int dequeue; int enqueue; struct Qdisc_ops* ops; int q; int list; } ;


 int VAR_0 ;
 struct Qdisc* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *) ;

struct Qdisc *FUNC_8(struct netdev_queue *VAR_3,
     struct Qdisc_ops *VAR_4)
{
 void *VAR_5;
 struct Qdisc *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = -VAR_0;


 VAR_7 = FUNC_2(sizeof(*VAR_6));
 VAR_7 += VAR_4->priv_size + (VAR_2 - 1);

 VAR_5 = FUNC_5(VAR_7, VAR_1);
 if (!VAR_5)
  goto errout;
 VAR_6 = (struct Qdisc *) FUNC_2((unsigned long) VAR_5);
 VAR_6->padded = (char *) VAR_6 - (char *) VAR_5;

 FUNC_1(&VAR_6->list);
 FUNC_7(&VAR_6->q);
 VAR_6->ops = VAR_4;
 VAR_6->enqueue = VAR_4->enqueue;
 VAR_6->dequeue = VAR_4->dequeue;
 VAR_6->dev_queue = VAR_3;
 FUNC_4(FUNC_6(VAR_6));
 FUNC_3(&VAR_6->refcnt, 1);

 return VAR_6;
errout:
 return FUNC_0(VAR_8);
}
