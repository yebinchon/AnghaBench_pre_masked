
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_addr_list {int da_synced; int da_users; int da_addrlen; int da_addr; struct dev_addr_list* next; } ;


 int FUNC_0 (struct dev_addr_list**,int*,int ,int ,int ) ;
 int FUNC_1 (struct dev_addr_list**,int*,int ,int ,int ) ;

int FUNC_2(struct dev_addr_list **VAR_0, int *VAR_1,
      struct dev_addr_list **VAR_2, int *VAR_3)
{
 struct dev_addr_list *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_4 = *VAR_2;
 while (VAR_4 != ((void*)0)) {
  VAR_5 = VAR_4->next;
  if (!VAR_4->da_synced) {
   VAR_6 = FUNC_0(VAR_0, VAR_1,
          VAR_4->da_addr, VAR_4->da_addrlen, 0);
   if (VAR_6 < 0)
    break;
   VAR_4->da_synced = 1;
   VAR_4->da_users++;
  } else if (VAR_4->da_users == 1) {
   FUNC_1(VAR_0, VAR_1,
       VAR_4->da_addr, VAR_4->da_addrlen, 0);
   FUNC_1(VAR_2, VAR_3,
       VAR_4->da_addr, VAR_4->da_addrlen, 0);
  }
  VAR_4 = VAR_5;
 }
 return VAR_6;
}
