
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ctrl_blk; struct hw* hw; } ;
struct src_mgr {TYPE_1__ mgr; } ;
struct TYPE_9__ {int msr; TYPE_2__* ops; } ;
struct src {TYPE_3__ rsc; } ;
struct hw {int (* src_mgr_dsb_src ) (int ,int ) ;} ;
struct TYPE_8__ {int (* master ) (TYPE_3__*) ;int (* next_conj ) (TYPE_3__*) ;int (* index ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct src_mgr *VAR_0, struct src *VAR_1)
{
 struct hw *VAR_2 = VAR_0->mgr.hw;
 int VAR_3;

 VAR_1->rsc.ops->master(&VAR_1->rsc);
 for (VAR_3 = 0; VAR_3 < VAR_1->rsc.msr; VAR_3++) {
  VAR_2->src_mgr_dsb_src(VAR_0->mgr.ctrl_blk,
        VAR_1->rsc.ops->index(&VAR_1->rsc));
  VAR_1->rsc.ops->next_conj(&VAR_1->rsc);
 }
 VAR_1->rsc.ops->master(&VAR_1->rsc);

 return 0;
}
