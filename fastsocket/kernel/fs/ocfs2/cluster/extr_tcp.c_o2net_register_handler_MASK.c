
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rb_node {int dummy; } ;
struct o2net_msg_handler {int nh_unregister_item; int nh_node; int nh_kref; scalar_t__ nh_key; scalar_t__ nh_max_len; scalar_t__ nh_msg_type; int * nh_post_func; void* nh_func_data; int * nh_func; } ;
struct list_head {int dummy; } ;
typedef int o2net_post_msg_handler_func ;
typedef int o2net_msg_handler_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct o2net_msg_handler*) ;
 int FUNC_2 (int *) ;
 struct o2net_msg_handler* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (scalar_t__,scalar_t__,struct rb_node***,struct rb_node**) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(u32 VAR_8, u32 VAR_9, u32 VAR_10,
      o2net_msg_handler_func *VAR_11, void *VAR_12,
      o2net_post_msg_handler_func *VAR_13,
      struct list_head *VAR_14)
{
 struct o2net_msg_handler *VAR_15 = ((void*)0);
 struct rb_node **VAR_16, *VAR_17;
 int VAR_18 = 0;

 if (VAR_10 > VAR_5) {
  FUNC_5(0, "max_len for message handler out of range: %u\n",
   VAR_10);
  VAR_18 = -VAR_1;
  goto out;
 }

 if (!VAR_8) {
  FUNC_5(0, "no message type provided: %u, %p\n", VAR_8, VAR_11);
  VAR_18 = -VAR_1;
  goto out;

 }
 if (!VAR_11) {
  FUNC_5(0, "no message handler provided: %u, %p\n",
         VAR_8, VAR_11);
  VAR_18 = -VAR_1;
  goto out;
 }

        VAR_15 = FUNC_3(sizeof(struct o2net_msg_handler), VAR_3);
 if (VAR_15 == ((void*)0)) {
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_15->nh_func = VAR_11;
 VAR_15->nh_func_data = VAR_12;
 VAR_15->nh_post_func = VAR_13;
 VAR_15->nh_msg_type = VAR_8;
 VAR_15->nh_max_len = VAR_10;
 VAR_15->nh_key = VAR_9;


 FUNC_2(&VAR_15->nh_kref);
 FUNC_0(&VAR_15->nh_unregister_item);

 FUNC_10(&VAR_6);
 if (FUNC_7(VAR_8, VAR_9, &VAR_16, &VAR_17))
  VAR_18 = -VAR_0;
 else {
         FUNC_9(&VAR_15->nh_node, VAR_17, VAR_16);
  FUNC_8(&VAR_15->nh_node, &VAR_7);
  FUNC_4(&VAR_15->nh_unregister_item, VAR_14);

  FUNC_5(VAR_4, "registered handler func %p type %u key %08x\n",
       VAR_11, VAR_8, VAR_9);

  FUNC_6(FUNC_7(VAR_8, VAR_9, &VAR_16,
         &VAR_17) == ((void*)0),
           "couldn't find handler we *just* registerd "
    "for type %u key %08x\n", VAR_8, VAR_9);
 }
 FUNC_11(&VAR_6);
 if (VAR_18)
  goto out;

out:
 if (VAR_18)
  FUNC_1(VAR_15);

 return VAR_18;
}
