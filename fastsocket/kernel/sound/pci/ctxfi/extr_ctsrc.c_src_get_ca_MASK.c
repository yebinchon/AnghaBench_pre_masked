
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_blk; TYPE_1__* ops; struct hw* hw; } ;
struct src {TYPE_2__ rsc; } ;
struct hw {int (* src_get_ca ) (struct hw*,int ,int ) ;} ;
struct TYPE_3__ {int (* index ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct hw*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct src *VAR_0)
{
 struct hw *VAR_1;

 VAR_1 = VAR_0->rsc.hw;
 return VAR_1->src_get_ca(VAR_1, VAR_0->rsc.ops->index(&VAR_0->rsc),
      VAR_0->rsc.ctrl_blk);
}
