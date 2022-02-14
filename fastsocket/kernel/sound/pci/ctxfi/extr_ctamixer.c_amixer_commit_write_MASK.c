
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* ops; } ;
struct sum {TYPE_4__ rsc; } ;
struct rsc {TYPE_2__* ops; } ;
struct hw {int (* amixer_commit_write ) (struct hw*,unsigned int,int ) ;int (* amixer_set_sadr ) (int ,int ) ;int (* amixer_set_x ) (int ,int ) ;int (* amixer_set_dirty_all ) (int ) ;} ;
struct TYPE_16__ {int msr; TYPE_1__* ops; int ctrl_blk; struct hw* hw; } ;
struct amixer {TYPE_7__ rsc; struct sum* sum; struct rsc* input; } ;
struct TYPE_14__ {int (* master ) (TYPE_4__*) ;int (* next_conj ) (TYPE_4__*) ;int (* index ) (TYPE_4__*) ;} ;
struct TYPE_13__ {int (* master ) (struct rsc*) ;int (* next_conj ) (struct rsc*) ;int (* output_slot ) (struct rsc*) ;} ;
struct TYPE_12__ {unsigned int (* output_slot ) (TYPE_7__*) ;int (* master ) (TYPE_7__*) ;int (* next_conj ) (TYPE_7__*) ;} ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_4__*) ;
 unsigned int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct hw*,unsigned int,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (struct rsc*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct rsc*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct rsc*) ;
 int FUNC_13 (struct rsc*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_16(struct amixer *VAR_0)
{
 struct hw *VAR_1;
 unsigned int VAR_2;
 int VAR_3;
 struct rsc *VAR_4;
 struct sum *VAR_5;

 VAR_1 = VAR_0->rsc.hw;
 VAR_4 = VAR_0->input;
 VAR_5 = VAR_0->sum;


 VAR_0->rsc.ops->master(&VAR_0->rsc);
 if (VAR_4)
  VAR_4->ops->master(VAR_4);

 if (VAR_5)
  VAR_5->rsc.ops->master(&VAR_5->rsc);

 for (VAR_3 = 0; VAR_3 < VAR_0->rsc.msr; VAR_3++) {
  VAR_1->amixer_set_dirty_all(VAR_0->rsc.ctrl_blk);
  if (VAR_4) {
   VAR_1->amixer_set_x(VAR_0->rsc.ctrl_blk,
      VAR_4->ops->output_slot(VAR_4));
   VAR_4->ops->next_conj(VAR_4);
  }
  if (VAR_5) {
   VAR_1->amixer_set_sadr(VAR_0->rsc.ctrl_blk,
      VAR_5->rsc.ops->index(&VAR_5->rsc));
   VAR_5->rsc.ops->next_conj(&VAR_5->rsc);
  }
  VAR_2 = VAR_0->rsc.ops->output_slot(&VAR_0->rsc);
  VAR_1->amixer_commit_write(VAR_1, VAR_2, VAR_0->rsc.ctrl_blk);
  VAR_0->rsc.ops->next_conj(&VAR_0->rsc);
 }
 VAR_0->rsc.ops->master(&VAR_0->rsc);
 if (VAR_4)
  VAR_4->ops->master(VAR_4);

 if (VAR_5)
  VAR_5->rsc.ops->master(&VAR_5->rsc);

 return 0;
}
