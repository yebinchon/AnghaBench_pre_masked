
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct mpoa_client {int ingress_lock; TYPE_3__* in_ops; TYPE_4__* in_cache; } ;
struct TYPE_7__ {scalar_t__ holding_time; int in_dst_ip; } ;
struct TYPE_6__ {scalar_t__ tv_sec; } ;
struct TYPE_9__ {TYPE_2__ ctrl_info; TYPE_1__ tv; struct TYPE_9__* next; scalar_t__ count; } ;
typedef TYPE_4__ in_cache_entry ;
struct TYPE_8__ {int (* remove_entry ) (TYPE_4__*,struct mpoa_client*) ;} ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_4__*,struct mpoa_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mpoa_client *VAR_0)
{
 in_cache_entry *VAR_1, *VAR_2;
 struct timeval VAR_3;

 FUNC_0(&VAR_3);

 FUNC_3(&VAR_0->ingress_lock);
 VAR_1 = VAR_0->in_cache;
 while(VAR_1 != ((void*)0)){
  VAR_1->count=0;
  VAR_2 = VAR_1->next;
  if((VAR_3.tv_sec - VAR_1->tv.tv_sec)
     > VAR_1->ctrl_info.holding_time){
   FUNC_1("mpoa: mpoa_caches.c: holding time expired, ip = %pI4\n",
    &VAR_1->ctrl_info.in_dst_ip);
   VAR_0->in_ops->remove_entry(VAR_1, VAR_0);
  }
  VAR_1 = VAR_2;
 }
 FUNC_4(&VAR_0->ingress_lock);

 return;
}
