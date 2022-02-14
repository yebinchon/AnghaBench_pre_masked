
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc_mgr {int ctrl_blk; struct hw* hw; } ;
struct srcimp_mgr {struct rsc_mgr mgr; } ;
struct imapper {int addr; int next; int user; int slot; } ;
struct hw {int (* srcimp_mgr_commit_write ) (struct hw*,int ) ;int (* srcimp_mgr_set_imapaddr ) (int ,int ) ;int (* srcimp_mgr_set_imapnxt ) (int ,int ) ;int (* srcimp_mgr_set_imapuser ) (int ,int ) ;int (* srcimp_mgr_set_imaparc ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, struct imapper *VAR_1)
{
 struct rsc_mgr *VAR_2 = &((struct srcimp_mgr *)VAR_0)->mgr;
 struct hw *VAR_3 = VAR_2->hw;

 VAR_3->srcimp_mgr_set_imaparc(VAR_2->ctrl_blk, VAR_1->slot);
 VAR_3->srcimp_mgr_set_imapuser(VAR_2->ctrl_blk, VAR_1->user);
 VAR_3->srcimp_mgr_set_imapnxt(VAR_2->ctrl_blk, VAR_1->next);
 VAR_3->srcimp_mgr_set_imapaddr(VAR_2->ctrl_blk, VAR_1->addr);
 VAR_3->srcimp_mgr_commit_write(VAR_2->hw, VAR_2->ctrl_blk);

 return 0;
}
