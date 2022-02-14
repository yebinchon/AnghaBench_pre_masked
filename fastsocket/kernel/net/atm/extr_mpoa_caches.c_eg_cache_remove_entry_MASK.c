
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpoa_client {TYPE_4__* in_ops; TYPE_3__* eg_cache; int * in_cache; TYPE_2__* eg_ops; } ;
struct k_message {int type; } ;
struct atm_vcc {int dummy; } ;
typedef int in_cache_entry ;
struct TYPE_12__ {TYPE_1__* prev; TYPE_3__* next; struct atm_vcc* shortcut; } ;
typedef TYPE_5__ eg_cache_entry ;
struct TYPE_11__ {int (* put ) (int *) ;int * (* get_by_vcc ) (struct atm_vcc*,struct mpoa_client*) ;} ;
struct TYPE_10__ {TYPE_1__* prev; } ;
struct TYPE_9__ {int (* put ) (TYPE_5__*) ;} ;
struct TYPE_8__ {TYPE_3__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;
 int FUNC_2 (TYPE_5__*) ;
 int * FUNC_3 (struct atm_vcc*,struct mpoa_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atm_vcc*,int ) ;

__attribute__((used)) static void FUNC_6(eg_cache_entry *VAR_2,
      struct mpoa_client *VAR_3)
{
 struct atm_vcc *VAR_4;
 struct k_message VAR_5;

 VAR_4 = VAR_2->shortcut;
 FUNC_0("mpoa: mpoa_caches.c: removing an egress entry.\n");
 if (VAR_2->prev != ((void*)0))
  VAR_2->prev->next = VAR_2->next;
 else
  VAR_3->eg_cache = VAR_2->next;
 if (VAR_2->next != ((void*)0))
  VAR_2->next->prev = VAR_2->prev;
 VAR_3->eg_ops->put(VAR_2);
 if(VAR_3->in_cache == ((void*)0) && VAR_3->eg_cache == ((void*)0)){
  VAR_5.type = VAR_1;
  FUNC_1(&VAR_5,VAR_3);
 }


 if (VAR_4 != ((void*)0)) {
  in_cache_entry *VAR_6 = VAR_3->in_ops->get_by_vcc(VAR_4, VAR_3);
  if (VAR_6 != ((void*)0)) {
   VAR_3->in_ops->put(VAR_6);
   return;
  }
  FUNC_5(VAR_4, -VAR_0);
 }

 return;
}
