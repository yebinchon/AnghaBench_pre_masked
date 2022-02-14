
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct edns_option {scalar_t__ opt_len; struct edns_option* next; } ;
struct edns_data {struct edns_option* opt_list; int edns_present; } ;



uint16_t
FUNC_0(struct edns_data* VAR_0)
{
 size_t VAR_1 = 0;
 struct edns_option* VAR_2;
 if(!VAR_0 || !VAR_0->edns_present)
  return 0;
 for(VAR_2 = VAR_0->opt_list; VAR_2; VAR_2 = VAR_2->next) {
  VAR_1 += 4 + VAR_2->opt_len;
 }

 return 1 + 2 + 2 + 4 + 2 + VAR_1;
}
