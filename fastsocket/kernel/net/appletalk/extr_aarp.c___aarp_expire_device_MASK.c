
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aarp_entry {struct aarp_entry* next; struct net_device* dev; } ;


 int FUNC_0 (struct aarp_entry*) ;

__attribute__((used)) static void FUNC_1(struct aarp_entry **VAR_0, struct net_device *VAR_1)
{
 struct aarp_entry *VAR_2;

 while (*VAR_0)
  if ((*VAR_0)->dev == VAR_1) {
   VAR_2 = *VAR_0;
   *VAR_0 = (*VAR_0)->next;
   FUNC_0(VAR_2);
  } else
   VAR_0 = &((*VAR_0)->next);
}
