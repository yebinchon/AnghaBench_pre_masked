
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* dai_put_ctrl_blk ) (int *) ;} ;
struct dai {int daio; int * ctrl_blk; scalar_t__ hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dai *VAR_0)
{
 ((struct hw *)VAR_0->hw)->dai_put_ctrl_blk(VAR_0->ctrl_blk);
 VAR_0->hw = VAR_0->ctrl_blk = ((void*)0);
 FUNC_0(&VAR_0->daio);
 return 0;
}
