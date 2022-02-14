
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct dst_entry {struct dst_entry* next; } ;
struct TYPE_2__ {int lock; struct dst_entry* list; } ;




 int VAR_0 ;
 struct dst_entry* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dst_entry*,struct net_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct dst_entry *VAR_8, *VAR_9 = ((void*)0);

 switch (VAR_5) {
 case 128:
 case 129:
  FUNC_1(&VAR_3);
  for (VAR_8 = VAR_1; VAR_8; VAR_8 = VAR_8->next) {
   VAR_9 = VAR_8;
   FUNC_0(VAR_8, VAR_7, VAR_5 != 129);
  }

  FUNC_3(&VAR_2.lock);
  VAR_8 = VAR_2.list;
  VAR_2.list = ((void*)0);
  FUNC_4(&VAR_2.lock);

  if (VAR_9)
   VAR_9->next = VAR_8;
  else
   VAR_1 = VAR_8;
  for (; VAR_8; VAR_8 = VAR_8->next) {
   FUNC_0(VAR_8, VAR_7, VAR_5 != 129);
  }
  FUNC_2(&VAR_3);
  break;
 }
 return VAR_0;
}
