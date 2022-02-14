
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rsc {TYPE_2__* ops; } ;
struct imapper {int addr; int user; int slot; } ;
struct TYPE_12__ {int msr; TYPE_3__* ops; } ;
struct TYPE_9__ {int msr; } ;
struct daio {TYPE_4__ rscr; TYPE_1__ rscl; } ;
struct dao {struct imapper** imappers; TYPE_6__* mgr; struct daio daio; } ;
struct TYPE_13__ {int (* imap_add ) (TYPE_6__*,struct imapper*) ;} ;
struct TYPE_11__ {int (* master ) (TYPE_4__*) ;int (* next_conj ) (TYPE_4__*) ;int (* index ) (TYPE_4__*) ;} ;
struct TYPE_10__ {int (* master ) (struct rsc*) ;int (* next_conj ) (struct rsc*) ;int (* output_slot ) (struct rsc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct imapper* FUNC_0 (int,int ) ;
 int FUNC_1 (struct rsc*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct rsc*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*,struct imapper*) ;
 int FUNC_6 (struct rsc*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct rsc*) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(struct dao *VAR_2, struct rsc *VAR_3)
{
 struct imapper *VAR_4;
 struct daio *VAR_5 = &VAR_2->daio;
 int VAR_6;

 VAR_4 = FUNC_0((sizeof(*VAR_4) * VAR_5->rscr.msr), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_3->ops->master(VAR_3);
 VAR_5->rscr.ops->master(&VAR_5->rscr);
 for (VAR_6 = 0; VAR_6 < VAR_5->rscr.msr; VAR_6++, VAR_4++) {
  VAR_4->slot = VAR_3->ops->output_slot(VAR_3);
  VAR_4->user = VAR_4->addr = VAR_5->rscr.ops->index(&VAR_5->rscr);
  VAR_2->mgr->imap_add(VAR_2->mgr, VAR_4);
  VAR_2->imappers[VAR_5->rscl.msr + VAR_6] = VAR_4;

  VAR_3->ops->next_conj(VAR_3);
  VAR_5->rscr.ops->next_conj(&VAR_5->rscr);
 }
 VAR_3->ops->master(VAR_3);
 VAR_5->rscr.ops->master(&VAR_5->rscr);

 return 0;
}
