
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aarp_entry {struct aarp_entry* next; int expires_at; } ;


 int FUNC_0 (struct aarp_entry*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct aarp_entry **VAR_1)
{
 struct aarp_entry *VAR_2;

 while (*VAR_1)

  if (FUNC_1(VAR_0, (*VAR_1)->expires_at)) {
   VAR_2 = *VAR_1;
   *VAR_1 = (*VAR_1)->next;
   FUNC_0(VAR_2);
  } else
   VAR_1 = &((*VAR_1)->next);
}
