
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct receiver {void (* func ) (struct sk_buff*,void*) ;char* ident; int list; void* data; scalar_t__ matches; void* mask; void* can_id; } ;
struct net_device {int dummy; } ;
struct hlist_head {int dummy; } ;
struct dev_rcv_lists {int entries; } ;
typedef void* canid_t ;
struct TYPE_2__ {scalar_t__ rcv_entries; scalar_t__ rcv_entries_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 struct dev_rcv_lists* FUNC_0 (struct net_device*) ;
 struct hlist_head* FUNC_1 (void**,void**,struct dev_rcv_lists*) ;
 int FUNC_2 (int *,struct hlist_head*) ;
 struct receiver* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct receiver*) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_device *VAR_6, canid_t VAR_7, canid_t VAR_8,
      void (*VAR_9)(struct sk_buff *, void *), void *VAR_10,
      char *VAR_11)
{
 struct receiver *VAR_12;
 struct hlist_head *VAR_13;
 struct dev_rcv_lists *VAR_14;
 int VAR_15 = 0;



 VAR_12 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_5(&VAR_4);

 VAR_14 = FUNC_0(VAR_6);
 if (VAR_14) {
  VAR_13 = FUNC_1(&VAR_7, &VAR_8, VAR_14);

  VAR_12->can_id = VAR_7;
  VAR_12->mask = VAR_8;
  VAR_12->matches = 0;
  VAR_12->func = VAR_9;
  VAR_12->data = VAR_10;
  VAR_12->ident = VAR_11;

  FUNC_2(&VAR_12->list, VAR_13);
  VAR_14->entries++;

  VAR_3.rcv_entries++;
  if (VAR_3.rcv_entries_max < VAR_3.rcv_entries)
   VAR_3.rcv_entries_max = VAR_3.rcv_entries;
 } else {
  FUNC_4(VAR_5, VAR_12);
  VAR_15 = -VAR_0;
 }

 FUNC_6(&VAR_4);

 return VAR_15;
}
