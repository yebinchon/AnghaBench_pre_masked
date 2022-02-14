
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {struct edns_option* next; } ;


 int FUNC_0 (struct edns_option*,struct edns_option*) ;

int FUNC_1(struct edns_option* VAR_0, struct edns_option* VAR_1)
{
 int VAR_2;
 while(VAR_0 && VAR_1) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if(VAR_2 != 0)
   return VAR_2;
  VAR_0 = VAR_0->next;
  VAR_1 = VAR_1->next;
 }
 if(VAR_0 || VAR_1) {

  if(VAR_0) return 1;
  if(VAR_1) return -1;
 }
 return 0;
}
