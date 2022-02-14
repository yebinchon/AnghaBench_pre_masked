
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_blk; } ;
struct src_mgr {TYPE_1__ mgr; int commit_write; int src_disable; int src_enable; int src_enable_s; int put_src; int get_src; int mgr_lock; } ;
struct hw {int (* src_mgr_commit_write ) (void*,int ) ;int (* src_mgr_dsb_src ) (int ,int) ;int (* src_dirty_conj_mask ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct src_mgr*) ;
 struct src_mgr* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*,int ) ;

int FUNC_7(void *VAR_11, struct src_mgr **VAR_12)
{
 int VAR_13, VAR_14;
 struct src_mgr *VAR_15;

 *VAR_12 = ((void*)0);
 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_2(&VAR_15->mgr, VAR_2, VAR_3, VAR_11);
 if (VAR_13)
  goto error1;

 FUNC_3(&VAR_15->mgr_lock);
 VAR_4 = ((struct hw *)VAR_11)->src_dirty_conj_mask();

 VAR_15->get_src = VAR_5;
 VAR_15->put_src = VAR_6;
 VAR_15->src_enable_s = VAR_9;
 VAR_15->src_enable = VAR_8;
 VAR_15->src_disable = VAR_7;
 VAR_15->commit_write = VAR_10;


 for (VAR_14 = 0; VAR_14 < 256; VAR_14++)
  ((struct hw *)VAR_11)->src_mgr_dsb_src(VAR_15->mgr.ctrl_blk, VAR_14);

 ((struct hw *)VAR_11)->src_mgr_commit_write(VAR_11, VAR_15->mgr.ctrl_blk);

 *VAR_12 = VAR_15;

 return 0;

error1:
 FUNC_0(VAR_15);
 return VAR_13;
}
