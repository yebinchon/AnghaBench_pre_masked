
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int unchar ;
typedef scalar_t__ u32 ;
struct tipc_portid {int dummy; } ;
struct tipc_name_seq {int dummy; } ;
struct subscriber {scalar_t__ port_ref; int * lock; int subscriber_list; int subscription_list; } ;
struct sk_buff {int dummy; } ;
struct iovec {int member_1; int * member_0; } ;
struct TYPE_4__ {int * lock; } ;
struct TYPE_6__ {TYPE_1__ publ; } ;
struct TYPE_5__ {int lock; int subscriber_list; int user_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct subscriber*) ;
 struct subscriber* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct subscriber*,scalar_t__,struct sk_buff**,int const*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__,struct tipc_portid const*) ;
 int FUNC_8 (int ,struct subscriber*,scalar_t__,int *,int *,int ,int *,int *,int (*) (struct subscriber*,scalar_t__,struct sk_buff**,int const*,scalar_t__),int *,scalar_t__*) ;
 TYPE_3__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int,struct iovec*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void *VAR_3,
       u32 VAR_4,
       struct sk_buff **VAR_5,
       const unchar *VAR_6,
       u32 VAR_7,
       u32 VAR_8,
       struct tipc_portid const *VAR_9,
       struct tipc_name_seq const *VAR_10)
{
 static struct iovec VAR_11 = {((void*)0), 0};

 struct subscriber *VAR_12;
 u32 VAR_13;



 VAR_12 = FUNC_2(sizeof(struct subscriber), VAR_0);
 if (VAR_12 == ((void*)0)) {
  FUNC_11("Subscriber rejected, no memory\n");
  return;
 }
 FUNC_0(&VAR_12->subscription_list);
 FUNC_0(&VAR_12->subscriber_list);



 FUNC_8(VAR_2.user_ref,
   VAR_12,
   VAR_8,
   ((void*)0),
   ((void*)0),
   VAR_1,
   ((void*)0),
   ((void*)0),
   FUNC_6,
   ((void*)0),
   &VAR_12->port_ref);
 if (VAR_12->port_ref == 0) {
  FUNC_11("Subscriber rejected, unable to create port\n");
  FUNC_1(VAR_12);
  return;
 }
 FUNC_7(VAR_12->port_ref, VAR_9);



 VAR_12->lock = FUNC_9(VAR_12->port_ref)->publ.lock;



 FUNC_4(&VAR_2.lock);
 FUNC_3(&VAR_12->subscriber_list, &VAR_2.subscriber_list);
 FUNC_5(&VAR_2.lock);



 VAR_13 = VAR_12->port_ref;
 FUNC_5(VAR_12->lock);



 FUNC_10(VAR_13, 1, &VAR_11);



 if (VAR_7 != 0) {
  FUNC_6(VAR_12, VAR_13,
          VAR_5, VAR_6, VAR_7);
 }
}
