
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpoa_client {int egress_lock; int mps_ctrl_addr; TYPE_3__* eg_cache; } ;
struct TYPE_7__ {int mps_ip; int cache_id; int eg_dst_ip; } ;
struct TYPE_6__ {TYPE_2__ eg_info; } ;
struct k_message {TYPE_1__ content; } ;
struct TYPE_8__ {int use; TYPE_2__ ctrl_info; int entry_state; int tv; int MPS_ctrl_ATM_addr; struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_3__ eg_cache_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static eg_cache_entry *FUNC_10(struct k_message *VAR_3, struct mpoa_client *VAR_4)
{
 eg_cache_entry *VAR_5 = FUNC_4(sizeof(eg_cache_entry), VAR_2);

 if (VAR_5 == ((void*)0)) {
  FUNC_7("mpoa: mpoa_caches.c: new_eg_cache_entry: out of memory\n");
  return ((void*)0);
 }

 FUNC_3("mpoa: mpoa_caches.c: adding an egress entry, ip = %pI4, this should be our IP\n",
  &VAR_3->content.eg_info.eg_dst_ip);

 FUNC_1(&VAR_5->use, 1);
 FUNC_3("mpoa: mpoa_caches.c: new_eg_cache_entry: about to lock\n");
 FUNC_8(&VAR_4->egress_lock);
 VAR_5->next = VAR_4->eg_cache;
 VAR_5->prev = ((void*)0);
 if (VAR_4->eg_cache != ((void*)0))
  VAR_4->eg_cache->prev = VAR_5;
 VAR_4->eg_cache = VAR_5;

 FUNC_5(VAR_5->MPS_ctrl_ATM_addr, VAR_4->mps_ctrl_addr, VAR_0);
 VAR_5->ctrl_info = VAR_3->content.eg_info;
 FUNC_2(&(VAR_5->tv));
 VAR_5->entry_state = VAR_1;
 FUNC_3("mpoa: mpoa_caches.c: new_eg_cache_entry cache_id %lu\n", FUNC_6(VAR_5->ctrl_info.cache_id));
 FUNC_3("mpoa: mpoa_caches.c: mps_ip = %pI4\n",
  &VAR_5->ctrl_info.mps_ip);
 FUNC_0(&VAR_5->use);

 FUNC_9(&VAR_4->egress_lock);
 FUNC_3("mpoa: mpoa_caches.c: new_eg_cache_entry: unlocked\n");

 return VAR_5;
}
