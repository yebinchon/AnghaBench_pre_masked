
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {struct edns_option* next; struct edns_option* opt_data; } ;


 int FUNC_0 (struct edns_option*) ;

void FUNC_1(struct edns_option* VAR_0)
{
 struct edns_option* VAR_1;
 while(VAR_0) {
  FUNC_0(VAR_0->opt_data);
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
