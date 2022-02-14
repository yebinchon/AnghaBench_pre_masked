
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aarp_entry {scalar_t__ xmit_count; struct aarp_entry* next; } ;


 int FUNC_0 (struct aarp_entry*) ;
 int FUNC_1 (struct aarp_entry*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct aarp_entry **VAR_1)
{
 struct aarp_entry *VAR_2;

 while (*VAR_1)

  if ((*VAR_1)->xmit_count >= VAR_0) {
   VAR_2 = *VAR_1;
   *VAR_1 = (*VAR_1)->next;
   FUNC_0(VAR_2);
  } else {
   FUNC_1(*VAR_1);
   VAR_1 = &((*VAR_1)->next);
  }
}
