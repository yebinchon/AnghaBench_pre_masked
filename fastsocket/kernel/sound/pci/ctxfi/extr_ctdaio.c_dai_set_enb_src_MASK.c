
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* dai_srt_set_ec ) (int ,unsigned int) ;} ;
struct dai {int ctrl_blk; scalar_t__ hw; } ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dai *VAR_0, unsigned int VAR_1)
{
 ((struct hw *)VAR_0->hw)->dai_srt_set_ec(VAR_0->ctrl_blk, VAR_1);
 return 0;
}
