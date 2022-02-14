
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsc {TYPE_1__* ops; } ;
struct hw {int (* dai_srt_set_srcm ) (int ,int ) ;} ;
struct dai {int ctrl_blk; scalar_t__ hw; } ;
struct TYPE_2__ {int (* index ) (struct rsc*) ;int (* master ) (struct rsc*) ;} ;


 int FUNC_0 (struct rsc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rsc*) ;

__attribute__((used)) static int FUNC_3(struct dai *VAR_0, struct rsc *VAR_1)
{
 VAR_1->ops->master(VAR_1);
 ((struct hw *)VAR_0->hw)->dai_srt_set_srcm(VAR_0->ctrl_blk,
      VAR_1->ops->index(VAR_1));
 return 0;
}
