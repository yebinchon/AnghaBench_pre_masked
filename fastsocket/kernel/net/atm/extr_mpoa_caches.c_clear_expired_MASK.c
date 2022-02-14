
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct mpoa_client {int egress_lock; TYPE_4__* eg_ops; TYPE_5__* eg_cache; } ;
struct TYPE_9__ {scalar_t__ holding_time; int cache_id; } ;
struct TYPE_8__ {TYPE_3__ eg_info; } ;
struct k_message {TYPE_2__ content; int type; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_11__ {TYPE_3__ ctrl_info; TYPE_1__ tv; struct TYPE_11__* next; } ;
typedef TYPE_5__ eg_cache_entry ;
struct TYPE_10__ {int (* remove_entry ) (TYPE_5__*,struct mpoa_client*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct k_message*,struct mpoa_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,struct mpoa_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mpoa_client *VAR_1)
{
 eg_cache_entry *VAR_2, *VAR_3;
 struct timeval VAR_4;
 struct k_message VAR_5;

 FUNC_0(&VAR_4);

 FUNC_5(&VAR_1->egress_lock);
 VAR_2 = VAR_1->eg_cache;
 while(VAR_2 != ((void*)0)){
  VAR_3 = VAR_2->next;
  if((VAR_4.tv_sec - VAR_2->tv.tv_sec)
     > VAR_2->ctrl_info.holding_time){
   VAR_5.type = VAR_0;
   VAR_5.content.eg_info = VAR_2->ctrl_info;
   FUNC_1("mpoa: mpoa_caches.c: egress_cache: holding time expired, cache_id = %lu.\n",FUNC_3(VAR_2->ctrl_info.cache_id));
   FUNC_2(&VAR_5, VAR_1);
   VAR_1->eg_ops->remove_entry(VAR_2, VAR_1);
  }
  VAR_2 = VAR_3;
 }
 FUNC_6(&VAR_1->egress_lock);

 return;
}
