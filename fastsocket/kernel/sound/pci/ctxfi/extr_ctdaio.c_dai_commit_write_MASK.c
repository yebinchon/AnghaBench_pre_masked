
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* dai_commit_write ) (scalar_t__,int ,int ) ;} ;
struct TYPE_2__ {int type; } ;
struct dai {int ctrl_blk; scalar_t__ hw; TYPE_1__ daio; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dai *VAR_0)
{
 ((struct hw *)VAR_0->hw)->dai_commit_write(VAR_0->hw,
  FUNC_0(VAR_0->daio.type, VAR_0->hw), VAR_0->ctrl_blk);
 return 0;
}
