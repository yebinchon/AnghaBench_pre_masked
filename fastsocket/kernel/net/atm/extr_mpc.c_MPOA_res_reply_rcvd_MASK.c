
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mpoa_client {TYPE_4__* in_ops; TYPE_3__* dev; } ;
struct TYPE_12__ {int in_dst_ip; } ;
struct TYPE_13__ {TYPE_1__ in_info; } ;
struct k_message {TYPE_2__ content; } ;
struct TYPE_16__ {scalar_t__ entry_state; scalar_t__ shortcut; scalar_t__ refresh_time; int reply_wait; int tv; TYPE_1__ ctrl_info; } ;
typedef TYPE_5__ in_cache_entry ;
typedef int __be32 ;
struct TYPE_15__ {int (* put ) (TYPE_5__*) ;TYPE_5__* (* get ) (int ,struct mpoa_client*) ;} ;
struct TYPE_14__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct k_message*,struct mpoa_client*,TYPE_5__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 TYPE_5__* FUNC_5 (int ,struct mpoa_client*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_10(struct k_message *VAR_2, struct mpoa_client *VAR_3)
{
 __be32 VAR_4 = VAR_2->content.in_info.in_dst_ip;
 in_cache_entry *VAR_5 = VAR_3->in_ops->get(VAR_4, VAR_3);

 FUNC_3("mpoa: (%s) MPOA_res_reply_rcvd: ip %pI4\n",
  VAR_3->dev->name, &VAR_4);
 FUNC_1("mpoa: (%s) MPOA_res_reply_rcvd() entry = %p", VAR_3->dev->name, VAR_5);
 if(VAR_5 == ((void*)0)){
  FUNC_4("\nmpoa: (%s) ARGH, received res. reply for an entry that doesn't exist.\n", VAR_3->dev->name);
  return;
 }
 FUNC_1(" entry_state = %d ", VAR_5->entry_state);

 if (VAR_5->entry_state == VAR_0) {
  FUNC_4("\nmpoa: (%s) MPOA_res_reply_rcvd for RESOLVED entry!\n", VAR_3->dev->name);
  VAR_3->in_ops->put(VAR_5);
  return;
 }

 VAR_5->ctrl_info = VAR_2->content.in_info;
 FUNC_2(&(VAR_5->tv));
 FUNC_2(&(VAR_5->reply_wait));
 VAR_5->refresh_time = 0;
 FUNC_1("entry->shortcut = %p\n", VAR_5->shortcut);

 if(VAR_5->entry_state == VAR_1 && VAR_5->shortcut != ((void*)0)){
  VAR_5->entry_state = VAR_0;
  VAR_3->in_ops->put(VAR_5);
  return;
 }

 if (VAR_5->shortcut != ((void*)0)) {
  FUNC_4("mpoa: (%s) MPOA_res_reply_rcvd: entry->shortcut != NULL, impossible!\n",
         VAR_3->dev->name);
  VAR_3->in_ops->put(VAR_5);
  return;
 }

 FUNC_0(VAR_2, VAR_3, VAR_5);
 VAR_5->entry_state = VAR_0;
 VAR_3->in_ops->put(VAR_5);

 return;

}
