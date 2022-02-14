
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int msr; TYPE_2__* ops; } ;
struct srcimp {int mapped; TYPE_4__ rsc; TYPE_5__* mgr; struct imapper* imappers; } ;
struct TYPE_16__ {TYPE_1__* ops; } ;
struct src {TYPE_7__ rsc; } ;
struct rsc {TYPE_3__* ops; } ;
struct imapper {int addr; int user; int slot; } ;
struct TYPE_15__ {int (* imap_add ) (TYPE_5__*,struct imapper*) ;} ;
struct TYPE_13__ {int (* master ) (struct rsc*) ;int (* next_conj ) (struct rsc*) ;int (* output_slot ) (struct rsc*) ;} ;
struct TYPE_12__ {int (* master ) (TYPE_4__*) ;int (* next_conj ) (TYPE_4__*) ;int (* index ) (TYPE_4__*) ;} ;
struct TYPE_11__ {int (* index ) (TYPE_7__*) ;int (* master ) (TYPE_7__*) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct rsc*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct rsc*) ;
 int FUNC_5 (struct rsc*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_5__*,struct imapper*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct rsc*) ;

__attribute__((used)) static int FUNC_11(struct srcimp *VAR_0, struct src *VAR_1, struct rsc *VAR_2)
{
 struct imapper *VAR_3;
 int VAR_4;

 VAR_0->rsc.ops->master(&VAR_0->rsc);
 VAR_1->rsc.ops->master(&VAR_1->rsc);
 VAR_2->ops->master(VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_0->rsc.msr; VAR_4++) {
  VAR_3 = &VAR_0->imappers[VAR_4];
  VAR_3->slot = VAR_2->ops->output_slot(VAR_2);
  VAR_3->user = VAR_1->rsc.ops->index(&VAR_1->rsc);
  VAR_3->addr = VAR_0->rsc.ops->index(&VAR_0->rsc);
  VAR_0->mgr->imap_add(VAR_0->mgr, VAR_3);
  VAR_0->mapped |= (0x1 << VAR_4);

  VAR_0->rsc.ops->next_conj(&VAR_0->rsc);
  VAR_2->ops->next_conj(VAR_2);
 }

 VAR_0->rsc.ops->master(&VAR_0->rsc);
 VAR_2->ops->master(VAR_2);

 return 0;
}
