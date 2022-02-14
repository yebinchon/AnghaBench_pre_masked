
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; int hash; scalar_t__ name; } ;
struct dlm_lock_resource {int refmap; int lvb; int tracking; scalar_t__ last_used; int state; int spinlock; int refs; struct dlm_ctxt* dlm; scalar_t__ inflight_locks; scalar_t__ migration_pending; int asts_reserved; int purge; int recovering; int dirty; int blocked; int converting; int granted; int hash_node; int wq; TYPE_1__ lockname; } ;
struct dlm_ctxt {int spinlock; int tracking_list; int res_cur_count; int res_tot_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (char const*,unsigned int) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock_resource*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,char const*,unsigned int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct dlm_ctxt *VAR_3,
        struct dlm_lock_resource *VAR_4,
        const char *VAR_5, unsigned int VAR_6)
{
 char *VAR_7;





 VAR_7 = (char *) VAR_4->lockname.name;
 FUNC_10(VAR_7, VAR_5, VAR_6);

 VAR_4->lockname.len = VAR_6;
 VAR_4->lockname.hash = FUNC_5(VAR_5, VAR_6);

 FUNC_7(&VAR_4->wq);
 FUNC_13(&VAR_4->spinlock);
 FUNC_0(&VAR_4->hash_node);
 FUNC_1(&VAR_4->granted);
 FUNC_1(&VAR_4->converting);
 FUNC_1(&VAR_4->blocked);
 FUNC_1(&VAR_4->dirty);
 FUNC_1(&VAR_4->recovering);
 FUNC_1(&VAR_4->purge);
 FUNC_1(&VAR_4->tracking);
 FUNC_3(&VAR_4->asts_reserved, 0);
 VAR_4->migration_pending = 0;
 VAR_4->inflight_locks = 0;


 FUNC_4(VAR_3);
 VAR_4->dlm = VAR_3;

 FUNC_8(&VAR_4->refs);

 FUNC_2(&VAR_3->res_tot_count);
 FUNC_2(&VAR_3->res_cur_count);


 FUNC_12(&VAR_4->spinlock);
 FUNC_6(VAR_3, VAR_4, VAR_1);
 FUNC_14(&VAR_4->spinlock);

 VAR_4->state = VAR_0;

 VAR_4->last_used = 0;

 FUNC_12(&VAR_3->spinlock);
 FUNC_9(&VAR_4->tracking, &VAR_3->tracking_list);
 FUNC_14(&VAR_3->spinlock);

 FUNC_11(VAR_4->lvb, 0, VAR_2);
 FUNC_11(VAR_4->refmap, 0, sizeof(VAR_4->refmap));
}
