
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct edns_option {scalar_t__ opt_code; struct edns_option* next; } ;



int FUNC_0(struct edns_option** VAR_0, uint16_t VAR_1)
{




 struct edns_option* VAR_2;
 struct edns_option* VAR_3;
 if(!VAR_0 || !(*VAR_0)) return 0;


 while(VAR_0 && *VAR_0 && (*VAR_0)->opt_code == VAR_1) {
  *VAR_0 = (*VAR_0)->next;
 }

 if(!VAR_0 || !(*VAR_0)) return 1;

 VAR_2 = *VAR_0;
 VAR_3 = (*VAR_0)->next;
 while(VAR_3 != ((void*)0)) {
  if(VAR_3->opt_code == VAR_1) {
   VAR_2->next = VAR_3->next;
   VAR_3 = VAR_3->next;
  } else {
   VAR_2 = VAR_3;
   VAR_3 = VAR_3->next;
  }
 }
 return 1;
}
