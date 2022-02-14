
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mpoa_client {TYPE_5__* eg_ops; int * eg_cache; TYPE_4__* in_cache; TYPE_3__* in_ops; } ;
struct k_message {int type; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_9__ {int in_dst_ip; } ;
struct TYPE_14__ {TYPE_2__* prev; TYPE_4__* next; TYPE_1__ ctrl_info; struct atm_vcc* shortcut; } ;
typedef TYPE_6__ in_cache_entry ;
typedef int eg_cache_entry ;
struct TYPE_13__ {int (* put ) (int *) ;int * (* get_by_vcc ) (struct atm_vcc*,struct mpoa_client*) ;} ;
struct TYPE_12__ {TYPE_2__* prev; } ;
struct TYPE_11__ {int (* put ) (TYPE_6__*) ;} ;
struct TYPE_10__ {TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;
 int FUNC_2 (TYPE_6__*) ;
 int * FUNC_3 (struct atm_vcc*,struct mpoa_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atm_vcc*,int ) ;

__attribute__((used)) static void FUNC_6(in_cache_entry *VAR_2,
      struct mpoa_client *VAR_3)
{
 struct atm_vcc *VAR_4;
 struct k_message VAR_5;

 VAR_4 = VAR_2->shortcut;
 FUNC_0("mpoa: mpoa_caches.c: removing an ingress entry, ip = %pI4\n",
  &VAR_2->ctrl_info.in_dst_ip);

 if (VAR_2->prev != ((void*)0))
  VAR_2->prev->next = VAR_2->next;
 else
  VAR_3->in_cache = VAR_2->next;
 if (VAR_2->next != ((void*)0))
  VAR_2->next->prev = VAR_2->prev;
 VAR_3->in_ops->put(VAR_2);
 if(VAR_3->in_cache == ((void*)0) && VAR_3->eg_cache == ((void*)0)){
  VAR_5.type = VAR_1;
  FUNC_1(&VAR_5,VAR_3);
 }


 if (VAR_4 != ((void*)0)) {
  eg_cache_entry *VAR_6 = VAR_3->eg_ops->get_by_vcc(VAR_4, VAR_3);
  if (VAR_6 != ((void*)0)) {
   VAR_3->eg_ops->put(VAR_6);
   return;
  }
  FUNC_5(VAR_4, -VAR_0);
 }

 return;
}
