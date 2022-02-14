
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htb_sched {scalar_t__ wait_pq; } ;
struct TYPE_3__ {struct Qdisc* q; int drop_list; } ;
struct TYPE_4__ {TYPE_1__ leaf; int inner; } ;
struct htb_class {scalar_t__ cmode; int t_c; int cbuffer; int ctokens; int buffer; int tokens; TYPE_2__ un; scalar_t__ level; int pq_node; scalar_t__ prio_activity; struct htb_class* parent; } ;
struct Qdisc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 struct Qdisc VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct htb_sched *VAR_2, struct htb_class *VAR_3,
          struct Qdisc *VAR_4)
{
 struct htb_class *VAR_5 = VAR_3->parent;

 FUNC_1(VAR_3->level || !VAR_3->un.leaf.q || VAR_3->prio_activity);

 if (VAR_5->cmode != VAR_0)
  FUNC_2(&VAR_5->pq_node, VAR_2->wait_pq + VAR_5->level);

 VAR_5->level = 0;
 FUNC_3(&VAR_5->un.inner, 0, sizeof(VAR_5->un.inner));
 FUNC_0(&VAR_5->un.leaf.drop_list);
 VAR_5->un.leaf.q = VAR_4 ? VAR_4 : &VAR_1;
 VAR_5->tokens = VAR_5->buffer;
 VAR_5->ctokens = VAR_5->cbuffer;
 VAR_5->t_c = FUNC_4();
 VAR_5->cmode = VAR_0;
}
