
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Qdisc_ops {struct Qdisc_ops* next; struct Qdisc_class_ops* cl_ops; int * dequeue; int * peek; int * enqueue; int id; } ;
struct Qdisc_class_ops {scalar_t__ unbind_tcf; scalar_t__ bind_tcf; scalar_t__ tcf_chain; scalar_t__ put; scalar_t__ get; } ;
struct TYPE_2__ {int * dequeue; int * peek; int * enqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct Qdisc_ops* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct Qdisc_ops *VAR_5)
{
 struct Qdisc_ops *VAR_6, **VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_1(&VAR_4);
 for (VAR_7 = &VAR_3; (VAR_6 = *VAR_7) != ((void*)0); VAR_7 = &VAR_6->next)
  if (!FUNC_0(VAR_5->id, VAR_6->id))
   goto out;

 if (VAR_5->enqueue == ((void*)0))
  VAR_5->enqueue = VAR_2.enqueue;
 if (VAR_5->peek == ((void*)0)) {
  if (VAR_5->dequeue == ((void*)0))
   VAR_5->peek = VAR_2.peek;
  else
   goto out_einval;
 }
 if (VAR_5->dequeue == ((void*)0))
  VAR_5->dequeue = VAR_2.dequeue;

 if (VAR_5->cl_ops) {
  const struct Qdisc_class_ops *VAR_9 = VAR_5->cl_ops;

  if (!(VAR_9->get && VAR_9->put))
   goto out_einval;

  if (VAR_9->tcf_chain && !(VAR_9->bind_tcf && VAR_9->unbind_tcf))
   goto out_einval;
 }

 VAR_5->next = ((void*)0);
 *VAR_7 = VAR_5;
 VAR_8 = 0;
out:
 FUNC_2(&VAR_4);
 return VAR_8;

out_einval:
 VAR_8 = -VAR_1;
 goto out;
}
