
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct mpoa_client {TYPE_4__* eg_ops; int egress_lock; TYPE_3__* dev; } ;
struct TYPE_5__ {scalar_t__ holding_time; int cache_id; } ;
struct TYPE_6__ {TYPE_1__ eg_info; } ;
struct k_message {TYPE_2__ content; } ;
typedef int eg_cache_entry ;
struct TYPE_8__ {int (* put ) (int *) ;int (* remove_entry ) (int *,struct mpoa_client*) ;int (* update ) (int *,scalar_t__) ;int * (* add_entry ) (struct k_message*,struct mpoa_client*) ;int * (* get_by_cache_id ) (int ,struct mpoa_client*) ;} ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (char*,int ,int *,scalar_t__) ;
 int * FUNC_1 (int ,struct mpoa_client*) ;
 int * FUNC_2 (struct k_message*,struct mpoa_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,struct mpoa_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( struct k_message * VAR_0, struct mpoa_client * VAR_1)
{
 uint16_t VAR_2;
 eg_cache_entry *VAR_3 = VAR_1->eg_ops->get_by_cache_id(VAR_0->content.eg_info.cache_id, VAR_1);

 VAR_2 = VAR_0->content.eg_info.holding_time;
 FUNC_0("mpoa: (%s) MPOA_cache_impos_rcvd: entry = %p, holding_time = %u\n",
        VAR_1->dev->name, VAR_3, VAR_2);
 if(VAR_3 == ((void*)0) && VAR_2) {
  VAR_3 = VAR_1->eg_ops->add_entry(VAR_0, VAR_1);
  VAR_1->eg_ops->put(VAR_3);
  return;
 }
 if(VAR_2){
  VAR_1->eg_ops->update(VAR_3, VAR_2);
  return;
 }

 FUNC_7(&VAR_1->egress_lock);
 VAR_1->eg_ops->remove_entry(VAR_3, VAR_1);
 FUNC_8(&VAR_1->egress_lock);

 VAR_1->eg_ops->put(VAR_3);

 return;
}
