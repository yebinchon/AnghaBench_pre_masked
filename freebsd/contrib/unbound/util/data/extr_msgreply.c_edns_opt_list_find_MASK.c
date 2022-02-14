
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct edns_option {scalar_t__ opt_code; struct edns_option* next; } ;



struct edns_option* FUNC_0(struct edns_option* VAR_0, uint16_t VAR_1)
{
 struct edns_option* VAR_2;
 for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->next) {
  if(VAR_2->opt_code == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
