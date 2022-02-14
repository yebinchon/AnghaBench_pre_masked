
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct htb_sched {scalar_t__ wait_pq; int clhash; } ;
struct TYPE_10__ {TYPE_6__* q; } ;
struct TYPE_11__ {TYPE_3__ leaf; } ;
struct htb_class {scalar_t__ cmode; scalar_t__ refcnt; scalar_t__ level; int pq_node; scalar_t__ prio_activity; TYPE_5__* parent; int common; TYPE_4__ un; scalar_t__ filter_cnt; scalar_t__ children; } ;
struct Qdisc {int dev_queue; } ;
struct TYPE_9__ {unsigned int qlen; } ;
struct TYPE_13__ {TYPE_2__ q; } ;
struct TYPE_8__ {int classid; } ;
struct TYPE_12__ {int children; TYPE_1__ common; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;
 scalar_t__ FUNC_2 (struct htb_class*) ;
 int FUNC_3 (struct htb_sched*,struct htb_class*,struct Qdisc*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 struct Qdisc* FUNC_6 (int ,int ,int *,int ) ;
 int FUNC_7 (struct Qdisc*) ;
 struct htb_sched* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,unsigned int) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_13(struct Qdisc *VAR_3, unsigned long VAR_4)
{
 struct htb_sched *VAR_5 = FUNC_8(VAR_3);
 struct htb_class *VAR_6 = (struct htb_class *)VAR_4;
 unsigned int VAR_7;
 struct Qdisc *VAR_8 = ((void*)0);
 int VAR_9 = 0;




 if (VAR_6->children || VAR_6->filter_cnt)
  return -VAR_0;

 if (!VAR_6->level && FUNC_2(VAR_6)) {
  VAR_8 = FUNC_6(FUNC_7(VAR_3), VAR_3->dev_queue,
       &VAR_2,
       VAR_6->parent->common.classid);
  VAR_9 = 1;
 }

 FUNC_11(VAR_3);

 if (!VAR_6->level) {
  VAR_7 = VAR_6->un.leaf.q->q.qlen;
  FUNC_9(VAR_6->un.leaf.q);
  FUNC_10(VAR_6->un.leaf.q, VAR_7);
 }


 FUNC_5(&VAR_5->clhash, &VAR_6->common);
 if (VAR_6->parent)
  VAR_6->parent->children--;

 if (VAR_6->prio_activity)
  FUNC_1(VAR_5, VAR_6);

 if (VAR_6->cmode != VAR_1)
  FUNC_4(&VAR_6->pq_node, VAR_5->wait_pq + VAR_6->level);

 if (VAR_9)
  FUNC_3(VAR_5, VAR_6, VAR_8);

 FUNC_0(--VAR_6->refcnt == 0);





 FUNC_12(VAR_3);
 return 0;
}
