
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_blk; struct hw* hw; } ;
struct src {TYPE_1__ rsc; } ;
struct hw {int (* src_set_sa ) (int ,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct src *VAR_0, unsigned int VAR_1)
{
 struct hw *VAR_2;

 VAR_2 = VAR_0->rsc.hw;
 VAR_2->src_set_sa(VAR_0->rsc.ctrl_blk, VAR_1);

 return 0;
}
