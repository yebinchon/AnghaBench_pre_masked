
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw {int (* dai_get_ctrl_blk ) (int *) ;int (* dai_commit_write ) (struct hw*,int ,int ) ;int (* dai_srt_set_et ) (int ,int ) ;int (* dai_srt_set_ec ) (int ,int ) ;int (* dai_srt_set_drat ) (int ,int ) ;int (* dai_srt_set_rsr ) (int ,unsigned int) ;} ;
struct TYPE_4__ {struct hw* hw; } ;
struct daio_mgr {TYPE_1__ mgr; } ;
struct daio_desc {unsigned int msr; } ;
struct TYPE_5__ {int type; } ;
struct dai {TYPE_2__ daio; int ctrl_blk; struct hw* hw; int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct hw*) ;
 int FUNC_1 (TYPE_2__*,struct daio_desc const*,struct hw*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct hw*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dai *VAR_1,
   const struct daio_desc *VAR_2,
   struct daio_mgr *VAR_3)
{
 int VAR_4;
 struct hw *VAR_5 = VAR_3->mgr.hw;
 unsigned int VAR_6, VAR_7;

 VAR_4 = FUNC_1(&VAR_1->daio, VAR_2, VAR_3->mgr.hw);
 if (VAR_4)
  return VAR_4;

 VAR_1->ops = &VAR_0;
 VAR_1->hw = VAR_3->mgr.hw;
 VAR_4 = VAR_5->dai_get_ctrl_blk(&VAR_1->ctrl_blk);
 if (VAR_4)
  goto error1;

 for (VAR_6 = 0, VAR_7 = VAR_2->msr; VAR_7 > 1; VAR_7 >>= 1)
  VAR_6++;

 VAR_5->dai_srt_set_rsr(VAR_1->ctrl_blk, VAR_6);
 VAR_5->dai_srt_set_drat(VAR_1->ctrl_blk, 0);

 VAR_5->dai_srt_set_ec(VAR_1->ctrl_blk, 0);
 VAR_5->dai_srt_set_et(VAR_1->ctrl_blk, 0);
 VAR_5->dai_commit_write(VAR_5,
  FUNC_0(VAR_1->daio.type, VAR_1->hw), VAR_1->ctrl_blk);

 return 0;

error1:
 FUNC_2(&VAR_1->daio);
 return VAR_4;
}
