
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpoa_client {int egress_lock; TYPE_2__* eg_cache; } ;
struct TYPE_4__ {scalar_t__ cache_id; } ;
struct TYPE_5__ {struct TYPE_5__* next; int use; TYPE_1__ ctrl_info; } ;
typedef TYPE_2__ eg_cache_entry ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static eg_cache_entry *FUNC_3(__be32 VAR_0, struct mpoa_client *VAR_1)
{
 eg_cache_entry *VAR_2;

 FUNC_1(&VAR_1->egress_lock);
 VAR_2 = VAR_1->eg_cache;
 while(VAR_2 != ((void*)0)){
  if(VAR_2->ctrl_info.cache_id == VAR_0){
   FUNC_0(&VAR_2->use);
   FUNC_2(&VAR_1->egress_lock);
   return VAR_2;
  }
  VAR_2 = VAR_2->next;
 }
 FUNC_2(&VAR_1->egress_lock);

 return ((void*)0);
}
