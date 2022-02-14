
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct imapper {int list; scalar_t__ user; scalar_t__ next; scalar_t__ addr; scalar_t__ slot; } ;
struct hw {int (* daio_mgr_commit_write ) (void*,int ) ;int (* daio_mgr_dsb_dai ) (int ,int) ;int (* daio_mgr_dsb_dao ) (int ,int) ;} ;
struct TYPE_3__ {int ctrl_blk; } ;
struct daio_mgr {int init_imap_added; TYPE_1__ mgr; int commit_write; int imap_delete; int imap_add; int daio_disable; int daio_enable; int put_daio; int get_daio; struct imapper* init_imap; int imappers; int imap_lock; int mgr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct daio_mgr*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (void*,int ) ;

int FUNC_10(void *VAR_11, struct daio_mgr **VAR_12)
{
 int VAR_13, VAR_14;
 struct daio_mgr *VAR_15;
 struct imapper *VAR_16;

 *VAR_12 = ((void*)0);
 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_13 = FUNC_4(&VAR_15->mgr, VAR_0, VAR_1, VAR_11);
 if (VAR_13)
  goto error1;

 FUNC_6(&VAR_15->mgr_lock);
 FUNC_6(&VAR_15->imap_lock);
 FUNC_0(&VAR_15->imappers);
 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_3);
 if (!VAR_16) {
  VAR_13 = -VAR_2;
  goto error2;
 }
 VAR_16->slot = VAR_16->addr = VAR_16->next = VAR_16->user = 0;
 FUNC_3(&VAR_16->list, &VAR_15->imappers);
 VAR_15->init_imap = VAR_16;
 VAR_15->init_imap_added = 1;

 VAR_15->get_daio = VAR_9;
 VAR_15->put_daio = VAR_10;
 VAR_15->daio_enable = VAR_8;
 VAR_15->daio_disable = VAR_7;
 VAR_15->imap_add = VAR_4;
 VAR_15->imap_delete = VAR_5;
 VAR_15->commit_write = VAR_6;

 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  ((struct hw *)VAR_11)->daio_mgr_dsb_dao(VAR_15->mgr.ctrl_blk, VAR_14);
  ((struct hw *)VAR_11)->daio_mgr_dsb_dai(VAR_15->mgr.ctrl_blk, VAR_14);
 }
 ((struct hw *)VAR_11)->daio_mgr_commit_write(VAR_11, VAR_15->mgr.ctrl_blk);

 *VAR_12 = VAR_15;

 return 0;

error2:
 FUNC_5(&VAR_15->mgr);
error1:
 FUNC_1(VAR_15);
 return VAR_13;
}
