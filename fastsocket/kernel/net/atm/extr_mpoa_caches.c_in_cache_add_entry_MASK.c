
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mpc_p4; } ;
struct mpoa_client {int ingress_lock; TYPE_1__ parameters; int mps_ctrl_addr; TYPE_3__* in_cache; } ;
struct TYPE_7__ {int holding_time; int in_dst_ip; } ;
struct TYPE_8__ {int count; int use; TYPE_2__ ctrl_info; int entry_state; int retry_time; int tv; int MPS_ctrl_ATM_addr; struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_3__ in_cache_entry ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static in_cache_entry *FUNC_9(__be32 VAR_4,
       struct mpoa_client *VAR_5)
{
 in_cache_entry *VAR_6 = FUNC_4(sizeof(in_cache_entry), VAR_1);

 if (VAR_6 == ((void*)0)) {
  FUNC_6("mpoa: mpoa_caches.c: new_in_cache_entry: out of memory\n");
  return ((void*)0);
 }

 FUNC_3("mpoa: mpoa_caches.c: adding an ingress entry, ip = %pI4\n", &VAR_4);

 FUNC_1(&VAR_6->use, 1);
 FUNC_3("mpoa: mpoa_caches.c: new_in_cache_entry: about to lock\n");
 FUNC_7(&VAR_5->ingress_lock);
 VAR_6->next = VAR_5->in_cache;
 VAR_6->prev = ((void*)0);
 if (VAR_5->in_cache != ((void*)0))
  VAR_5->in_cache->prev = VAR_6;
 VAR_5->in_cache = VAR_6;

 FUNC_5(VAR_6->MPS_ctrl_ATM_addr, VAR_5->mps_ctrl_addr, VAR_0);
 VAR_6->ctrl_info.in_dst_ip = VAR_4;
 FUNC_2(&(VAR_6->tv));
 VAR_6->retry_time = VAR_5->parameters.mpc_p4;
 VAR_6->count = 1;
 VAR_6->entry_state = VAR_3;
 VAR_6->ctrl_info.holding_time = VAR_2;
 FUNC_0(&VAR_6->use);

 FUNC_8(&VAR_5->ingress_lock);
 FUNC_3("mpoa: mpoa_caches.c: new_in_cache_entry: unlocked\n");

 return VAR_6;
}
