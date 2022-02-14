
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mpoa_client {TYPE_4__* in_ops; TYPE_3__* dev; } ;
struct TYPE_12__ {int in_dst_ip; } ;
struct TYPE_11__ {TYPE_2__ in_info; } ;
struct k_message {TYPE_1__ content; void* type; } ;
struct TYPE_15__ {scalar_t__ entry_state; int reply_wait; TYPE_2__ ctrl_info; } ;
typedef TYPE_5__ in_cache_entry ;
typedef int __be32 ;
struct TYPE_14__ {int (* put ) (TYPE_5__*) ;TYPE_5__* (* add_entry ) (int ,struct mpoa_client*) ;TYPE_5__* (* get ) (int ,struct mpoa_client*) ;} ;
struct TYPE_13__ {char* name; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;
 int FUNC_2 (char*,char*) ;
 TYPE_5__* FUNC_3 (int ,struct mpoa_client*) ;
 TYPE_5__* FUNC_4 (int ,struct mpoa_client*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_8(struct k_message *VAR_3, struct mpoa_client *VAR_4)
{
 __be32 VAR_5 = VAR_3->content.in_info.in_dst_ip;
 in_cache_entry *VAR_6;

 VAR_6 = VAR_4->in_ops->get(VAR_5, VAR_4);
 if(VAR_6 == ((void*)0)){
  VAR_6 = VAR_4->in_ops->add_entry(VAR_5, VAR_4);
  VAR_6->entry_state = VAR_1;
  VAR_3->type = VAR_2;
  VAR_3->content.in_info = VAR_6->ctrl_info;
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(&(VAR_6->reply_wait));
  VAR_4->in_ops->put(VAR_6);
  return;
 }

 if(VAR_6->entry_state == VAR_0){
  VAR_6->entry_state = VAR_1;
  VAR_3->type = VAR_2;
  VAR_3->content.in_info = VAR_6->ctrl_info;
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(&(VAR_6->reply_wait));
  VAR_4->in_ops->put(VAR_6);
  return;
 }

 FUNC_2("mpoa: (%s) MPOA_trigger_rcvd: entry already in resolving state\n",
  (VAR_4->dev) ? VAR_4->dev->name : "<unknown>");
 VAR_4->in_ops->put(VAR_6);
 return;
}
