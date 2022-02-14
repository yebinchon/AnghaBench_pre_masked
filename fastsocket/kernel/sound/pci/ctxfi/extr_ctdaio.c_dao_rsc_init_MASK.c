
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw {int (* dao_get_ctrl_blk ) (int *) ;int (* daio_mgr_commit_write ) (struct hw*,int ) ;int (* daio_mgr_enb_dao ) (int ,int ) ;int (* daio_mgr_dao_init ) (int ,int ,unsigned int) ;int (* daio_mgr_dsb_dao ) (int ,int ) ;} ;
struct TYPE_5__ {int type; } ;
struct dao {TYPE_2__ daio; int * imappers; int ctrl_blk; struct hw* hw; struct daio_mgr* mgr; int * ops; } ;
struct TYPE_4__ {int ctrl_blk; struct hw* hw; } ;
struct daio_mgr {TYPE_1__ mgr; } ;
struct daio_desc {int msr; int passthru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct hw*) ;
 int FUNC_1 (TYPE_2__*,struct daio_desc const*,struct hw*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hw*,int ) ;
 int FUNC_8 (int ,int ,unsigned int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_11(struct dao *VAR_3,
   const struct daio_desc *VAR_4,
   struct daio_mgr *VAR_5)
{
 struct hw *VAR_6 = VAR_5->mgr.hw;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_3->daio, VAR_4, VAR_5->mgr.hw);
 if (VAR_8)
  return VAR_8;

 VAR_3->imappers = FUNC_4(sizeof(void *)*VAR_4->msr*2, VAR_1);
 if (!VAR_3->imappers) {
  VAR_8 = -VAR_0;
  goto error1;
 }
 VAR_3->ops = &VAR_2;
 VAR_3->mgr = VAR_5;
 VAR_3->hw = VAR_6;
 VAR_8 = VAR_6->dao_get_ctrl_blk(&VAR_3->ctrl_blk);
 if (VAR_8)
  goto error2;

 VAR_6->daio_mgr_dsb_dao(VAR_5->mgr.ctrl_blk,
   FUNC_0(VAR_3->daio.type, VAR_6));
 VAR_6->daio_mgr_commit_write(VAR_6, VAR_5->mgr.ctrl_blk);

 VAR_7 = (VAR_4->msr & 0x7) | (VAR_4->passthru << 3);
 VAR_6->daio_mgr_dao_init(VAR_5->mgr.ctrl_blk,
   FUNC_0(VAR_3->daio.type, VAR_6), VAR_7);
 VAR_6->daio_mgr_enb_dao(VAR_5->mgr.ctrl_blk,
   FUNC_0(VAR_3->daio.type, VAR_6));
 VAR_6->daio_mgr_commit_write(VAR_6, VAR_5->mgr.ctrl_blk);

 return 0;

error2:
 FUNC_3(VAR_3->imappers);
 VAR_3->imappers = ((void*)0);
error1:
 FUNC_2(&VAR_3->daio);
 return VAR_8;
}
