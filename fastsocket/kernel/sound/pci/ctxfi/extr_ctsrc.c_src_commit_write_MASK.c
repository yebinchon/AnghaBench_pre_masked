
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int msr; TYPE_1__* ops; int ctrl_blk; struct hw* hw; } ;
struct src {scalar_t__ mode; TYPE_2__ rsc; } ;
struct hw {unsigned int (* src_get_dirty ) (int ) ;int (* src_commit_write ) (struct hw*,int ,int ) ;int (* src_set_dirty ) (int ,unsigned int) ;} ;
struct TYPE_7__ {int (* master ) (TYPE_2__*) ;int (* index ) (TYPE_2__*) ;int (* next_conj ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct hw*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct hw*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct src *VAR_2)
{
 struct hw *VAR_3;
 int VAR_4;
 unsigned int VAR_5 = 0;

 VAR_3 = VAR_2->rsc.hw;
 VAR_2->rsc.ops->master(&VAR_2->rsc);
 if (VAR_2->rsc.msr > 1) {

  VAR_5 = VAR_3->src_get_dirty(VAR_2->rsc.ctrl_blk) & VAR_1;
 }
 VAR_3->src_commit_write(VAR_3, VAR_2->rsc.ops->index(&VAR_2->rsc),
      VAR_2->rsc.ctrl_blk);


 if (VAR_0 == VAR_2->mode)
  return 0;

 for (VAR_4 = 1; VAR_4 < VAR_2->rsc.msr; VAR_4++) {
  VAR_2->rsc.ops->next_conj(&VAR_2->rsc);
  VAR_3->src_set_dirty(VAR_2->rsc.ctrl_blk, VAR_5);
  VAR_3->src_commit_write(VAR_3, VAR_2->rsc.ops->index(&VAR_2->rsc),
       VAR_2->rsc.ctrl_blk);
 }
 VAR_2->rsc.ops->master(&VAR_2->rsc);

 return 0;
}
