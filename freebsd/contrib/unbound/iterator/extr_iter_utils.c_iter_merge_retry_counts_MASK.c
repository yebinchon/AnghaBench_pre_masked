
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {scalar_t__ attempts; struct delegpt_addr* next_usable; int addrlen; int addr; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* usable_list; struct delegpt_addr* target_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct delegpt_addr* FUNC_0 (struct delegpt*,int *,int ) ;
 int FUNC_1 (int ,char*,int *,int ) ;

void FUNC_2(struct delegpt* VAR_2, struct delegpt* VAR_3)
{
 struct delegpt_addr* VAR_4, *VAR_5, *VAR_6;
 for(VAR_4=VAR_2->target_list; VAR_4; VAR_4 = VAR_4->next_target) {
  VAR_5 = FUNC_0(VAR_3, &VAR_4->addr, VAR_4->addrlen);
  if(VAR_5) {
   FUNC_1(VAR_1, "copy attempt count previous dp",
    &VAR_4->addr, VAR_4->addrlen);
   VAR_4->attempts = VAR_5->attempts;
  }
 }
 VAR_6 = ((void*)0);
 VAR_4 = VAR_2->usable_list;
 while(VAR_4) {
  if(VAR_4->attempts >= VAR_0) {
   FUNC_1(VAR_1, "remove from usable list dp",
    &VAR_4->addr, VAR_4->addrlen);

   if(VAR_6)
    VAR_6->next_usable = VAR_4->next_usable;
   else VAR_2->usable_list = VAR_4->next_usable;

   VAR_4 = VAR_4->next_usable;
   continue;
  }
  VAR_6 = VAR_4;
  VAR_4 = VAR_4->next_usable;
 }
}
