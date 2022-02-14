
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpoa_client {TYPE_4__* eg_ops; int egress_lock; TYPE_1__* dev; } ;
struct TYPE_6__ {int cache_id; } ;
struct TYPE_7__ {TYPE_2__ eg_info; } ;
struct k_message {TYPE_3__ content; } ;
typedef int eg_cache_entry ;
typedef int __be32 ;
struct TYPE_8__ {int (* put ) (int *) ;int (* remove_entry ) (int *,struct mpoa_client*) ;int * (* get_by_cache_id ) (int ,struct mpoa_client*) ;} ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ,struct mpoa_client*) ;
 int FUNC_2 (int *,struct mpoa_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct k_message *VAR_0, struct mpoa_client *VAR_1)
{
 __be32 VAR_2 = VAR_0->content.eg_info.cache_id;
 eg_cache_entry *VAR_3 = VAR_1->eg_ops->get_by_cache_id(VAR_2, VAR_1);

 if (VAR_3 == ((void*)0)) {
  FUNC_0("mpoa: (%s) egress_purge_rcvd: purge for a non-existing entry\n", VAR_1->dev->name);
  return;
 }

 FUNC_4(&VAR_1->egress_lock);
 VAR_1->eg_ops->remove_entry(VAR_3, VAR_1);
 FUNC_5(&VAR_1->egress_lock);

 VAR_1->eg_ops->put(VAR_3);

 return;
}
