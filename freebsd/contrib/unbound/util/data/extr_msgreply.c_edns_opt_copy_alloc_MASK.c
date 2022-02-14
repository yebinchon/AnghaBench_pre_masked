
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {int opt_len; struct edns_option* next; struct edns_option* opt_data; } ;


 int FUNC_0 (struct edns_option*) ;
 int FUNC_1 (struct edns_option*) ;
 void* FUNC_2 (struct edns_option*,int) ;

struct edns_option* FUNC_3(struct edns_option* VAR_0)
{
 struct edns_option* VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3;
 while(VAR_0) {

  VAR_3 = FUNC_2(VAR_0, sizeof(*VAR_0));
  if(!VAR_3) {
   FUNC_0(VAR_1);
   return ((void*)0);
  }
  VAR_3->next = ((void*)0);


  if(VAR_3->opt_data) {
   VAR_3->opt_data = FUNC_2(VAR_3->opt_data, VAR_3->opt_len);
   if(!VAR_3->opt_data) {
    FUNC_1(VAR_3);
    FUNC_0(VAR_1);
    return ((void*)0);
   }
  }


  if(VAR_2)
   VAR_2->next = VAR_3;
  else VAR_1 = VAR_3;
  VAR_2 = VAR_3;


  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
