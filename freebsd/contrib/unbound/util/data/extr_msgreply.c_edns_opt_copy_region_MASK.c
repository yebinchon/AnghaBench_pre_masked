
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct edns_option {int opt_len; struct edns_option* next; struct edns_option* opt_data; } ;


 void* FUNC_0 (struct regional*,struct edns_option*,int) ;

struct edns_option* FUNC_1(struct edns_option* VAR_0,
        struct regional* VAR_1)
{
 struct edns_option* VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4;
 while(VAR_0) {

  VAR_4 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_0));
  if(!VAR_4) return ((void*)0);
  VAR_4->next = ((void*)0);


  if(VAR_4->opt_data) {
   VAR_4->opt_data = FUNC_0(VAR_1, VAR_4->opt_data,
    VAR_4->opt_len);
   if(!VAR_4->opt_data)
    return ((void*)0);
  }


  if(VAR_3)
   VAR_3->next = VAR_4;
  else VAR_2 = VAR_4;
  VAR_3 = VAR_4;


  VAR_0 = VAR_0->next;
 }
 return VAR_2;
}
