
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_master_list_entry {int type; unsigned int mnamelen; int node_map; int vote_map; int mnamehash; int mname; struct dlm_lock_resource* mleres; scalar_t__ inuse; void* new_master; void* master; int response_map; int mle_refs; int woken; int wq; int spinlock; int maybe_map; int hb_events; int master_hash_node; struct dlm_ctxt* dlm; } ;
struct TYPE_2__ {char const* name; int len; int hash; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {char const* domain_map; int node_num; int * mle_cur_count; int * mle_tot_count; int spinlock; } ;
typedef enum dlm_mle_type { ____Placeholder_dlm_mle_type } dlm_mle_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* VAR_3 ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct dlm_master_list_entry *VAR_4,
   enum dlm_mle_type VAR_5,
   struct dlm_ctxt *VAR_6,
   struct dlm_lock_resource *VAR_7,
   const char *VAR_8,
   unsigned int VAR_9)
{
 FUNC_4(&VAR_6->spinlock);

 VAR_4->dlm = VAR_6;
 VAR_4->type = VAR_5;
 FUNC_1(&VAR_4->master_hash_node);
 FUNC_2(&VAR_4->hb_events);
 FUNC_12(VAR_4->maybe_map, 0, sizeof(VAR_4->maybe_map));
 FUNC_13(&VAR_4->spinlock);
 FUNC_9(&VAR_4->wq);
 FUNC_6(&VAR_4->woken, 0);
 FUNC_10(&VAR_4->mle_refs);
 FUNC_12(VAR_4->response_map, 0, sizeof(VAR_4->response_map));
 VAR_4->master = VAR_3;
 VAR_4->new_master = VAR_3;
 VAR_4->inuse = 0;

 FUNC_0(VAR_4->type != VAR_0 &&
        VAR_4->type != VAR_1 &&
        VAR_4->type != VAR_2);

 if (VAR_4->type == VAR_1) {
  FUNC_0(!VAR_7);
  VAR_4->mleres = VAR_7;
  FUNC_11(VAR_4->mname, VAR_7->lockname.name, VAR_7->lockname.len);
  VAR_4->mnamelen = VAR_7->lockname.len;
  VAR_4->mnamehash = VAR_7->lockname.hash;
 } else {
  FUNC_0(!VAR_8);
  VAR_4->mleres = ((void*)0);
  FUNC_11(VAR_4->mname, VAR_8, VAR_9);
  VAR_4->mnamelen = VAR_9;
  VAR_4->mnamehash = FUNC_8(VAR_8, VAR_9);
 }

 FUNC_5(&VAR_6->mle_tot_count[VAR_4->type]);
 FUNC_5(&VAR_6->mle_cur_count[VAR_4->type]);


 FUNC_11(VAR_4->node_map, VAR_6->domain_map, sizeof(VAR_4->node_map));
 FUNC_11(VAR_4->vote_map, VAR_6->domain_map, sizeof(VAR_4->vote_map));
 FUNC_7(VAR_6->node_num, VAR_4->vote_map);
 FUNC_7(VAR_6->node_num, VAR_4->node_map);


 FUNC_3(VAR_6, VAR_4);
}
