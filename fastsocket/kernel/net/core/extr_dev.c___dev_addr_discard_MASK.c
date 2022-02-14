
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_addr_list {scalar_t__ da_users; scalar_t__ da_gusers; struct dev_addr_list* next; } ;


 int FUNC_0 (struct dev_addr_list*) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dev_addr_list **VAR_0)
{
 struct dev_addr_list *VAR_1;

 while (*VAR_0 != ((void*)0)) {
  VAR_1 = *VAR_0;
  *VAR_0 = VAR_1->next;
  if (VAR_1->da_users > VAR_1->da_gusers)
   FUNC_1("__dev_addr_discard: address leakage! "
          "da_users=%d\n", VAR_1->da_users);
  FUNC_0(VAR_1);
 }
}
