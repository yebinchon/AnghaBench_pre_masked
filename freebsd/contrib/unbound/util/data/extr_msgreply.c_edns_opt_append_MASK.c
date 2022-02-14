
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct regional {int dummy; } ;
struct edns_option {size_t opt_len; struct edns_option* next; int * opt_data; int opt_code; } ;
struct edns_data {struct edns_option* opt_list; } ;


 scalar_t__ FUNC_0 (struct regional*,int) ;
 int * FUNC_1 (struct regional*,int *,size_t) ;

int FUNC_2(struct edns_data* VAR_0, struct regional* VAR_1,
 uint16_t VAR_2, size_t VAR_3, uint8_t* VAR_4)
{
 struct edns_option** VAR_5;
 struct edns_option* VAR_6;


 VAR_6 = (struct edns_option*)FUNC_0(VAR_1, sizeof(*VAR_6));
 if(!VAR_6)
  return 0;
 VAR_6->next = ((void*)0);
 VAR_6->opt_code = VAR_2;
 VAR_6->opt_len = VAR_3;
 VAR_6->opt_data = ((void*)0);
 if(VAR_3 > 0) {
  VAR_6->opt_data = FUNC_1(VAR_1, VAR_4, VAR_3);
  if(!VAR_6->opt_data)
   return 0;
 }


 VAR_5 = &VAR_0->opt_list;
 while(*VAR_5 != ((void*)0))
  VAR_5 = &((*VAR_5)->next);
 *VAR_5 = VAR_6;
 return 1;
}
